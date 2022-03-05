#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H
#include "publisher.h"
#include "observer.h"
#include "channel.h"
#include <stdlib.h>


/* Shape's attributes... */
typedef struct {
    char*  name; /* Estado del objeto publicador */
    Observer_t* observer;
} Subscriber_t;

Subscriber_t * Subscriber_new(char*); //New observer

void Subscriber_dtor(Subscriber_t*); //Destructor

void Subscribe(Subscriber_t*, Channel_t*); //Informa




#endif /* SUBSCRIBER_H */