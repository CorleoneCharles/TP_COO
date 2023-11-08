#ifnedf COUT_H
#define COUT_H

#include "nr3.h"
#include "transformation.h"
#include "interpole.h"
#include "deformation.h"
#include "similarité.h"

class Cout{
  private :
  NRmatrix<int>* Image; //pointeur vers une matrice image
  NRmatrix<int>* ImageRef;
  interpole* meth_interpo; //pointeur vers un objet de la classe interpole
  similarite* meth_simila;
  deformation defo; //instance de déformation

  public:
  Cout(NRmatrix<int>* im, NRmatrix<int>* imRef, interpole* m_interpole, similarite* m_simil); //constructeur
  void setImage(NRmatrix<int>* im); //permettent de définir des membres privés
  void setImageRef(NRmatrix<int>* imRef);
  void setmeth_interpo(interpole* m_interpole);
  void setmeth_simila(similarite* m_simil);
  Doub operator() (VecDouble& param) const;
};
