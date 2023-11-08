#ifnedf COUT_H
#define COUT_H

#include "nr3.h"
#include "transformation.h"
#include "interpole.h"
#include "deformation.h"
#include "similarité.h"

class Cout{
  private :
  NRmatrix<int>* Im; //pointeur vers une matrice image
  NRmatrix<int>* ImRef;
  interpole* meth_interpole; //pointeur vers un objet de la classe interpole
  similarite* meth_simil;
  deformation d; //instance de déformation

  public:
  Cout(NRmatrix<int>* im, NRmatrix<int>* imRef, interpole* m_interpole, similarite* m_simil); //constructeur
  void setIm(NRmatrix<int>* im); //permettent de définir des membres privés
  void setImRef(NRmatrix<int>* imRef);
  void setInterpole(interpole* m_interpole);
  void setSimil(similarite* m_simil);
  Doub operator() (VecDouble& param) const;
};
