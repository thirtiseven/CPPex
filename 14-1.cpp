#include <iostream>

class T{
	int x,y;
	public:
		T(int x = 70,int y = 40) {
			this -> x = x;
			this -> y = y;
		}
		void Print() {
			std::cout << x << " - " << y << " = " << x-y << std::endl;
		}
};

int main(int argc, char *argv[]) {
	T t1(200,60), t2(100), t3;
	t1.Print();
	t2.Print();
	t3.Print();
	return 0;
}