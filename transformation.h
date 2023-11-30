#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include "nr3.h"

//Responsabilité : Appliquer des transformations géométriques aux coordonnées 
// tests à faire : appliquer différentes transformations et vérifier les résultats

class Transformation {
public:
  void transforme(vecDouble& param, double x, double y, double* x_res, double* y_res) const;
};
// vecDouble est un vecteur de doubles qui contient les paramètres de la transformation. Il est défini dans nr3.h
// x et y sont les coordonnées à transformer
// les pointeurs sur x_res et y_res permettent de stocker le resultat de la transformation
#endif
