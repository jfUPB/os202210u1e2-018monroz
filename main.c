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


    printf("CASE 2: YOUTUBE SUBSCRIBERS, YOUTUBE CHANNEL\n");
    
    Subscriber_t * sub1 = sub_new();

    Subscriber_ctor(sub1, "018monroz");

    Subscriber_t * sub2 = sub_new();

    Subscriber_ctor(sub2, "Masterpro");

    Subscriber_t * sub3 = sub_new();

    Subscriber_ctor(sub3, "Qwerty12");

    Channel_t* channel = Channel_new();

    Channel_ctor(channel, "Free C tutorial");

    Add_Observer((Publisher_t*) channel, (Observer_t*) sub1);
    Add_Observer((Publisher_t*) channel, (Observer_t*) sub2);
    Add_Observer((Publisher_t*) channel, (Observer_t*) sub3);

    Publish((Publisher_t*)channel);

    
    printf("CASE 3: YOUTUBE SUBSCRIBERS AND SIMPLE OBSERVERS, YOUTUBE CHANNEL\n");

    Channel_t* channel2 = Channel_new();

    Channel_ctor(channel2, "Generic YT Channel");

    Subscriber_t * sub12 = sub_new();

    Subscriber_ctor(sub12, "018monroz");

    Subscriber_t * sub22 = sub_new();

    Subscriber_ctor(sub22, "Masterpro");

    Observer_t *observer2 = Observer_new();

    Observer_ctor(observer2, "Observer 2");

    Add_Observer((Publisher_t*) channel2, (Observer_t*) sub12);
    Add_Observer((Publisher_t*) channel2, (Observer_t*) sub22);
    Add_Observer((Publisher_t*) channel2, observer2);


    Publish((Publisher_t*)channel2);

    return EXIT_SUCCESS;
}