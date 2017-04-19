#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int abc;
	cin >> abc;
	cout << (abc/100>abc%100/10?abc%100/10>abc%10?abc:abc/100>abc%10?abc/100*100+abc%10*10+abc%100/10:abc%10*100+abc/100*10+abc%100/10:abc%10<abc/100?abc%100/10*100+abc/100*10+abc%10:abc%10<abc%100/10?abc%100/10*100+abc%10*10+abc/100:abc%10*100+abc%100/10*10+abc/100) << endl;
}