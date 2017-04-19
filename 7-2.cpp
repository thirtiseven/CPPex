#include <iostream>
#include <cmath>

using namespace std;

int root(float a,float b,float c,float &rx1,float &rx2){
	float delta = b * b - 4 * a * c;
	if(delta < 0){
		return 0;
	}else if(delta == 0){
		rx1 = rx2 = (-b / 2 * a);
		return 1;
	}else{
		rx1 =  (-b - sqrt(delta)/ 2 * a);
		rx2 =  (-b + sqrt(delta)/ 2 * a);
		return 2;
	}
}

int main(int argc, char *argv[]) {
	float a , b , c , px1 , px2;
	cin >> a >> b >> c;
	int Root = root(a, b, c, px1, px2);
	if(Root == 0){
		cout << "NO REAL ROOTS" << endl;
	}else if(Root == 1){
		cout << "EQUAL ROOTS: " << px1 <<endl;
	}else{
		cout << "TWO ROOTS: " << px1 << " AND " << px2 << endl;
	}
	return 0;
}