#include "subscriber.h"
#include "channel.h"
#include <stdio.h>

void Subscriber_dtor(Subscriber_t* this){
    free(this);
}

void Subscribe(Subscriber_t* this, Channel_t* channel){

    Add_subscriber(channel, this->observer);
    
    printf("Ty for the sub %s :D\n", this->name);
}

void handleChannelEvent(Subscriber_t* this, Channel_t* channel){
    printf("OMG %s talked to %s!", channel->name, this->name);
}

void RefreshMailBox(Subscriber_t* this, void* publisher){
    handleChannelEvent(this, (Channel_t*) publisher);
}

Subscriber_t* Subscriber_new(char* name){
    Subscriber_t* this = malloc(sizeof(Subscriber_t));
    this->name = name;
    this->observer = Observer_new(this, (void (*)(void*,void*))RefreshMailBox);
    return this;
}