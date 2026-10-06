#include <box3d/box3d.h>

// physics is never really destroyed. c will usually destroy it when it's parent DataModel is.

typedef struct Phys Phys;

struct Phys
{
  b3WorldId world;
  void (*step)(Phys *self, float timeStep, int subStepCount);
};

void phys_step(Phys *self, float timeStep, int subStepCount)
{
  b3World_Step(self->world, timeStep, subStepCount);
}

Phys makePhys(void)
{
  b3WorldDef world_def = b3DefaultWorldDef();

  Phys ptemp = {
      .world = b3CreateWorld(&world_def),
      .step = phys_step};

  return ptemp;
}

void phys_destroy(Phys *self)
{
  b3DestroyWorld(self->world);
}