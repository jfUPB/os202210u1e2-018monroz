#include <stdio.h>
#include "publisher.h"
#include "observer.h"
#include "subscriber.h"
#include "channel.h"

int main(int argc, char** argv){

    Subscriber_t* monroz = Subscriber_new("monroz");
    Subscriber_t* masterpro = Subscriber_new("masterpro");
    printf("Hecho\n");
    Channel_t* rubius = Channel_new("Rubius");
    printf("Hecho\n");
    Subscribe(monroz, rubius);
    Subscribe(masterpro, rubius);
    printf("Hecho\n");

    Notify(rubius);

    Subscriber_dtor(monroz);
    Channel_dtor(rubius);

    return 0;

}