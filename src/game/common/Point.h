#ifndef TRB_TRBCOMMON_POINT_H
  #define TRB_TRBCOMMON_POINT_H

  #include "ApiDefinitions.h"

  typedef int PointValue;

  typedef struct tagPoint
  {
    PointValue x;
    PointValue y;
  } Point;

#if defined(__cplusplus)
  extern "C" {
#endif // defined(__cplusplus)

  /*!
   *\brief Calculate sum of two points
   *\param in0 Left-hand input
   *\param in1 Right-hand input
   *\param out Output
   */
  TRBCOMMONAPI void PointAdd(const Point* in0, const Point* in1, Point* out);

  /*!
   *\brief Substract two points
   *\param in0 Left-hand input
   *\param in1 Right-hand input
   *\param out Output
   */
  TRBCOMMONAPI void PointSubstract(const Point* in0, const Point* in1, Point* out);

  /*!
   *\brief Multiply point on scalar
   *\param in0 Left-hand input
   *\param scalar Scalar value
   *\param out Output
   */
  TRBCOMMONAPI void PointMultiply(const Point* in0, PointValue scalar, Point* out);


#if defined(__cplusplus)
  };
#endif // defined(__cplusplus)

#endif // TRB_TRBCOMMON_POINT_H