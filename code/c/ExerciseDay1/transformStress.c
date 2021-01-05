// program to transform stress:
//
// sigmaX' = sigmaX * cos^2(theta) + sigmaY * sin^2(theta) + 2 * tauXY Sin(theta)Cos(theta)
// sigmaY' = sigmaX * sin^2(theta) + sigmaY * cos^2(theta) - 2 * tauXY Sin(theta)Cos(theta)
// tauXY' = (sigmaX-sigmaY) * sin(theta)cos(theta) + tauXY(cos^2(theta) - sin^2(theta))
//
// write a program to take 4 inputs: sigmaX, sigmaY, tauXY, theta
// output transformed stresses: sigmaX', sigmaY', tauXY'
//
// NOTE: perform the transformation inside a function that cannot be named main

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void stressTransformation(float sigmaXX, float sigmaYY, float tauXY, float theta, float *new_sigmaXX, float *new_sigmaYY, float *new_tauXY);


int main(int argc, char **argv) {
  if (argc != 5) {
    printf("incorrect useage sigmaXX sigmaYY tauXY theta \n\n");
    exit(-1);
  }

  float sigmaXX = atof(argv[1]);
  float sigmaYY  = atof(argv[2]);
  float tauXY = atof(argv[3]);
  float theta = atof(argv[4]);
  
  float new_sigmaXX = 0., new_sigmaYY = 0., new_tauXY = 0.;

  stressTransformation(sigmaXX, sigmaYY, tauXY, theta, &new_sigmaXX, &new_sigmaYY, &new_tauXY);

  printf("%.4f %.4f %.4f\n", new_sigmaXX, new_sigmaYY, new_tauXY);
  return 0;
}
  
  
void stressTransformation(float sigmaXX, float sigmaYY, float tauXY, float theta, float *new_sigmaXX, float *new_sigmaYY, float *new_tauXY) {
  *new_sigmaXX = sigmaXX * pow(cos(theta), 2.) + sigmaYY * pow(sin(theta), 2.) + 2.*tauXY*sin(theta)*cos(theta);
  *new_sigmaYY = sigmaXX * pow(sin(theta), 2.) + sigmaYY * pow(cos(theta), 2.) - 2.*tauXY*sin(theta)*cos(theta);
  *new_tauXY = (sigmaYY - sigmaXX)*sin(theta)*cos(theta) + tauXY*(pow(cos(theta), 2.) - pow(sin(theta), 2.));
}



