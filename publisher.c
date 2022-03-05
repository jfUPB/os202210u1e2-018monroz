#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"

Publisher_t * publisher_new(void* impl){
    Publisher_t* this =  malloc(sizeof(Publisher_t));
    this->impl = impl;
    this->subs = 0;
    this->observers = malloc(20*sizeof(Observer_t));
    return this;
}

void Publish(Publisher_t* this){
    
    for (int i = 0; i < 20; i++)
    {
        if (this->observers[i] != NULL) {

			Update(this->observers[i], this->impl);
		
        }
    }
    
}

void Publisher_ctor(Publisher_t * this){
    this->subs = 0;
    
}

void Publisher_dtor(Publisher_t * this){
    free(this);
}

void Register_observer(Publisher_t* this, Observer_t* observer){
    if(this->subs>19)
    {
        printf("All possible Observers Occuped");
        return;
    }
    *this->observers[this->subs] = *observer;
    this->subs++;
}

