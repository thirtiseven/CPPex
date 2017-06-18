#include <iostream>
#include <cstring>
#include <fstream>

class student {
private:
	char *name;
	long xuehao;
	double math;
	float eng;
	
public:
	student(char *n, long x,double m,float e) {
		name=new char[strlen(n)+1];
		strcpy(name,n);
		xuehao=x;
		math=m;
		eng=e;		
	}
	
	student() {
		name=new char[10];
		xuehao=0;
		math=0;
		eng=0;
	}
	
	~student() {
		if(name)
			delete[]name;
	}
	friend std::ostream& operator << (std::ostream&os, student&p);
	friend std::istream& operator >> (std::istream&is, student&p);
	operator float();
	operator char*();
};


std::istream& operator >> (std::istream&is, student&p) {
	is >> p.name >> p.xuehao >> p.math >> p.eng;
	return is;
	
}

std::ostream& operator << (std::ostream&os, student&p) {
	os << p.name << "," << p.xuehao << "," << p.math << "," << p.eng << std::endl;
	return os;
}

student::operator float() {
	return eng+math;
}
student::operator char *() {
	return name;
}

int main() {
	student test;
	std::cin >> test;
	std::cout << test;
	std::cout << float(test) << std::endl;
	std::cout << (char*)(test);
	return 0;
}