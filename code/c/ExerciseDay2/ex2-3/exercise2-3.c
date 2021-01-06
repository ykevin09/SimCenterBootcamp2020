#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // need this for the constant pi = M_PI

#include "stresstransform.h"


int main(int argc, char **argv) {

  // get dth from the first argument.  This is given in degrees!
  float dth = 0., theta=0.;
  if (argc >= 2) {
    // printf("Get dthe from the first argument \n");
    dth = atof(argv[1]);
    // printf("%s %f", argv[1], dth);
  }
  else {
    // printf("Do not receive a value of dth, set dth as 10 degrees by default \n");
    dth = 10.0;
  }
  
  // set the initial stress state
  STRESS S0;
  STRESS Sp;

  S0.sigx = 12.0;
  S0.sigy = -5.5;
  S0.tau  =  3.5;

  // loop to compute transformed states
  printf("       theta,      sigma_x,      sigma_y,       tau_xy\n");
  for (theta=0.; theta <= 180.; theta+=dth) {
    StressTransform(S0, &Sp, theta);
    printf("%12.6f, %12.6f, %12.6f, %12.6f\n", theta, Sp.sigx, Sp.sigy, Sp.tau);
  }
  return 0;
}

