#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a , b;
	cout << "请输入两个整数：";
	cin >> a >> b;
	cout << "交换前：a = " << a << " , b = " << b << endl;
	a = a - b;
	b = a + b;
	a = b - a;
	cout << "交换后：a = " << a <<" , b = " << b << endl;
	return 0;
}