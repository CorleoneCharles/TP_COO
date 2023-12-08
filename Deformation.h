#ifndef DEFORMATION_H
#define DEFORMATION_H

#include "nr3.h"
#include "transformation.h"
#include "interpole.h"

//Responsabilité : Deformer une image selon une transformation rigide donnée
// Tests : Déformer des images avec des paramètres connus et vérifier les résultats

class Deformation {
public:
    void deformImage(const NRmatrix<int>& Image,const NRmatrix<int>& Image_deforme, const NRmatrix<int>& Mask, VecDoub& param, const interpole& meth_interpole) const; //cf nr3
};

#endif
