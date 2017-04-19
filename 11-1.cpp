#include <iostream>

using namespace std;

int sum(int a,int b){
	return a+b;
}

void xswap(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main(void){
	int a,b,c,(*p1)(int,int);
	void (*p2)(int *,int *);
	cout << "XXXXXXX";
	cin >> a >> b;
	p1 = sum;
	c = p1(a,b);
	p2 = xswap;
	p2(&a,&b);
	cout << c << endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}