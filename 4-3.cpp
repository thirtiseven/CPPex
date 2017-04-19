#include <iostream>
#include <iomanip>


using namespace std;
int main(int argc, char *argv[]) {
	double s = 1.0;
	long long n = 2;
	while (s < 5){
		s += 1.0/(double)n;
		n++;
	}
	cout << "n = " << n << " s = " << setprecision(5) << s;
	return 0;
}