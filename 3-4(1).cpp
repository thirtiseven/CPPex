#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int abc , a , b , c;
	cin >> abc;
	a = abc/100;
	b = abc%100/10;
	c = abc%10;
	if(abc<100 || abc >999){
		cout << "ERROR: WRONG INPUT";
		return 1;
	}
	cout << 
		(a>b?
			b>c?
				abc:
				a>c?
					a*100+c*10+b:
					c*100+a*10+b:
			c<a?
				b*100+a*10+c:
				c<b?
					b*100+c*10+a:
					c*100+b*10+a)
		<< endl;
	return 0;
}