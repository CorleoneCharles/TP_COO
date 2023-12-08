#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "nr3.h"

//Responsabilité : Appliquer des transformations géométriques aux coordonnées 
// tests à faire : appliquer différentes transformations et vérifier les résultats

class Transformation {
public:
  void transforme(vecDouble& param, double x, double y, double* x_transfo, double* y_transfo) const;
double theta=vecDouble[1];
double tx=vecDouble[2];
double ty=vecDouble[3];
xtransfo=cos(theta)*x-sin(theta)*y+tx;
ytransfo=cos(theta)*y+sin(theta)*x+ty;

};

#endif
