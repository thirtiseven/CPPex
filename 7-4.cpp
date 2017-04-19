#include <iostream>
#include <cmath>

using namespace std;

int f(int n){
	int x = 1;
	for(int i = 1; i <= n;i++){
		x *= n;
	}
	return x;
}

double myexp(double x,double precision = 1e-4){
	double a , ex = 0;
	int n = 0;
	do{
		a = pow(x,n)/f(n);
		ex += a;
		n++;
		
	}while(abs(a) > precision);
	return ex;
}

int main(int argc, char *argv[]) {
	cout << myexp(0.5);
}