#ifndef SIMILARITE2_H
#define SIMILARITE2_H

#include "nr3.h"
#include "similarite.h"

class similarite2 : public similarite{

	public:
		double similaire(const NRmatrix <int>& Image1,const NRmatrix <int>& Mask1,const NRmatrix <int>& Image2,const NRmatrix <int>& Mask2);
};		

#endif
