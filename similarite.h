#ifndef SIMILARITE_H
#define SIMILARITE_H

#include "nr3.h"
// Responsabilité : Calculer un critère de similarité entre 2 images
// tests : Comparer des images identiques et différentes pour vérifier que les critères de similarité sont cohérents
class similarite{

	public:
		virtual double similaire(const NRmatrix <int>& Image1,const NRmatrix <int>& Mask1,const NRmatrix <int>& Image2,const NRmatrix <int>& Mask2);
};		

#endif
