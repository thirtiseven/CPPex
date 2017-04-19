#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a , b , c;
	cin >> a >> b >> c;
	if (a > b){
		if (b > c){
			cout << "min = " << c << endl;
		}else{
			cout << "min = " << b << endl;
		}
	}else{
		if (a < c){
			cout << "min = " << a << endl;
		}else{
			cout << "min = " << c << endl;
		}
	}
	return 0;	
}