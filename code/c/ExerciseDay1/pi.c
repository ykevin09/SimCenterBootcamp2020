// calculate pi numerically
//
// pi = integral 0->1 (4/(1+x^2))dX
//
// compute an approx using sum from i = 1 to N
// of F(xi)delta X, where F(xi) computed at middle of iterval i
//
// take as input the number of intervals N

#include <stdio.h>
#include <math.h>
#include <time.h>

static int long numSteps = 10000000;

int main(int argc, char **argv) {
  double pi = 0.; double time = 0.;
  
  //
  clock_t begin = clock();
  double dX = 1. / (double)(numSteps);
  double xi = 0., Fxi = 0.;
  for (int i = 0; i < numSteps; i++) {
    xi = ((double)(i) + 0.5) * dX;
    Fxi = 4./(1. + pow(xi, 2.));
    pi += Fxi * dX;
  }
  clock_t end = clock();
  time = (double)(end - begin) / CLOCKS_PER_SEC * 1000.;
  printf("PI=%.6f, duration:%.6f ms\n", pi, time);
  
  return 0;
}
