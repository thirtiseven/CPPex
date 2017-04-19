#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	float fee;
	cout << "实际医疗费：" ;
	cin >> fee;
	if(fee < 0) {
		cout << "ERROR" << endl;
		return 1;
	}else if(fee < 2000){
		fee *= 0.15;
	}else if(fee < 4000){
		fee *= 0.1;
	}else if(fee < 6000){
		fee *= 0.08;
	}else{
		fee *= 0.05;
	}
	cout << "应收取医疗费：" << fee << endl;
	return 0;
}