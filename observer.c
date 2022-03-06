#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"

void __Observer_reaction(void *this){
    Observer_t* observer = (Observer_t*) this;
    printf("I got a mail! * %s opened the mail* \n", observer->name);
}

Observer_t* Observer_new(){
    return (Observer_t*)malloc(sizeof(Observer_t));
}

void Observer_ctor(Observer_t* this, char* name){
    this->name = name;
    this->obs_react = &__Observer_reaction;
    printf("Creado\n");
}

void Observer_dtor(Observer_t* this){
    this->name = NULL;
    free(this);
}


void Observer_reaction(Observer_t* this){
    this->obs_react(this);
}



