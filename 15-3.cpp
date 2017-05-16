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
		
		my_string operator + (my_string& add_part) const {
			//return my_string(strcat(t, add_part.mem));
			char ww[] = "N/A";
			char* w;
			w = ww;
			my_string temp(w);
			temp.t=new char [ strlen(t)+strlen(add_part.t)+1 ];
			strcpy(temp.t,t);
			strcat(temp.t,add_part.t);
			return temp;
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