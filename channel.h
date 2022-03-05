#ifndef CHANNEL_H
#define CHANNEL_H
#include "publisher.h"
#include "observer.h"
#include <stdlib.h>
#include <stdio.h>

 typedef enum __channel_event
  {
    IDK
  } ChannelEvent;

typedef struct {
    char*  name;
    ChannelEvent event;
    Publisher_t* publisher; 
} Channel_t;



void Notify(Channel_t*);

void Channel_dtor(Channel_t*);

Channel_t* Channel_new(char*);

void Add_subscriber(Channel_t* this, Observer_t* observer);

ChannelEvent getEvent(Channel_t* this);



#endif /* CHANNEL_H */