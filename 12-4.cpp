#include <iostream>
using namespace std;
struct complex
{
	float real,image;
};

void Input(complex *p){ 
	cout<<"请分别输入复数的实部和虚部:";
	cin >> (*p).real >> (*p).image;
}

void Output(complex *s){
	if((*s).real == 0 && (*s).image == 0){
		cout << 0 << endl;
		return;
	}
	if((*s).real != 0){
		cout << (*s).real;
	}
	if((*s).image > 0){
		cout << '+';
	}
	cout << (*s).image<<'i'<<endl;
}

complex add(complex p1, complex p2){ 
	complex t;
	t.real = p1.real+p2.real;
	t.image = p1.image+p2.image;
	return t;
}

complex min(complex p1,complex p2){ 
	complex t;
	t.real = p1.real - p2.real;
	t.image = p1.image - p2.image;
	return t;
}
/*
int main(void){ 
	complex *s;
	int num;
	cout << "请输入复数的个数:";
	cin >> num;
	s = new complex[num];
	Input(s,num);
	Output(&add(*s,*(s++)));
	Output(&min(*s,*(s++)));
	delete[] s;
	return 0;
}
*/

int main(void){ 
	complex zong , de , feng , a;
	Input(&zong);
	Input(&de);
	feng = add(zong,de);
	a = min(zong,de);	
	Output(&feng);
	Output(&a);
	return 0;
}