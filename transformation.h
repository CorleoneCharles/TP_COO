#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "nr3.h"

//Responsabilité : Appliquer des transformations géométriques aux coordonnées 
// tests à faire : appliquer différentes transformations et vérifier les résultats

class Transformation {
public:
  void transforme(vecDouble& param, double x, double y, double* x_res, double* y_res) const;
};

#endif
