#include <iostream>

using namespace std;

float y(float x){
	if(x <= 5 && x >= -5 && x != 0){
		return x - 1;
	}else if(x == 0){
		return 1;
	}else if(x > 5 && x <= 10){
		return x + 5;
	}else{
		return 100;
	}
}

int main(int argc, char *argv[]) {
	float x;
	cin >> x;
	cout << y(x) << endl;
}