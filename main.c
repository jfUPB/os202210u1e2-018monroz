#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "observer.h"
#include "subscriber.h"
#include "publisher.h"



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
    
    Publisher_t* publisher = publisher_new();
    Publisher_ctor(publisher);
    printf("5\n");

    Add_Observer(publisher, observer);
    printf("6\n");
    Add_Observer(publisher, (Observer_t*) sub1);
    printf("7\n");

    Publish(publisher);
    


    return EXIT_SUCCESS;
}