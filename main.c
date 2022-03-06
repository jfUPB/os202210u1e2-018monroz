#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "observer.h"
#include "subscriber.h"
#include "publisher.h"
#include "channel.h"



int main(int argc, char* argv[]) {
    printf("0\n");
    Observer_t *observer = Observer_new();
    printf("1\n");
    
    Observer_ctor(observer, "Observador 1\n");
    printf("2\n");
    
    Subscriber_t * sub1 = sub_new();
    printf("3\n");
    Subscriber_ctor(sub1, "Subscriptor1\n");
    printf("4\n");
    
    Channel_t* channel = Channel_new();
    Channel_ctor(channel, "rubius");
    printf("5\n");

    Add_Observer((Publisher_t*) channel, observer);
    printf("6\n");
    Add_Observer((Publisher_t*) channel, (Observer_t*) sub1);
    printf("7\n");

    Publish((Publisher_t*)channel);
    


    return EXIT_SUCCESS;
}