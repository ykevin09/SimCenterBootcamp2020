#include <stdio.h>
#include <stdlib.h>

#include "stresstransform.h"

/* ************************************************************************
 * 
 *      writing to a binary file
 *
 * ************************************************************************/

int main(int argc, char **argv) {

	// get dth from the first argument.  This is given in degrees!

	double dth;

	if (argc>1) {
		dth = atof(argv[1]) ;
	}
	else {
		dth = 22.5;
	}

	// open the file for writing 

	FILE *f_ptr;
  	f_ptr = fopen("mohrcircle.dta", "wb");
	
	// define a data structure for a single entry in the file
	/*
	struct RESULT {
	  double *theta;
	  double *stress;
	} result;
	
	result.theta = (double *)malloc(sizeof(double));
	result.stress = (double *)malloc(3*sizeof(double));
	*/
	struct RESULT {
	  double angle;
	  STRESS theStress;
	} result;
	// set the initial stress state

	STRESS S0;

	S0.sigx = 12.0;
	S0.sigy = -5.5;
	S0.tau  =  3.5;

	// define  target container for transformed stress

	STRESS Sp;

	// loop to compute transformed states
	double th = 0.0;
	int i = 0, j = 0;
	for (th=0.0; th <= 180.; th+=dth) {

	    StressTransform(S0, &Sp, th);
	    /*
	    result.theta[0] = th;
	    result.stress[0] = Sp.sigx;
	    result.stress[1] = Sp.sigy;
	    result.stress[2] = Sp.tau;
	    
	    fwrite(result.theta, sizeof(double), 1, f_ptr);
	    fwrite(result.stress, sizeof(double), 3, f_ptr);
	    */
	    result.angle = th;
	    result.theStress = Sp;
	    fwrite(&result, sizeof(result), 1, f_ptr);
	}

	// done writing data -- close the file
	// free(result.theta);
	// free(result.stress);
	fclose(f_ptr);

	return 0;
}

