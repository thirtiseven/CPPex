#include <iostream>
#include <cmath>

using namespace std;

double f(double x,int n){
	if(n == 1){
		return sqrt(x);
	}else if(n > 1){
		return sqrt(x + f(x,n-1));
	}else{
		return -1;
	}
}

int main(int argc, char *argv[]){
	double x;
	int n;
	cin >> n >> x;
	cout << f(x,n);
	return 0;
}