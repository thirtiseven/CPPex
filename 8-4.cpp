#include <iostream>  

using namespace std;
  
void reverse(char *p){  
	if(*p=='\0')  
	return;  
	reverse(p+1);  
	cout << *p;  
}  
  
int main(int argc, char *argv[]){  
	char *x;
	cin >> x;
	reverse(x);
	return 0;  
} 