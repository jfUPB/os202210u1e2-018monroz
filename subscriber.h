#ifndef SUBSCRIBER_H_
#define SUBSCRIBER_H_

#include "observer.h"

typedef struct {
    Observer_t observer;
} Subscriber_t;

Subscriber_t *sub_new();

void Subscriber_ctor(Subscriber_t *, char*);

void Subscriber_dtor(Subscriber_t *);


#endif /* SUBSCRIBER_H_ */