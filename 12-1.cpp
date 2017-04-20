#include <iostream>

using namespace std;

struct{
	int a,b;
}s1,s2;

struct S{
	int a,b;
}s3,s4;

int main(int argc, char *argv[]) {
	cin >> s1.a >> s1.b >> s2.a >> s2.b;
	s3.a = s1.a;
	s3.b = s1.b;
	s4.a = s2.a;
	s4.b = s2.b;
	cout << s3.a << " " << s3.b << " " << s4.a << " " << s4.b << endl;
}