#include <iostream>

using namespace std;

double max(double a,double b){
	return a>b?a:b;
}

int max(int a,int b){
	return a>b?a:b;
}

int main(int argc, char *argv[]) {
	int a , b , c;
	double d , e , f;
	cin >> a >> b >> c;
	cout << max(a , max(b , c)) << endl;
	cin >> d >> e >> f;
	cout << max(d , max(e , f)) << endl;
	return 0;
}