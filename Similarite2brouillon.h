#ifndef SIMILARITE1_H
#define SIMILARITE1_H

#include "nr3.h"
#include "similarite.h"



NRmatrix<int> algorecalge(const NRmatrix<int> &imoriginal){
NRmatrix <int> im;
im=imoriginal;
for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++){
  im[i][j]=min(2*abs(im[i][j]-128,255);
  }
}
return 	im;
}


VecDoub divisionethistogrammematrice(const NRmatrix<double> &im2,const NRmatrix <int>& Mask2){
NRmatrix <int> im;
im=im2;
VecDoub histog1(16);
for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++){
   im[i][j]=floor(im[i][j]/16);
   
   histog1[im[i][j]-1]=histog1[im[i][j]-1]+1;}
 }
return histog1;
}

NRmatrix<double> obtenirp12(NRmatrix<double> &im2,NRmatrix<double> &im1,const NRmatrix <int>& Mask1,const NRmatrix <int>& Mask2){
NRmatrix <int> im3;
NRmatrix <int> im;
im3=im2;
im=im1;
NRmatrix<double> P12(16,16,0);
for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++){
   im[i][j]=floor(im[î][j]/16);
   im3[i][j]=floor(im3[î][j]/16);
	   if (Mask1[i][j]&&Mask2[i][j]){
	   P12[im[i][j]-1,im3[i][j]-1]=P12[im[i][j]-1,im[i][j]-1]+1;
	   }
   }
 }
return P12;
}

similarite(const NRmatrix<double> &im1,const NRmatrix<double> &im2,const NRmatrix <int>& Mask1,const NRmatrix <int>& Mask2){
imrecale1=algorecalage(im1);
imrecale2=algorecalage(im2);

histo1=divisionethistogrammematrice(imrecale1, Mask1);
histo2=divisionethistogrammematrice(imrecale2, Mask2);
NRmatrix<double> P12(16,16,0);
P12=obtenirp12(imrecalge1,imrecalage2);	
int somme=0;
for (int i=0;i<p12.nrows();i++)
 {
  for (int j=0;j<p12.ncols();j++){
   somme=somme+P12[i][j]*log(P12[i][j]/(histo1[i]*histo2[j]));
  }
 }
return somme; 
}
class similarite1 : public similarite{

	public:
	double similaire(const NRmatrix <int>& Image1,const NRmatrix <int>& Mask1,const NRmatrix <int>& Image2,const NRmatrix <int>& Mask2);



double similaire(const NRmatrix <int>& Image1,const NRmatrix <int>& Mask1,const NRmatrix <int>& Image2,const NRmatrix <int>& Mask2){
	return similaire(Image1,Image2,Mask1,Mask2);
}



};




};


#endif
