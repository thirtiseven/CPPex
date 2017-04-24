#include <iostream>

struct complex {
	float real, image;
};

void input_complex(complex *p) { 
	std::cout << "Enter complex:";
	std::cin >> (*p).real >> (*p).image;
}

void output_complex(complex *s) {
	if((*s).real == 0 && (*s).image == 0) {
		std::cout << 0 << std::endl;
		return;
	}
	if((*s).image == 0) {
		std::cout << (*s).real;
		return;
	}
	if((*s).real == 0) {
		std::cout << (*s).image << "i";
		return;
	}
	std::cout << (*s).real;
	if((*s).image > 0){
		std::cout << "+";
	}
	std::cout << (*s).image << "i";
}

complex add_complex(complex p1, complex p2) { 
	complex t;
	t.real = p1.real + p2.real;
	t.image = p1.image + p2.image;
	return t;
}

complex minus_complex(complex p1,complex p2) { 
	complex t;
	t.real = p1.real - p2.real;
	t.image = p1.image - p2.image;
	return t;
}

int main(int argc, char *argv[]) { 
	complex alice, bob, sum, difference;
	input_complex(&alice);
	input_complex(&bob);
	sum = add_complex(alice,bob);
	difference = minus_complex(alice,bob);	
	std::cout << "Sum is ";
	output_complex(&sum );
	std::cout << "\nDifference is ";
	output_complex(&difference);
	return 0;
}