//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#pragma once

#include "Action.h"

class CohesiveZoneModelAction;

template <>
InputParameters validParams<CohesiveZoneModelAction>();

class CohesiveZoneModelAction : public Action
{
public:
  CohesiveZoneModelAction(const InputParameters & params);

  void act() override;

protected:
  const std::vector<VariableName> _displacements;
  const unsigned int _ndisp;
  const std::vector<BoundaryName> _boundary_names;
};
