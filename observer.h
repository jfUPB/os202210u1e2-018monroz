#ifndef OBSERVER_H
#define OBSERVER_H

/* Shape's attributes... */

typedef void (*obs_react_t)(void *);

typedef struct {
    char*  name; /* Estado del objeto publicador */
    obs_react_t obs_react;
} Observer_t;

Observer_t * Observer_new(); //New observer

void Observer_dtor(Observer_t *); //Destructor
void Observer_ctor(Observer_t *,char*); //Constructor (nombre)
void Update(); //Informa

void Observer_reaction(Observer_t*);



#endif /* OBSERVER_H */