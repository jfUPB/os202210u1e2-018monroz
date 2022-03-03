#include <stdio.h>
#include "publisher.h"
#include "observer.h"

int main(int argc, char** argv){

    Publisher_t* publisher = publisher_new();
    Publisher_ctor(publisher);
    printf("Publisher has been created!\n");

    Observer_t* observer1 = Observer_new();
    Observer_ctor(observer1, "ob1");
    printf("Observador creado!\n");

    Observer_t* observer2 = Observer_new();
    Observer_ctor(observer2, "ob2");
    printf("Observador creado!\n");

    Add_Subscriber(publisher, observer1);
    Add_Subscriber(publisher, observer2);

    Publish(publisher, "inicio");


}