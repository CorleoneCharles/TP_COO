#ifndef DEFORMATION_H
#define DEFORMATION_H

#include "nr3.h"
#include "transformation.h"
#include "interpole.h"

//Responsabilité : Deformer une image selon une transformation rigide donée
// Tests : Déformer des images avec des paramètres connus et vérifier les résultats

class Deformation {
public:
    void deformImage(const NRmatrix<int>& Im,const NRmatrix<int>& resDeforme, const NRmatrix<int>& resMask, VecDoub& param); //cf nr3
};

#endif
