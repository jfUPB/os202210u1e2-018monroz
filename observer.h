#ifndef OBSERVER_H
#define OBSERVER_H


/* Shape's attributes... */
typedef struct {
    void (*notifyImpl)(void*, void*);
    void* impl;
} Observer_t;

Observer_t * Observer_new(void* impl, void(*funcion)(void*, void*)); //New observer

void Observer_dtor(Observer_t *); //Destructor

void Observer_ctor(Observer_t *,char*); //Constructor (nombre)

void Update(Observer_t*, void*); //Informa





#endif /* OBSERVER_H */