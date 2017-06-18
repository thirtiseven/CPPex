#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main() {
	std::string from, to, str, pair;
	std::cout << "Enter input file name" << std::endl;
	std::cin >> from;
	std::ifstream fin(from);
	std::cout<< "Enter output file name" <<std::endl;
	std::cin >> to;
	std::ofstream fout(to);
	if(!fin || !fout) {
		std::cout << "File can't open." << std::endl;
		exit(0);		
	}
	while(!fin.eof()) {
		fin >> str;
		if(str == "john") {
			fout << "约翰";
		} else {
			fout << str;
		}
		fout << " ";
	}
	fin.close();
	fout.close();
	return 0;
}