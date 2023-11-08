#ifndef INTERPOLE2_H
#define INTERPOLE2_H

#include "nr3.h"
#include "interpole.h"


class interpole2 : public interpole{

	public:
		int interpolation(const NRmatrix<int>& Image, double x, double y,int* OK)const ; 
};		

#endif
