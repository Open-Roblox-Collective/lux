#pragma once

#include <stdlib.h>
#include <stddef.h>
#include <sds.h>

typedef struct Instance Instance;

void Instance_destroy(Instance *self);

Instance *instance_make(sds *iname);

Instance *Instance_new(void);