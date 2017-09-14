#include "util.hpp"

double accel(double T, double D, double F, double m)
{
  return ( T - D - F ) / m
}

double vstall(double aangle, double W, double rho, double S)
{
  double L;
  L = N * cos(alfa) - A * sin(alfa);
  double vstall = 0;
  vstall = sqrt(W/(CL * 1/2 * ro * S));
}

