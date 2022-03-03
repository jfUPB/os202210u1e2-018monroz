#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"

Observer_t* Observer_new(){
    return (Observer_t*)malloc(sizeof(Observer_t));
}

void Observer_ctor(Observer_t* this, char* name){
    this->name = name;
}

void Observer_dtor(Observer_t* this){
    this->name = NULL;
    free(this);
}

void Update(Observer_t* this, char* msg){
    printf("%s has been updated: %s\n", this->name, msg);
}

