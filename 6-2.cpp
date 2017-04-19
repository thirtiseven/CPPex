#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int isPrime(int a){
	for(int i = 2;i <= sqrt(a);i++){
			if (a % i == 0){
				return 0;
			}
		}
	 return 1;
}

int prime[MAX] = {0};

int main(int argc, char *argv[]) {
	int n = 0;
	for(int i = 2;i <= MAX;i++){
		if(isPrime(i) == 1){
			prime[n++] = i;
		}
	}
	for(int j = 1;j < n;j++){
		if(isPrime(prime[j]+2) == 1){
			cout << prime[j] << ' ' << prime[j] + 2 << endl;
		}
	}
	return 0;
}