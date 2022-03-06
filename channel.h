#ifndef CHANNEL_H_
#define CHANNEL_H_

#include "publisher.h"

typedef struct {
    Publisher_t publisher;
    char* name;
} Channel_t;

Channel_t *Channel_new();

void Channel_ctor(Channel_t *, char*);

void Channel_dtor(Channel_t *);


#endif /* CHANNEL_H_ */