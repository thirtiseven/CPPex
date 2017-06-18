#include <iostream>
#include <cstring>

#define N 10000

using namespace std;

int strcomp(char * s, char * t) {
	int len = strlen(s) >= strlen(t)? strlen(s): strlen(t);
	for(int i = 0; i < len; i++) {
		if(s[i] < t[i] || s[i] == '\0'){
			return -1;
		}else if(s[i] > t[i] || t[i] == '\0'){
			return 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]) {
	char alice[N];
	char bob[N];
	char clare[N];
	char dave[N];
	cin >> alice >> bob >> clare >> dave;
	cout << (strcomp((strcomp(alice, bob) == -1 ? alice: bob), (strcomp(clare, dave) == -1? clare : dave)) == -1? (strcomp(alice, bob) == -1? alice : bob): (strcomp(clare, dave) == -1 ? clare: dave)) << endl;
	return 0;
}