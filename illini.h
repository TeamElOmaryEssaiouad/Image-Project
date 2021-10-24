#ifndef ILLINI_H
#define ILLINI_H
#include "PNG.h"

class Illini: public PNG
{
public:
     using PNG::PNG;
    Illini(string,int,int);
 private:
    int color1;
    int color2;

};

#endif // ILLINI_H
