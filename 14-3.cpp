#include <iostream>
#include <cstring>

using namespace std;

class student{
	char name[10];
	int id,math,english,averageMath,averageEnglish;
	static int sumMath,sumEnglish,cnt;
	public:
		int sumOfTwo;
		void setZero(){
			sumMath = 0;
			sumEnglish = 0;
		}
		student(){
			cin >> name >> id;
		}
		~student(){}
		void setGrade(int mat,int eng){
			math = mat;
			english = eng;
		}
		void sum(){
			sumMath += math;
			sumEnglish += english; 
			sumOfTwo = math + english;
			cnt++;
		}
		void average(){
			averageMath = sumMath / cnt;
			averageEnglish = sumEnglish / cnt;
		}
		void printStudent(){
			cout << name << '\t' << id << '\t' << math << '\t' << english << endl;
		}
		void printName(){
			cout << name ;
		}
		void printAverM(){
			cout << averageMath;
		}
		void printAverE(){
			cout << averageEnglish;
		}
};

void sort(student *s, int n){
	student a;
	for (int i = 0; i <n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if ((s + i)->sumOfTwo < (s + j)->sumOfTwo){
				a = *(s + i); 
				*(s + i) = *(s + j); 
				*(s + j) = a;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	student *p = new student[n];
	int tempMath,tempEnglish;
	p[0].setZero();
	for(int i = 0;i < n;i++){
		cout << "Enter grade of ";
		p[i].printName();
		cout << ":";
		cin >> tempMath >> tempEnglish;
		p[i].setGrade(tempMath, tempEnglish);
		p[i].sum();
	}
	p[n-1].average();
	cout << "The average grade of math is ";
	p[n-1].printAverM();
	p[n-1].printAverE();
	sort(p,n);
	return 0;
}