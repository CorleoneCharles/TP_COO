#ifndef INTERPOLE_H
#define INTERPOLE_H

#include "nr3.h"

//Responsabilité : calcule la valeur de l'image aux coordonnées x,y. OK est utilisé pour indiquer si les coordonnées sont en dehors de la zonne de support de l'image
// tests : si on se met au centre on doit avoir la moyenne des valeurs dans les coins
class interpole{

	public:
		virtual int interpolation(const NRmatrix<int>& Image, double x, double y,int* OK)const=0; 
		virtual ~interpole(){};
};		

#endif

