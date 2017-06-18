#include <iostream>
using namespace std;

class shape {
	public:
		virtual void draw() = 0;
};

class point: public shape {
	protected:
		int x, y;
	public:
		point(int a = 0, int b = 0) {
			x = a;
			y = b;
		}
		void draw() {
			cout << "draw point : x = " << x << ", y = " << y << endl;
		}
};

class circle: public point {
	protected:
		int r;
	public:
		circle(int a, int b, int r): point(a, b) {
			this -> r = r;
		}
		void draw() {
			cout << "draw circle: center is ( " << x << ", " << y << "), radius is " << r << endl;
		}
};

void drawobj(shape& s) {
	s.draw();
}

int main(int argc, char *argv[]) {  
	point *pp = new point(10, 20);
	circle *pc = new circle(3,14,15);
	shape *p;
	p = pp;
	p -> draw();
	p = pc;
	p -> draw();
	drawobj(*pp);
	drawobj(*pc);
	delete pp;
	delete pc;
 	return 0;
}