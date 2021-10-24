#include "grayscale.h"

Grayscale::Grayscale(string filename):PNG(){
    readFromFile(filename);

      for (unsigned i = 0; i <width(); i++) {
        for (unsigned j = 0; j < height(); j++) {
          HSLAPixel &P = getPixel(i, j);

         P.s = 0;
        }
      }


    }










