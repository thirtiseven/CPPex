#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	double a , x0 , x1;
	cout <<"请输入一个非负数： ";
	cin >> a;
	while(a<0){
		cout << a << "不能开平方！" << endl << "请重新输入一个非负数: ";
		cin >> a;
	}
	x0 = a/2;
	do{
		x1 = x0;
		x0 = (x0 + a / x0) / 2;
	}while(fabs(x1 - x0) > 1e-8);
	cout << a << "的开平方 = " << setiosflags(ios::fixed) << setprecision(8) << x1 << endl;
	return 0;
}