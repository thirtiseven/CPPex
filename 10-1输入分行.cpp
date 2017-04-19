#include <iostream>

using namespace std;

void Input(int *a,int n = 12){
	for(int i = 0;i < n;i++){
		cin >> *a++;
	}
}

void Output(int *a,int n = 12){
	for(int i = 0;i < n;i++){
		cout << *a++;
		if((i+1)%4==0){
			cout << endl;
		}
	}
}

int main(void){
	int a[12] , *p;
	p = a;
	Input(p);
	Output(p);
	return 0;
}

