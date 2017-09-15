#include <iostream>

/**

L = N * cos(alfa) - A * sin(alfa)

D = N * sin(alfa) + A * cos(alfa)

W: Weight

T: Thrust of propulsion system

D: Aerodynamic drag

F: Rolling resistance friction

S: reference area

l: reference length

rho_d: freestream density

V_d: freestream velocity

A: wing aerea

freestream dynamic pressure: q_d ~ 1/2 * (rho_d * exp(V_d, 2))

The quantity one half the density times the velocity squared is called the dynamic pressure q. So q = .5 * r * V^2

lift coefficient: 
 CL ~ L / (q_d * S)
 CL = L / (A * .5 * r * V^2) = L / (A * q) 

drag coefficient: CD ~ D / (q_d * S)

stall speed (VStall): sqrt(W/(CL * 1/2 * rho * S))

rotation velocity (VR): 1.2 * VStall

acceleration: dV/dt = (T - D - F) / m

average acceleration point: V = VR / sqrt(2)

distance from V0 to VR: s1 = 1/2 * (exp(VR, 2) / a)

obstacle: 35 ft = 10.668 meter

distance from VR to obstacle clearance point : s2 = 35ft / tan(alfa)


https://www.grc.nasa.gov/www/k-12/airplane/atmosmet.html

h : altitude in meters
Temp(Temperature): Temp = 15.04 - 0.00649 * h

p(pressure): p = 101.29 * [(Temp + 273.1) / 288.08] ^ 5.256



**/


extern double accel(double T, double D, double F, double m);

extern double vstall(double aangle, double W, double rho, double S);

extern double pressure();
