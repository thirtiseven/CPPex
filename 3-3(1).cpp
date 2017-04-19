#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	float fee;
	cout << "实际医疗费：" ;
	cin >> fee;
	if(fee < 0) {
		cout << "ERROR" << endl;
		return 1;
	}
	switch((int)fee/1000){
		case 0: case 1:  fee *= 0.15; break;
		case 2:	case 3:  fee *= 0.1 ; break;
		case 4: case 5:  fee *= 0.08 ; break;
		default: fee *= 0.05;
	}
	cout << "应收取医疗费：" << fee << endl;
	return 0;
}