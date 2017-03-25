#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "allvars.h"
#include "proto.h"

int main(int argc, char **argv)
{ 
  double Om, Ov, a, z;
  double D, f;

  if(argc == 4)
    {
     Om = atof(argv[1]);
     Ov = atof(argv[2]);
     z  = atof(argv[3]);
     set_cosmological_parameters(Om, Ov);
     a = 1.0 / (1.0 + z);
     D = linear_growth_factor(a);
     f = dimensionless_growth_factor(a);
     printf("\nFor cosmology Omega_m=%.3f, Omega_v=%.3f, at z=%.3f.\n", Om, Ov, z);
     printf("Normalized growth rate:    D+ = %.6e\n", D);
     printf("Dimensionless growth rate: f  = %.6e\n\n", f);
    }
  else
    {
     printf("Warning: need 3 arguments.\n"); 
     printf("For example: growth_rate 0.3 0.7 1.0\n");
     printf("where the first arg is Omega_m, the second is Omega_v and the third is redshift.\n");
    }

  return 1;
}   /* end main */
