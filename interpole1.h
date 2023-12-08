#ifndef INTERPOLE1_H
#define INTERPOLE1_H

#include "nr3.h"
#include "interpole.h"


class interpole1 : public interpole{

	public:
		int interpolation(const NRmatrix<int>& Image, double x, double y,int* OK)const;
		virtual ~interpole1(){};
		
};		

#endif
