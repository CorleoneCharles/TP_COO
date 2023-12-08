#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "nr3.h"

//Responsabilité : Appliquer des transformations géométriques aux coordonnées 
// tests à faire : appliquer différentes transformations et vérifier les résultats

class Transformation {
public:
  void transforme(vecDoub& param, double x, double y, double* x_transfo, double* y_transfo) const;
double theta=param[0];
double tx=param[1];
double ty=param[2];
*xtransfo=cos(theta)*x-sin(theta)*y+tx;
*ytransfo=cos(theta)*y+sin(theta)*x+ty;

};

#endif
