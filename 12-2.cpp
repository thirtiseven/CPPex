#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x,y,z;
};

int main(int argc, char *argv[]) {
	point a,b;
	cin >> a.x >> a.y >> a.z;
	cin >> b.x >> b.y >> b.z;
	cout << sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2) + pow(a.z-b.z,2)) << endl;
}