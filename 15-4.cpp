#include <iostream>
using namespace std;
class Matrix
{
	int *m,M,N;
public:
	Matrix(int m1=0, int n1=0)
	{
		m = new int[m1*n1];
		M = m1;
		N = n1;
	}
	int getM() { int m2; m2 = M; return m2; }
	int getN() { int n2; n2 = N; return n2; }
	~Matrix()
	{
		delete[]m;
	}
	void Input()
	{
		cout << "输入矩阵" << endl;
		for (int i = 0; i < M*N; i++)
		{
			cin >> m[i];
		}
	}
	void Output()
	{
		for (int i = 0; i < M*N; i++)
		{
			cout << m[i]<<"  ";
			if ((i + 1) % N == 0) cout << endl;
		}
	}
	Matrix& operator+(Matrix& t);
	Matrix& operator-(Matrix& t);
	Matrix& operator=(Matrix& t);
};
Matrix& Matrix:: operator+(Matrix& t)
{
	
	for (int i = 0; i < t.getM()*t.getN(); i++)
	{
		m[i] = m[i] + t.m[i];
	}
	return *this;

}
Matrix& Matrix:: operator-(Matrix& t)
{
	
	
	for (int i = 0; i < t.getM()*t.getN(); i++)
	{
		m[i] =m[i] - t.m[i];
	}
	return *this;
}
Matrix& Matrix:: operator=(Matrix& t)
{
	
	for (int i = 0; i < t.getM()*t.getN(); i++)
	{
		m[i] = t.m[i];
	}
	return *this;
}


int main()
{
	int m3, n3;
	
	cout << "输入行数  列数" << endl;
	cin >> m3 >> n3;
	Matrix a(m3, n3), b(m3, n3), c(m3, n3), d(m3, n3);//c没有申请内存
	a.Input();
	b.Input();
	c.Input();
	d.Input();
	a.Output();
	b.Output();
	d = a;
	c = a + b;
	c.Output();
	c = d - b;
	c.Output();
	a = b;
	a.Output();
	system("pause");
	return 0;
}