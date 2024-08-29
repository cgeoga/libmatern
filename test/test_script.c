#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAX_LINE_SIZE 300 
                          
#define BESK_PRIMAL_THRESHOLD 1.0e-12
#define DBESK_DV_THRESHOLD 1.0e-7
#define DBESK_DX_THRESHOLD 1.0e-10

#define ERROR_FILE stdout 

// function prototypes
double besselk(double, double);
double besselk_dv(double, double);
double besselk_dx(double, double);

// amount of errors
int besk_errors = 0;
int dbeskdv_errors = 0;
int dbeskdx_errors = 0;
int num_tests = 0;

// first column: v
// second column: x
// third column: besselkprimal
// fourth column: besselkdv
// fifth column: besselkdx
int main(int argc, char* argv[]) {
	// open file, allocate space for column variables
	FILE* stream = fopen("test/libmatern_test.csv", "r");
	double v;
	double x;
	double besselkprimal;
	double besselkdv;
	double besselkdx;
	char* line = malloc(MAX_LINE_SIZE);

  printf("Error in:    v:                      x:                      error_rtol:\n");

	while(fgets(line, MAX_LINE_SIZE, stream) != NULL) {
		// parse the values of each line, and run tests to
		// compare against compiled .so
		//printf("line: %s\n", line);
		char* value = strtok(line, ",");	
		int i = 0;
		while(value != NULL) {
			switch(i) {
				case 0:
					v = atof(value);
					i++;
					break;
				case 1:
					x = atof(value);
					i++;
					break;
				case 2:
					besselkprimal = atof(value);
					i++;
					break;
				case 3:
					besselkdv = atof(value);
					i++;
					break;
				case 4:
					besselkdx = atof(value);
					i++;
					break;
				default:
					// TODO possible error when reading from csv(too many columns)
					fprintf(ERROR_FILE, "Hit default in strtok switch case\n");
					exit(1);
			}	
			value = strtok(NULL, ",");
		}
			num_tests++;
			
			double rtol_primal = fabs(besselk(v,x)      - besselkprimal)/fabs(besselkprimal);
			double rtol_dbeskdv = fabs(besselk_dv(v,x) - besselkdv)/fabs(besselkdx);
			double rtol_dbeskdx = fabs(besselk_dx(v,x) - besselkdx)/fabs(besselkdx);

			if(rtol_primal > BESK_PRIMAL_THRESHOLD) {
				fprintf(ERROR_FILE, "primal       %1.16e  %1.16e  %1.16e\n", v, x, rtol_primal);
				besk_errors++;
			}

			if(rtol_dbeskdv > DBESK_DV_THRESHOLD) {
				fprintf(ERROR_FILE, "ord(d/dv)    %1.16e  %1.16e  %1.16e\n", v, x, rtol_dbeskdv);
				dbeskdv_errors++;
			}	

			if(rtol_dbeskdx > DBESK_DX_THRESHOLD) {
				fprintf(ERROR_FILE, "arg(d/dx)    %1.16e  %1.16e  %1.16e\n", v, x, rtol_dbeskdx);
				dbeskdx_errors++;
			}
	}
	free(line);
	fclose(stream);
	double failed_tests = besk_errors + dbeskdv_errors + dbeskdx_errors;

	fprintf(ERROR_FILE, "besselk errors: %d, besselk_dv errors: %d, besselk_dx errors: %d\n", 
          besk_errors, dbeskdv_errors, dbeskdx_errors);
	fprintf(ERROR_FILE, "percent of tests failed: %.2f%%\n", 100 * (failed_tests/num_tests));
}

