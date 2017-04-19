#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
	int sum = 0 , time = 0;
	for(int i = 100;i <= 200;i++){
		for(int j = 2;j <= sqrt(i);j++){
			if(i % j == 0){
				break;
			}
			if(j > sqrt(i) - 1){
				cout << i << ' ' ;
				time++;
				if (time == 5){
					cout << endl;
					time = 0;
				}
			}
		}
	}
	return 0;
}