#include <iostream>
#include <cmath>
#define MAX 1000

using namespace std;

int prime[MAX] = {0};

int isPrime(int a){
	for(int i = 2;i <= sqrt(a);i++){
			if (a % i == 0){
				return 0;
			}
		}
	 return 1;
}

int main(int argc, char *argv[]) {
	int n = 0;
	for(int i = 2;i <= MAX;i++){
		if(isPrime(i) == 1){
			prime[n++] = i;
		}
	}
	
	for(int k = 4;k <= MAX;k += 2){
		///写…写你的代码!
		for (int l = 1;l <= MAX;l++){
			if(isPrime(k-prime[l]) == 1){
				cout << k << " = " << prime[l] << " + " << (k - prime[l]) << '\n';
				break;
			}
		}
	}
	return 0;
}