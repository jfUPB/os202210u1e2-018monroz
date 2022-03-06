#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "subscriber.h"

void __sub_reaction(void* this) {
    Observer_t* observer = (Observer_t *) this;
    printf("OMG he talked to a me (sub)! %s", observer->name);
}

Subscriber_t* sub_new(){
    return malloc(sizeof(Subscriber_t));
}

void Subscriber_ctor(Subscriber_t *this, char* name) {

    Observer_ctor((Observer_t *)this, name);
    this->observer.name = name;
    this->observer.obs_react = __sub_reaction;
}

void Subscriber_dtor(Subscriber_t *this) {
    Observer_dtor((Observer_t *)this);
}