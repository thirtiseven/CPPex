#include <iostream>
#include <iomanip>
#include <cmath>

double f1(double x){
	return x*x*x-6.0*x-1.0;
}


double root(double (*f)(double), double begin, double end){
	double left = f(begin);
	double point = (begin + end)/2.0;
	double right = f(end);
	double mid = f(point);
	while(fabs(mid) > 10e-8){
		point = (begin + end)/2.0;
		mid = f(point);
		if(left * mid > 0){
			begin = point;
		}else{
			end = point;
		}
	}
	return point;
}

int main(int argc, char *argv[]){
	double a,b;
	std::cin >> a >> b;
	std::cout << root(f1,a,b) << std::endl;
	return 0; 
}
   