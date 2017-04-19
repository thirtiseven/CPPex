#include <iostream>

using namespace std;

struct student{
	unsigned id : 16;
	unsigned cpp : 7;
	unsigned eng : 7;
	unsigned sum : 8;
};

void input(student *p, int n){
	int tempid,tempcpp,tempeng;
	for (int i = 0; i<n; i++){
		cout << "请输入第" << i + 1 << "个学生的学号 c++成绩 英语成绩 :";
		cin >> tempid >> tempcpp >> tempeng;
		p[i].id = tempid; p[i].cpp = tempcpp; p[i].eng = tempeng;
	}
}

void sum(student *p, int n){
	for (int i = 0; i < n; i++, p++){
		(*p).sum = (*p).cpp + (*p).eng;
	}
}

void sort(student *s, int n){
	student a;
	for (int i = 0; i<n - 1; i++){
		for (int j = i + 1; j<n; j++){
			if ((s + i)->sum < (s + j)->sum){
				a = *(s + i); 
				*(s + i) = *(s + j); 
				*(s + j) = a;
			}
		}
	}
}

void output(student *p, int n){
	cout << "\t     成绩表" << endl;
	cout << "学号\t" << "C++成绩\t" << "英语成绩\t" << "平均成绩"<<endl;
	for (int i = 0; i<n; i++, p++){
		cout << (*p).id << '\t' << (*p).cpp << '\t' << (*p).eng << '\t' << (float)(*p).sum/2.0 << endl;
	}
}

int main(int argc, char *argv[]){
	int n;
	student *p;
	cout << "请输入学生个数:";
	cin >> n;
	p = new student[n+1];
	input(p, n);
	sum(p, n);
	sort(p, n);
	output(p, n);
	delete[]p;
	return 0;
	
}