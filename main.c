#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "observer.h"
#include "subscriber.h"
#include "publisher.h"
#include "channel.h"



int main(int argc, char* argv[]) {

    printf("CASE 1: SIMPLE OBSERVER, SIMPLE PUBLISHER\n");

    Observer_t *observer = Observer_new();

    Observer_ctor(observer, "Observer 1");

    Publisher_t* publisher = publisher_new();

    Publisher_ctor(publisher);

    Add_Observer(publisher, observer);

    Publish(publisher);


    printf("CASE 2: YOUTUBE SUBSCRIBER, YOUTUBE CHANNEL\n");
    
    Subscriber_t * sub1 = sub_new();

    Subscriber_ctor(sub1, "018monroz");

    Channel_t* channel = Channel_new();

    Channel_ctor(channel, "Free C tutorial");

    Add_Observer((Publisher_t*) channel, (Observer_t*) sub1);

    Publish((Publisher_t*)channel);
    


    return EXIT_SUCCESS;
}