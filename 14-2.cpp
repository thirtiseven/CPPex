#include <iostream>

using namespace std;

class Rect{
	private:
		double Left,Top,Right,Bottom,C,S;
	public:
		void inputRect(){
			cin >> Left >> Top >> Right >> Bottom;
		}
		
		void solveC(){
			C = (Right - Left) * 2 + (Top - Bottom) * 2;
		}
		
		void solveS(){
			S = (Right - Left) * (Top - Bottom);
		}
		
		void printRect(){
			cout <<"C = " << C << " S = " << S << endl;
		}
};

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	Rect *p = new Rect[n];
	for(int i = 0;i < n;i++){
		p[i].inputRect();
		p[i].solveC();
		p[i].solveS();
		p[i].printRect();
	}
	return 0;
}