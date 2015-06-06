#include "Point.h"

void PointAdd(const Point* in0, const Point* in1, Point* out)
{
  out->x = in0->x + in1->x;
  out->y = in0->y + in1->y;
}

void PointSubstract(const Point* in0, const Point* in1, Point* out)
{
  out->x = in0->x - in1->x;
  out->y = in0->y - in1->y;
}

void PointMultiply(const Point* in0, PointValue scalar, Point* out)
{
  out->x = in0->x * scalar;
  out->y = in0->y * scalar;
}