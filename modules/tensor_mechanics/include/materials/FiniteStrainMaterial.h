// Original class author: A.M. Jokisaari,  O. Heinonen

#ifndef FINITESTRAINMATERIAL_H
#define FINITESTRAINMATERIAL_H

#include "TensorMechanicsMaterial.h"

/**
 * FiniteStrainMaterial handles a fully anisotropic, single-crystal material's elastic
 * constants.  It takes all 21 independent stiffness tensor inputs, or only 9, depending on the
 * boolean input value given.  This can be extended or simplified to specify HCP, monoclinic,
 * cubic, etc as needed.
 */

class FiniteStrainMaterial : public TensorMechanicsMaterial
{
public:
  FiniteStrainMaterial(const std:: string & name, InputParameters parameters);

protected:
  virtual void computeStrain();
  virtual void computeQpStrain(RankTwoTensor Fhat);
  virtual void computeQpStress();

  MaterialProperty<RankTwoTensor> & _strain_rate;
  MaterialProperty<RankTwoTensor> & _strain_increment;
  MaterialProperty<RankTwoTensor> & _rotation_increment;
  
private:

};

#endif //FINITESTRAINMATERIAL_H
