#ifndef MATDIFFUSION_H
#define MATFDIFFUSION_H

#include "Kernel.h"
#include "Material.h"

//Forward Declarations
class MatDiffusion;

template<>
InputParameters validParams<MatDiffusion>();

class MatDiffusion : public Kernel
{
public:

  MatDiffusion(const std::string & name, InputParameters parameters);

protected:
  virtual Real computeQpResidual();

  virtual Real computeQpJacobian();

private:
  std::string _D_name;
  
  MaterialProperty<Real> & _D;
};
#endif //COEFDIFFUSION_H
