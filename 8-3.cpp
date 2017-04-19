#include <iostream>

using namespace std;

int oct(int n){
	if(n<8){
		return n;
	}else{
		return n % 8 + oct(n / 8) * 10;
	}
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cout << oct(n);
	return 0;
}