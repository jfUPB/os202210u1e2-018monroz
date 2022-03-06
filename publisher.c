#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"

Publisher_t * publisher_new(){
    return (Publisher_t*)malloc(sizeof(Publisher_t));
}

void Publish(Publisher_t* this){
    
    for (int i = 0; i < this->subs; i++)
    {
        Observer_reaction(this->observers[i]);
    }
    
}

void Publisher_ctor(Publisher_t * this){
    this->subs = 0;
}

void Publisher_dtor(Publisher_t * this){
    free(this);
}

void Add_Observer(Publisher_t * this, Observer_t* sub){
    this->observers[this->subs] = sub;
    this->subs++;
}

