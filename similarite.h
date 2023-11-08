#ifndef SIMILARITE_H
#define SIMILARITE_H

#include "nr3.h"

class similarite{

	public:
		virtual double similaire(const NRmatrix <int>& Image1,const NRmatrix <int>& Mask1,const NRmatrix <int>& Image2,const NRmatrix <int>& Mask2);
};		

#endif
