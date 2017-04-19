#include <iostream>
using namespace std;

int power(int,int);
int f(int,int);

int main(int argc, char *argv[]) {
	int k , n;
	cout << "Please input k,n : ";
	cin >> k >>n;
	cout << "result = "<< f(n,k) << endl;
	return 0;
}

int f(int n , int k){
	int sum = 0;
	for(int i = 1;i <= n;i++){
		sum += power(i,k);
	}
	return sum;
}

int power(int m,int n){
	int product = 1;
	for(int i = 1;i <= n;i++){
		//添加等号
		product *= m;
	}
	return product;
}