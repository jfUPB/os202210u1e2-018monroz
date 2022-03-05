#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"

Observer_t* Observer_new(void* impl, void (*funcion)(void*, void*)){
    Observer_t* this = malloc(sizeof(Observer_t));
    this->notifyImpl = funcion;
    return this;
}


void Observer_dtor(Observer_t* this){
    this->name = NULL;
    free(this);
}

void Update(Observer_t* this, void* subject){
    this->notifyImpl(this->impl, subject);
}




