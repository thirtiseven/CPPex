#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int thatInteger;
	cout << "请输入一个十进制数： ";
	cin >> thatInteger;
	cout << "该数的十六进制是： " << hex << thatInteger << endl;
	cout << "该数的八进制是： " << oct << thatInteger << endl;	
	return 0;
}