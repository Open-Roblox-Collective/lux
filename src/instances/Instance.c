#include <stdlib.h>
#include <stddef.h>
#include <sds.h>

typedef struct Instance
{
    Instance *parent; // most basic operation
    sds *name;

    void (*destroy)(Instance *self);
} Instance;

Instance *instance_make(sds *iname)
{
    Instance *intemp = malloc(sizeof(*intemp));

    if (!intemp)
        return NULL;

    *intemp = (Instance){
        .parent = NULL,
        .name = iname,
        .destroy = Instance_destroy};

    return intemp;
}

void Instance_destroy(Instance *self)
{
    if (!self)
        return;

    if (self->name)
        sdsfree(self->name);

    free(self);
}