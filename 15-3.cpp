#include <iostream>
#include <cstring>

#define maxn 10000

class my_string {
	private:
		char mem[maxn];
		char *t;
	public:
		my_string() {
			std::cin >> mem;
			t = mem;
		}
		my_string(char* p) {
			t = mem;
			t=new char [strlen(p)+1];
			strcpy(t,p);
		}
		void Display();
		/*
		my_string& operator = (const my_string &s1) {
			t = mem;
			if(s1.t){
				int n=strlen(s1.t)+1;
				char *c=new char[n];
				strcpy(c,s1.t);
				t = c;
			}
			return *this;
		}
		*/
		
		my_string &operator = (const char *s) {  
			t=new char[strlen(s)+1];  
			strcpy(t,s);  
			return *this;  
		}  
		my_string operator + (my_string& add_part) {
			int len = strlen(t) + strlen(add_part.t);
			char *w = new char[len + 1];
			strcpy(w, t);
			for(int i = strlen(t);i <= len; i++) {
				w[i] = add_part.t[i - strlen(t)];
			}
			delete []t;
			t = new char[len + 1];
			strcpy(t, w);
			delete []w;
			return *this;
		};
		int operator ~ () const{
			return strlen(mem);
		};
		void output() {
			std::cout << mem << std::endl;
		}
};

int main(int argc, char *argv[]) {  
	my_string test1, test2, test3;
	std::cout << ~test1 << " " << ~test2 << " " << ~test3 << std::endl;
	test2 = test1 + test3;
	test1.output();
	test2.output();
	test3.output();
	return 0;
}




/*
#include <iostream>
#include <cstring>
using namespace std;
class String
{
	 char *A;
public:
	String(char *s = NULL)
	{
		if(s)
		{
			A = new char[strlen(s) + 1];
			strcpy(A, s);
		}
		else A = NULL;
	}
	~String()
	{
		delete[]A;
	}
	String& operator=(String& t)
	{
		if (t.A)
		{
			char *s = new char[strlen(t.A) + 1];
			strcpy(s, t.A);
			delete[]A;
			A = s;
		}
		else A = NULL;
		return *this;
	}
	int  operator~()
	{
		if (A) return strlen(A);
		else return 0;
	}
	String& operator+(String& t)
	{
		
		char* b;
		int L;
		L = strlen(A) + strlen(t.A); 
		b = new char[L+1];
		strcpy(b, A);
		for (int i = strlen(A); i <= L; i++)
		{
			b[i] = t.A[i - strlen(A)];
		}
		delete[]A;
		A = new char[L + 1];
		strcpy(A, b);
		delete[]b;
		return *this;
	}
	void show()
	{
		cout << A << endl;
	}
};
int main()
{
	String s1("南通大学"), s2("图书馆"),s3;
	s1.show(); s2.show();
	cout<<~s1<< " " << ~s2<< endl;
	s3 = (s1 + s2); s3.show();
	s1 = s2;
	s1.show(); s2.show();
	system("pause");
	return 0;
}
*/