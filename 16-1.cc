#include <iostream>
#include <cstring>

using namespace std;

class A {
	protected:
		char *s;
		
	public:
		A(const char *sc) {
			s = new char[strlen(sc)];//TODO
			strcpy(s, sc);//TODO
		}
		
		~A() {
			delete[] s;//TODO
		}
};

class B: protected A { // TODO ???
	protected:
		int n;
	public:
		B(const char *sc = " ", const int i = 0) : A(sc) {
			n = i;
		}
};

class C: protected A {
	protected:
		char *p;
	public:
		C(const char *sc = " ", const char *pc = " ") : A(sc) {
			p = new char[strlen(sc)];//TODO
			strcpy(p, pc);
		}
		~C() {
			delete[] p;
		}
};

class D: protected B, protected C {
	public:
		D(const char *s, int n, const char *p) :B(s, n), C(s, p) { }
		void print() {
			cout << B::s << "," << n << "," << p << endl;
		}
};

int main(int argc, char *argv[]) {  
	D *pd = new D("VC++", 6, "Programming");
	pd -> print();
	return 0;
}