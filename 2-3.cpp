#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	float temperature = 0;
	cout << "华氏温度？";
	cin >> temperature;
	cout << "华氏 " << temperature << " 度 = 摄氏 " << fixed << setprecision(1) << 5.0 / 9.0 * (temperature - 32) << " 度" << endl;
	return 0;
}