#include <iostream>
#include <cmath>

using namespace std;

int daffodil(int test){
	if(test == pow(test % 10, 3) + pow(test % 100 / 10 , 3)+ pow(test / 100 , 3)){
		return 1; 
	}
	return 0;
}

int main(int argc, char *argv[]){
	int first = 99, second = 99;
	for(int i = 100;i < 1000;i++){
		if(daffodil(i) && i > first){
			second = first;
			first = i;
		}
	}
	cout << second << endl;
	return 0;
}
