#ifndef TRB_TRBCOMMON_RECT_H
  #define TRB_TRBCOMMON_RECT_H

  #include "ApiDefinitions.h"

  typedef int RectValue;

  typedef struct tagRect
  {
    // Top-left x and y
    RectValue x;
    RectValue y;
    RectValue width;
    RectValue height;
  } Rect;

  //! Forward declaration
  struct Point;

#if defined(__cplusplus)
  extern "C" {
#endif // defined(__cplusplus)

  /*!
   *\brief Get top left Point instance
   *\param in Input rect
   *\param out Output point
   */
  TRBCOMMONAPI void RectTopLeft(const Rect* in, Point* out);

  /*!
   *\brief Get top right Point instance
   *\param in Input rect
   *\param out Output point
   */
  TRBCOMMONAPI void RectTopRight(const Rect* in, Point* out);

  /*!
   *\brief Get bottom left Point instance
   *\param in Input rect
   *\param out Output point
   */
  TRBCOMMONAPI void RectBottomLeft(const Rect* in, Point* out);

  /*!
   *\brief Get bottom right Point instance
   *\param in Input rect
   *\param out Output point
   */
  TRBCOMMONAPI void RectBottomRight(const Rect* in, Point* out);

  /*!
   *\brief Check, whether two rectangles intersect
   *\param in0 First rectangle instance
   *\param in1 Second rectangle instance
   *\return 1 for intersection and 0 in case no
   */
  TRBCOMMONAPI int RectIntersects(const Rect* in0, const Rect* in1);

  /*!
   *\brief Intersect rectangles
   *\param in0 First rectangle instance
   *\param in1 Second rectangle instance
   *\param out Output intersection rectangle, Rect with 0, 0, 0, 0 is constructed in case Rect's don't intersect
   */
  TRBCOMMONAPI void RectIntersect(const Rect* in0, const Rect* in1, Rect* out);

#if defined(__cplusplus)
  };
#endif // defined(__cplusplus)

#endif // TRB_TRBCOMMON_RECT_H