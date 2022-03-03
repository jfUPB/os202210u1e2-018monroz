#ifndef OBSERVER_H
#define OBSERVER_H

/* Shape's attributes... */
typedef struct {
    char*  name; /* Estado del objeto publicador */
} Observer_t;

Observer_t * Observer_new(); //New observer

void Observer_dtor(Observer_t *); //Destructor
void Observer_ctor(Observer_t *,char*); //Constructor (nombre)
void Update(); //Informa



#endif /* OBSERVER_H */