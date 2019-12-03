#include <stdio.h>
#include <math.h>
#define EPS  10e-6
#define DEFAULT 0

double f(double);
double df(double);

int main(void){
	double x,fx,dfx;
	
	x = DEFAULT;
	
	printf("x(k-1)\t\tfx\t\tdfx\t\tx(k)\t\tf(x)\n");
	
	while((fx = f(x)) > EPS){
		dfx = df(x);
		printf("%f\t%f\t%f",x,fx,dfx);
		x = x - fx/dfx;
		printf("\t%f\t%12.10f\n",x,f(x));
	}
	printf("x = %8.6f\n",x);
	return 0;
}

double f(double x){
	double fx;
	fx = exp(x) - 3*x;
	return fx;
}

double df(double x){
	double dfx;
	dfx = exp(x) -3;
	return dfx;
}
