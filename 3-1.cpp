#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a , b , c;
	cin >> a >> b >> c;
	cout << "min = " << (a>b?b>c?c:b:a<c?a:c);
	return 0;
}

