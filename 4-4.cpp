#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	char plain , cipher1 , cipher2;
	while (cin >> plain){
		if((plain >= 'a' && plain <= 'z' )|| (plain >= 'A' && plain < 'Z')){
			cipher1 = plain + 4;
			cipher2 = plain - 22;
			cout << (plain < 'w' || (plain < 'W' && plain >= 'A') ? cipher1 : cipher2); 
		}else if (plain == '#'){
			break;
		}else{
			cout << plain;
		}
	}
	return 0;
}