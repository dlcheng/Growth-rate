#ifndef ALLVAR_H
 #include "allvars.h"
#endif

void set_cosmological_parameters(double Om, double Ov);

double linear_growth_factor(double a);
double dimensionless_growth_factor(double a);
double factor_x(double a);
double hubble_a(double a);
double integ_kernel(double a, void * param);
double integ_kernel_factor(double a);
