#include <stdio.h>
#include <stdlib.h>

#include "allvars.h"
#include "proto.h"

void set_cosmological_parameters(double Om, double Ov)
{
  Omega_m = Om;
  Omega_v = Ov;
}  // end set_cosmological_parameters