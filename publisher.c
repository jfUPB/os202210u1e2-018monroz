#include <stdlib.h>
#include <stdio.h>
#include "publisher.h"
#include "observer.h"


void __Notification_way(void *this){
    Publisher_t* publisher = (Publisher_t*) this;
    printf("Notificating via Mail! %s \n", publisher->name);
}

void Notification_way(Publisher_t* this){
    this->notification_way(this);
}

Publisher_t * publisher_new(){
    return (Publisher_t*)malloc(sizeof(Publisher_t));
}

void Publish(Publisher_t* this){
    Notification_way(this);
    for (int i = 0; i < this->subs; i++)
    {
        Observer_reaction(this->observers[i]);
    }
    
}

void Publisher_ctor(Publisher_t * this){
    this->subs = 0;
    this->notification_way = &__Notification_way;
}

void Publisher_dtor(Publisher_t * this){
    free(this);
}

void Add_Observer(Publisher_t * this, Observer_t* sub){
    this->observers[this->subs] = sub;
    this->subs++;
}



