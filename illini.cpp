#include "illini.h"
#include "math.h"

Illini::Illini(string filename, int color1=11, int color2=216 ):PNG( )
{
    this->color1=color1;
    this->color2=color2;
    readFromFile(filename);

    for (unsigned i = 0; i< width(); i++){
        for (unsigned j=0; j<height();j++){
          HSLAPixel& P = getPixel(i,j);
          if(P.h >=0 && P.h <=180){
              P.h=abs(P.h-color1)<= abs(P.h-color2)? 11 : 216;}
          else if(P.h <=360 && P.h >=180){
              P.h=abs(P.h-color2)<= (360-P.h+11)? 216 :11;

      }


    }
    }
}



