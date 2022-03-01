#ifndef OBSERVER_H
#define OBSERVER_H

/* Shape's attributes... */
typedef struct {
    char*  name; /* Estado del objeto publicador */
} Observer_t;

Observer_t * Observer_new(char*);

void Observer_dtor(Observer_t *);
void Observer_ctor(Observer_t *);
void Update();



#endif /* OBSERVER_H */