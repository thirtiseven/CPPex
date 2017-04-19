#include <iostream>

using namespace std;

void input(int &max,int &min,int n){
	int MAX,MIN,x[100000];
	for(int i = 1;i<=n;i++){
		cin >> x[i];
	}
	if(x[1] > x[2]){
		MAX = x[1];
		max = x[2];
		min = x[1];
		MIN = x[2];
	}else{
	MAX = x[2];
	max = x[1];
	min = x[2];
	MIN = x[1];	
	}

	for(int i = 3;i<=n;i++){
		cout << min <<endl;
		if(x[i]>=MAX){
			max = MAX;
			MAX = x[i];
		}else if(x[i]<=MIN){
			min = MIN;
			MIN = x[i];
		}
	}
}

int main(int argc, char *argv[]){
	int max , min;
	cout << "shu ru shi ge zheng shu"<<endl;
	input(max , min , 10);
	cout << "cidazhi" << max << endl << "cixiaozhi" << min << endl;
	return 0;
}