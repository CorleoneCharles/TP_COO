#ifndef SIMILARITE1_H
#define SIMILARITE1_H

#include "nr3.h"
#include "similarite.h"




NRmatrix<double> algorecalge(const NRmatrix<double> &imoriginal){
im=imoriginal;
for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++){
  im[i][j]=min(2*abs(im[i][j]-128,255);
  }
}
return 	im;
}



NRmatrix<double> divisionethistogrammematrice(const NRmatrix<double> &im2, VecDoub& in){
im=im2;
for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++)
   im[i][j]=floor(im[î][j]/16);
   
   in[im[i][j]]=in[im[i][j]]+1;
 }
return im;
}

NRmatrix<double> obtenirp12(NRmatrix<double> &im2,NRmatrix<double> &im1, NRmatrix<double> &P12){
im3=im2;
im=im1;

for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++)
   im[i][j]=floor(im[î][j]/16);
   im3[i][j]=floor(im3[î][j]/16);
   P12[im[i][j],im3[i][j]]=P12[im[i][j],im[i][j]]+1;
 }
return P12;
}

algorecalge(NRmatrix<double> &im){
for (int i=0;i<im.nrows();i++)
 {
  for (int j=0;j<im.ncols();j++){
  im[i][j]=min(2*abs(im[i][j]-128,255);
  }
}
}

similarite(const NRmatrix<double> &im2,const NRmatrix<double> &im1){
imrecale1=algorecalage(im1);
imrecale2=algorecalage(im2);
histo1=divisionethistogrammematrice(imrecale1);
histo2=divisionethistogrammematrice(imrecale2);
NRmatrix<double> P12(16,16,0);
	
int somme=0;
for (int i=0;i<p12.nrows();i++)
 {
  for (int j=0;j<p12.ncols();j++){
   somme=somme+P12[i][j]*log(P12[i][j]/(i1[i]*i2[j]));
  }
 }
return somme; 
}
class similarite1 : public similarite{

	public:
};


#endif
