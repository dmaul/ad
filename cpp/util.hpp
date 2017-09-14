#include <iostream>

/**

L = N * cos(alfa) - A * sin(alfa)

D = N * sin(alfa) + A * cos(alfa)

S: reference aerea

l: reference length

rho_d: freestream density

V_d: freestream velocity

freestream dynamic pressure: q_d ~ 1/2(rho_d * exp(V_d, 2))

lift coefficient: CL ~ L / (q_d * S)

drag coefficient: CD ~ D / (q_d * S)

stall speed (VStall): sqrt(W/(CL * 1/2 * rho * S))

rotation velocity: 1.2 * VStall

acceleration: dV/dt = (T - D - F) / m

**/

/**
acceleration: dV/dt = (T - D - F) / m
**/
extern double accel(double T, double D, double F, double m);


/**

VStall = sqrt(W/(CL * 1/2 * rho * S)) 
**/
extern double vstall(double aangle, double W, double rho, double S);
