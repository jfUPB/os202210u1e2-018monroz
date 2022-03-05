#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "observer.h" //Referencia a la clase observador

typedef struct {
    char *  state; /* Estado del objeto publicador */
    Observer_t (* observers)[20]; /* Lista de observadores pendientes al publicador */
    int subs; // Cantidad de subs, necesario para recorrer lista.

    void* impl;
} Publisher_t;

Publisher_t * publisher_new(void*); //New Publisher
void Publisher_dtor(Publisher_t *); 
void Publisher_ctor(Publisher_t *);
void Register_observer(Publisher_t*,Observer_t* );

void Publish(Publisher_t*);


#endif /* PUBLISHER_H */