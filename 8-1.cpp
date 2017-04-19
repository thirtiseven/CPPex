#include <iostream>
#include <cmath>
using namespace std;
#define A(x,i,j) pow(0.6-x,i)/(j*i)

/*
double A(double x, double i,double j){
	return pow(1-x,i)/(j*i);
}*/


int f(int n){
	if(n == 1){
		return 1;
	}else if(n == 2){
		return 2;
	}else{
		return f(n - 1) + f(n - 2);
	}
}

int main(int argc, char *argv[]) {
	int i , j , n = 1;
	double a , s , x;
	cout << "输入一个绝对值小于1的数：";
	do{
		cin >> x;
	}while(fabs(x) >= 1);
	s = 1 - x;
	do{
		n++;
		i = f(n);
		j = f(n - 1);
		a = A(x+0.2,i,j);
		s += a;
	}while(fabs(a) > 1e-5);
	cout << "s = " << s << endl;
	return 0;
}