#include <iostream>
#include <cmath>

using namespace std;

int findOne(int b){
	for(int i = 2;i <= sqrt(b);i++){
		if(b%i == 0){
			return i;
		}
	}
	return b;
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cout << n << " = " << findOne(n);
	n /= findOne(n);
	while(n > 1){
		cout << " * " << findOne(n);
		n /= findOne(n);
	}
	return 0;
}