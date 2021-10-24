#include "spotlight.h"
#include "math.h"
#include "image.h"
#include"HSLAPixel.h"
#include"PNG.h"
Spotlight::Spotlight(string filname ):PNG()
{
    readFromFile(filname);
}
 PNG Spotlight :: createSpotlight(PNG image, int centerX, int centerY) {
     int xx=0, yy=0,z;
     for (unsigned x = 0; x < image.width(); x++) {
             for (unsigned y = 0; y < image.height(); y++) {
             HSLAPixel & pixel = image.getPixel(x, y);
             xx=x-centerX;
             yy=y-centerY;
             z=sqrt((xx*xx)+(yy*yy));
             if(z<160)
                     pixel.l=pixel.l-.005*z*pixel.l;
             else
                     pixel.l = pixel.l - 0.8*pixel.l;
             }
         }
       return image;
     }

