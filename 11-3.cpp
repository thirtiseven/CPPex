#include <iostream>
using namespace std;

int main(int argc, char *argv[]){   
	int n;
	std::cin >> n;
	int *a = new int[n+1];
	bool num[100] = {false};
	int id[101] = {0};
	int nummax = -1;
	for(int i = 0;i < n;i++) {
		std::cin >> a[i];
		num[a[i]] = true;
		if(a[i] > nummax) {
			nummax = a[i];
		}
	}
	int cnt = 1;
	for(int i = 0;i <= nummax;i++) {
		if(num[i] && id[i]==0) {
			id[i] = cnt;
			cnt++;
		}
	}
	std::cout << "(";
	for(int i = 0;i < n-1;i++) {
		cout << id[a[i]] << ",";
	}
	std::cout << id[a[n-1]] << ")";
	return 0;
}