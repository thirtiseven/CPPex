#include <iostream>

using namespace std;

int a = 0 , b = 0 , c = 0, d = 0, e = 0;

char ABCDE(int g){
	if(g < 60){
		e++;  
		return 'E';
		}else if (g < 70) {
		d++;  
		return 'D';
		}else if (g < 80) {
		c++;  
		return 'C';
		}else if (g < 90) {
		b++;  
		return 'B';
		}else if(g <= 100){
		a++;
		return 'A';
		}else {
		return ' ';
		}
}

int main(int argc, char *argv[]) {
	int grade;
	char level;
	while(1){
		cin >> grade;
		if (grade == 11111){
			//输入中止条件
			break;
		}
		level = ABCDE(grade);
		if (level == ' '){
			cout << "WRONG INPUT";
			//输入错误 程序继续运行
		}
		cout << level << endl;
	}
	cout <<"A : " << a << " B : " << b <<" C : " << c << " D : " <<d << " E : " << e << endl;
	return 0;
}