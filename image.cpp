#include "image.h"
# include "PNG.h"

Image::Image(string filename):PNG()
{
    readFromFile(filename);

}
void Image::lighten(double amount)

{
    for(unsigned i=0;i< width();i++){
        for(unsigned j=0;j< height();j++)
        {
            HSLAPixel & P= getPixel(i,j);

            P.l +=amount;
            //ne pas depasser 1
            P.l = (P.l <1)? P.l :1;
            //ne pas depaser 0
            P.l=(P.l<0) ? 0 : P.l;
        }
}
}
void Image::saturate(double amount)

{
    for(unsigned i=0;i< width();i++)
        for(unsigned j=0;j< height();j++)
        {
            HSLAPixel & P= getPixel(i,j);

            P.s +=amount;
            //ne pas depasser 1
            P.s = (P.s <1)? P.s :1;
            //ne pas depaser 0
            P.s=(P.s<0) ? 0 : P.s;
        }
}
void Image::rotatecolor(double angle)

{
    for(unsigned i=0;i< width();i++)
        for(unsigned j=0;j< height();j++)
        {
            HSLAPixel & P= getPixel(i,j);
            P.h += angle;
            //S'assurer  que P.h < 360
            while( P.h > 360)
                P.h -= 360;
            //S'assurer  que P.h >0
            while( P.h <0)
                P.h += 360;

        }
}

