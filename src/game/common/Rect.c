#include "Point.h"

#include "Rect.h"

void RectTopLeft(const Rect* in, Point* out)
{
  out->x = in->x;
  out->y = in->y;
}

void RectTopRight(const Rect* in, Point* out)
{
  out->x = in->x + in->width;
  out->y = in->y;
}

void RectBottomLeft(const Rect* in, Point* out)
{
  out->x = in->x;
  out->y = in->y + in->height;
}

void RectBottomRight(const Rect* in, Point* out)
{
  out->x = in->x + in->width;
  out->y = in->y + in->height;
}

int RectIntersects(const Rect* in0, const Rect* in1)
{
  // TODO:
  return 0;
}

void RectIntersect(const Rect* in0, const Rect* in1, Rect* out)
{
  // TODO:
}
