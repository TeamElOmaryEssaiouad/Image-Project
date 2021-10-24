#ifndef IMAGE_H
#define IMAGE_H
#include"PNG.h"


class Image:public PNG
{
public:
    using PNG::PNG;
    Image(string);
    //LIGHTEN
    void  lighten(double amount=.1);
    void saturate(double amount=.1);
    void rotatecolor (double angle);
};

#endif // IMAGE_H
