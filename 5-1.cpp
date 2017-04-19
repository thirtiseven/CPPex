#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	for(int i = 100; i < 1000; i++){
		if(i == pow(i % 10, 3) + pow(i % 100 / 10 , 3)+ pow(i / 100 , 3)){
			cout << i << endl; 
		}
	}
	return 0;
}