#ifndef TRB_TRBCOMMON_IMAGE_H
  #define TRB_TRBCOMMON_IMAGE_H

  #include <windows.h>

  #include "ApiDefinitions.h"

  typedef struct tagBitmapImageData
  {
    HBITMAP     handle;
    BITMAPINFO  info;
  } BitmapImageData;

  typedef struct tagPngImageData
  {
    unsigned* pixels;
    unsigned  width;
    unsigned  height;
  };

  typedef void (*ImageDrawFunc)(HDC);

  typedef enum tagImageType
  {
    IMAGE_TYPE_UNDEFINED = -1,
    IMAGE_TYPE_BITMAP    =  0,
    IMAGE_TYPE_PNG           ,

    //! Number of supported image types
    IMAGE_TYPES_COUNT        , // 2
  } ImageType;

  typedef enum tagImageCreateResult
  {
    IMAGE_CREATE_RESULT_UNDEFINED        = -1,
    IMAGE_CREATE_RESULT_OK
    IMAGE_CREATE_RESULT_UNSUPPORTED_TYPE =  0,
    IMAGE_CREATE_RESULT_FILE_NOT_FOUND       , // 1
    IMAGE_CREATE_RESULT_NO_MEMORY            , // 2
    IMAGE_CREATE_RESULT_BAD_FILE             , // 3

    //! Number of recognized image errors
    IMAGE_CREATE_RESULTS_COUNT               , // 4
  } ImageCreateResult;

  typedef struct tagImage
  {
    void*         imageData;
    ImageDrawFunc drawFunction;
    ImageType     imageType;
  } Image;

#if defined(__cplusplus)
  extern "C" {
#endif // defined(__cplusplus)

  /*!
   *\brief Create image from file
   *\param fileName Name of the image file
   *\param outImage Output image descriptor, it's type is determined by the file extensions
   *\return Image creation results corresponding to ImageCreateResult
   */
  TRBCOMMONAPI ImageCreateResult ImageCreateFromFile(const TCHAR* fileName, Image** outImage);

  /*!
   *\brief Destroy image and it's data
   *\param image Image pointer, free will be called on it
   */
  TRBCOMMONAPI void ImageDestroy(Image* image);



#if defined(__cplusplus)
  };
#endif // defined(__cplusplus)


#endif // TRB_TRBCOMMON_IMAGE_H