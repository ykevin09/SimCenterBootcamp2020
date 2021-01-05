// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// soln: x = -b/2a +/- sqrt(b^2-4ac)/2a
//
// write a program to take 3 inputs and output the soln
// deal with possible errors in input, i.e. b^2-4ac negative

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 4) {
    printf("Usage: appName a b c\n");
    exit(-1);
  }

  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float c = atof(argv[3]);

  float soln1 = 0., soln2 = 0.;
  if (abs(a) > 1.0e-20) {
    if (b*b-4*a*c >= 0) {
      soln1 = -b/(2.*a) + sqrt(b*b - 4.*a*c)/(2.*a);
      soln2 = -b/(2.*a) - sqrt(b*b - 4.*a*c)/(2.*a);
      printf("The two solutions are %.4f, %.4f \n", soln1, soln2);
    }
    else {
      printf("There is no solution since b*b-4*a*c < 0 \n");
    }
  }
  else {
    if (abs(b) > 1.0e-20) {
      soln1 = c/(-b);
      printf("Only a solution is %.4f \n", soln1);
    }
    else if (abs(c) > 1.0e-20) {
      printf("There is no solution since a=b=0 \n");
    }
    else {
      printf("Infinite number of solutions since a=b=c=0 \n");
    }
  }
 
  printf("Have a Nice Day!\n");
  return 0;
}

