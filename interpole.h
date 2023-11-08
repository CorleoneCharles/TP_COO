#ifndef INTERPOLE_H
#define INTERPOLE_H

#include "nr3.h"
// Responsabilité : Calculer la valeur interpolée d'une image à des coordonnées données
// test : interpoler aux frontières et à l'interieur de l'image pour vérifier

class interpole{
  public : 
    virtual int interpolation(const NRmatrix<int>& Image, double x, double y, int* OK)const;
};

#endif
