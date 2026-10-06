#pragma once

typedef struct Phys Phys;

Phys makePhys(void);

void phys_step(Phys *self, float timeStep, int subStepCount);

void phys_destroy(Phys *self);
