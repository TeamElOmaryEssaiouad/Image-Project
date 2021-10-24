#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H
#include"PNG.h"
#include "HSLAPixel.h"

class Spotlight : public PNG
{
public:
    Spotlight(string filname );
    //int xCenter();
    //int yCenter();
    PNG createSpotlight(PNG img, int centerX, int centerY);

private:
    int xCenter;
    int yCenter;
};

#endif // SPOTLIGHT_H
