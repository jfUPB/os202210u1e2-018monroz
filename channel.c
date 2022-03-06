#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "channel.h"

Channel_t *Channel_new(){
    return malloc(sizeof(Channel_t));
}

void Channel_ctor(Channel_t* this, char* name){
    Publisher_ctor((Publisher_t*)this);
    this->name = name;
}

void Channel_dtor(Channel_t* this){
    free(this);
}

