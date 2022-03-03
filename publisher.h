#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "observer.h" //Referencia a la clase observador

typedef struct {
    char *  state; /* Estado del objeto publicador */
    Observer_t (* subscribers)[20]; /* Lista de observadores pendientes al publicador */
    int subs; // Cantidad de subs, necesario para recorrer lista.
} Publisher_t;

Publisher_t * publisher_new(); //New Publisher
void Publisher_dtor(Publisher_t *); 
void Publisher_ctor(Publisher_t *);

void Publish(Publisher_t* this, char*);

void Add_Subscriber(Publisher_t* this, Observer_t*);


#endif /* PUBLISHER_H */