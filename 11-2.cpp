#include <iostream>
#include <string>
#define MAXSTRLEN 100

using namespace std;

void Input(char*b[],int n){   
	char t[MAXSTRLEN];
	for(int i=0;i<n;i++){
		cin>>t;
		b[i]=new char[strlen(t)+1];
		strcpy(b[i],t);
	}
}


void mysort(char*p[],int n){
	int min;
	char *temp;
	for(int i = 0;i < n;i++){
		min = i;
		for(int j = i+1;j < n;j++){
			if(strcmp(p[min],p[j])>0){
				min = j;
			}
		}
		temp = p[min];
		p[min] = p[i];
		p[i] = temp;
	}
}

int main(int argc, char *argv[]){   
	int n;
	cin >> n;
	char **p;
	p = new char*[n];
	Input(p,n);
	mysort(p,n);
	for(int i = 0;i < n;i++){
		cout << p[i] << endl;
	}
	return 0;
}