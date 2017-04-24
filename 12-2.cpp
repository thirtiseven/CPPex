#include <iostream>
#include <cmath>

struct point {
	double x, y, z;
};

int main(int argc, char *argv[]) {
	point a,b;
	std::cin >> a.x >> a.y >> a.z;
	std::cin >> b.x >> b.y >> b.z;
	std::cout << std::sqrt(pow(a.x-b.x,2) + std::pow(a.y-b.y,2) + std::pow(a.z-b.z,2)) << std::endl;
}