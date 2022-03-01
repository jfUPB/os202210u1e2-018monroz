#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "observer.h" //Referencia a la clase observador

typedef struct {
    char *  state; /* Estado del objeto publicador */
    Observer_t * subscribers; /* Lista de observadores pendientes al publicador */
} Publisher_t;

Publisher_t * publisher_new();
void Publisher_ctor(Publisher_t *, int);
void Publisher_dtor(Publisher_t *);





#endif /* PUBLISHER_H */