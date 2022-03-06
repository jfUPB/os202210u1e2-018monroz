#ifndef PUBLISHER_H
#define PUBLISHER_H
#include "observer.h" //Referencia a la clase observador

typedef struct {
    char* name;
    Observer_t* observers[20];
    int subs;
} Publisher_t;

Publisher_t * publisher_new(); //New Publisher
void Publisher_dtor(Publisher_t *); 
void Publisher_ctor(Publisher_t *);

void Publish(Publisher_t* this);

void Add_Observer(Publisher_t* this, Observer_t*);


#endif /* PUBLISHER_H */