#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"

Publisher_t * publisher_new(){
    return (Publisher_t*)malloc(sizeof(Publisher_t));
}

void Publish(Publisher_t* this, char* msg){
    
    for (int i = 0; i < this->subs; i++)
    {
        Update(this->subscribers[i], msg);
    }
    
}

void Publisher_ctor(Publisher_t * this){
    this->subs = 0;
    this->subscribers = malloc(sizeof(this->subscribers));
}

void Publisher_dtor(Publisher_t * this){
    free(this);
}

void Add_Subscriber(Publisher_t * this, Observer_t* sub){
    *this->subscribers[this->subs] = *sub;
    this->subs++;
}