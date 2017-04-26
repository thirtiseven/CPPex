#include <iostream>
#include <cstring>

class student {
	char name[10];
	int id,math,english;
	float average_math,average_english;
	static int sum_math,sum_english;
	public:
		int sum_of_two;
		void set_zero() {
			sum_math = 0;
			sum_english = 0;
		}
		student(){
			std::cout << "Enter name and id: ";
			std::cin >> name >> id;
		}
		student(int temp){
			strcpy(name, "temp");
			id = 9999;
		}
		~student() {
			;
		}
		void set_grade(int mat,int eng) {
			math = mat;
			english = eng;
		}
		void sum() { 
			sum_math += math;
			sum_english += english; 
			sum_of_two = math + english;
		}
		void average(int n) {
			average_math = (float)(sum_math / (float)n);
			average_english = (float)(sum_english / (float)n);
		}
		void print_student() {
			std::cout << name << '\t' << id << '\t' << math << '\t' << english << std::endl;
		}
		void print (int a){
			switch (a) {
				case 1: std::cout << name; break;
				case 2: std::cout << average_math; break;
				case 3: std::cout << average_english; break;
				default: return;
			}
		}
};

void sort(student *s, int n){
	student a(1);
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if ((s + i)->sum_of_two > (s + j)->sum_of_two){
				a = *(s + i); 
				*(s + i) = *(s + j); 
				*(s + j) = a;
			}
		}
	}
}

int student::sum_math;
int student::sum_english;

int main(int argc, char *argv[]) {
	int n;
	std::cin >> n;
	student *p = new student[n];
	int temp_math, temp_english;
	p[0].set_zero();
	for(int i = 0;i < n;i++){
		std::cout << "Enter grade of ";
		p[i].print(1);
		std::cout << ":";
		std::cin >> temp_math >> temp_english;
		p[i].set_grade(temp_math, temp_english);
		p[i].sum();
	}
	p[n-1].average(n);
	std::cout << "The average grade of math is ";
	p[n-1].print(2);
	std::cout << "\nThe average grade of english is ";
	p[n-1].print(3);
	std::cout << std::endl;
	sort(p,n-1);
	for(int i = 0;i < n/5;i++){
		p[i].print_student();
	}
	delete []p;
	return 0;
}