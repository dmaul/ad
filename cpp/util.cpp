#include "util.hpp"

double pressure(double temp)
{
  double T = temp;
  return 101.29 * [(T + 273.1) / 288.08] ^ 5.256;
}

double accel(double T, double D, double F, double m)
{
  return ( T - D - F ) / m
}

double vstall(double aangle, double W, double temp, double S, double V)
{
  // L = N * cos(alfa) - A * sin(alfa)
  // N: Calculate the normal force component of aerodynamic force R
  // A: Calculate the axial force component of aerodynamic force R
  // CL = L / (A * .5 * r * V^2)
   
  double L=0, N=0, A=0, CL=0;
  double p = pressure(temp);
  L = N * cos(aangle) - A * sin(aangle);
  CL = L / (S * .5 * p * exp(V, 2));
  return sqrt(W/(CL * .5 * p * S));
}

