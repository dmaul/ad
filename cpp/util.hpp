#include <iostream>

/**

L = N * cos(alfa) - A * sin(alfa)

D = N * sin(alfa) + A * cos(alfa)

S: reference aerea

l: reference length

rho_d: freestream density

V_d: freestream velocity

freestream dynamic pressure: q_d ~ 1/2 * (rho_d * exp(V_d, 2))

lift coefficient: CL ~ L / (q_d * S)

drag coefficient: CD ~ D / (q_d * S)

stall speed (VStall): sqrt(W/(CL * 1/2 * rho * S))

rotation velocity (VR): 1.2 * VStall

acceleration: dV/dt = (T - D - F) / m

average acceleration point: V = VR / sqrt(2)

distance from V0 to VR: s1 = 1/2 * (exp(VR, 2)/a)

obstacle: 35 ft 

distancia from VR to obstacle clearance point : s2 = 35ft/tan(alfa)






**/


extern double accel(double T, double D, double F, double m);


extern double vstall(double aangle, double W, double rho, double S);
