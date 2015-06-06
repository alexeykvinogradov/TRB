#include "Image.h"

ImageCreateResult ImageCreateFromFile(const TCHAR* fileName, Image** outImage)
{
  ImageCreateResult res = IMAGE_CREATE_RESULT_OK;

  *outImage = (Image*)malloc(sizeof(Image));

  return res;
}