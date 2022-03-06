#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "channel.h"

void __channel_way(void* this) {
    Publisher_t* publisher = (Publisher_t *) this;
    printf("Notifying via YT! by %s \n", publisher->name);
}

Channel_t *Channel_new(){
    return malloc(sizeof(Channel_t));
}

void Channel_ctor(Channel_t* this, char* name){
    Publisher_ctor((Publisher_t*)this);
    this->publisher.name = name;
    this->publisher.notification_way = __channel_way;
}

void Channel_dtor(Channel_t* this){
    free(this);
}

