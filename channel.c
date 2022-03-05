#include "channel.h"



void Notify(Channel_t* this){
    printf("Boyz we are streaming rn!\n");
    printf("pr1");
    printf("Welcomeeeeee to %s!\n", this->name);
    printf("Welcomeeeeee to %s!\n", this->name);
    printf("Pr2");
    printf("Welcomeeeeee to %s!\n", this->name);
    this->event = IDK;
    
    Publish(this->publisher);
}


void Channel_dtor(Channel_t* this){
    Publisher_dtor(this->publisher);
    free(this);
}

ChannelEvent getEvent(Channel_t* this){
    return this->event;
}

void Add_subscriber(Channel_t* this, Observer_t* observer) {
   Register_observer(this->publisher, observer);
}

Channel_t* Channel_new(char* name){
    Channel_t* this = malloc(sizeof(Channel_t));
    this->name = name;
    this->publisher = publisher_new(this);
    return this;
}