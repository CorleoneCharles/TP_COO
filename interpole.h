#ifndef INTERPOLE_H
#define INTERPOLE_H

#include "nr3.h"

class interpole{
  public : 
    virtual int interpolation(const NRmatrix<int>& Image, double x, double y, int* OK)const;
};

#endif
