#include "interpole2.h"
#include <iostream>
#include <cmath> 


double interpole2::interpolation(const NRmatrix<double>& Image, double x, double y, int* OK) const{
 	int H=Image.nrows();
 	int L=Image.ncols();
 	if ( (x<0) || (x>H-1) || (y<0) || (y>L-1)){ 
 		*OK=0; 
 		return 0;
 	}

	else{
		int i1 , i2 , j1 , j2, indice_min, i, j ;
		double d1, d2, d3, d4, dmin, res ;
	
		i1 = floor(x);
		j1 = floor(y);
	
		if (i1==H-1){
			i1--;
		}
	
		if (j1==L-1){
			j1--;
		}
	
		i2 = i1+1 ;
		j2 = j1+1 ;
	
	
		// calcul des distances au pixel voisin
		d1 = sqrt((x-i1)*(x-i1)+(y-j1)*(y-j1));
		indice_min=1;
		dmin=d1;
		
		d2 = sqrt((x-i1)*(x-i1)+(y-j2)*(y-j2));
		if (d2<dmin){
			dmin=d2;
			indice_min=2;
		}

		d3 = sqrt((x-i2)*(x-i2)+(y-j1)*(y-j1));
		if (d3<dmin){
			dmin=d3;
			indice_min=3;
		}
		
		d4 = sqrt((x-i2)*(x-i2)+(y-j2)*(y-j2));
		if (d4<dmin){
			indice_min=4;
		}

		// selection du pixel le plus proche
		if (indice_min==1){
			i=i1;
			j=j1;
		}
		if (indice_min==2){
			i=i1;
			j=j2;
		}
		if (indice_min==3){
			i=i2;
			j=j1;
		}
		if (indice_min==4){
			i=i2;
			j=j2;
		}
	
	
		// Récupération de la valeur interpolée:
		*OK=1;
		return Image[i][j] ;
	}
	
	
}
