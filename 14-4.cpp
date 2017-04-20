#include <iostream>

using namespace std;

class CArray{
	int size;
	int *p;
	public:
		CArray(int n = 100){
			size = n;
			p = new int[n];
		}
		~CArray(){
			delete[] p;
		}
		int& GetElem(int i){
			return p[i-1];
		}
		void Input(){
			for(int i=0;i<size;i++){
				cin >> p[i];
			}
		}
		void Output(){
			for(int i=0;i<size;i++){
				if(i>0){
					cout << " ";
				}
				cout<<p[i];
			}
			cout<<endl;
		}
		void Sort(){
			for(int i=0;i<size-1;i++){
				for(int j=0;j<size-1-i;j++){
					if(p[j]>p[j+1]){
						int tmp=p[j];
						p[j]=p[j+1];
						p[j+1]=tmp;
					}
				}
			}
		}
		int Search(int n){
			for(int i=0;i<size;i++)
				if(p[i]==n)	return 1;
			return 0;
		}
};

int main(int argc, char *argv[]) {
	CArray arr(6);
	arr.Input();
	arr.Output();
	cout<<arr.GetElem(3)<<endl;
	arr.Sort();
	arr.Output();
	cout<<arr.GetElem(3)<<endl;
	if(arr.Search(54))
		cout<<"yes"<<endl;
	else
		cout<<"no find"<<endl;
	
	return 0;
}