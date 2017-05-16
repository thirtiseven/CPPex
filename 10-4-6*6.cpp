#include <iostream>

void input(int a[][6],int line) {	
	for(int i = 0; i < line; i++) {
		for(int j = 0; j < 6; j++) {
			std::cin >> a[i][j];
		}
	}
}

float average(int *a, int n){
	float avg = 0;
	for(int i = 0; i < n; i++){
		avg += a[i];
	}
	avg /= n;
	return avg;
}

int max(int (*a)[6],int n,int *r,int *c){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 6; j++){	
			if(a[*r][*c] < a[i][j]){	
				*r = i;
				*c = j;
			}
		}
	}
	return a[*r][*c];
}

int main(int argc, char *argv[]){	
	int line = 6;
	int a[6][6] = {0};
	float av = 0;
	input(a, line);
	for(int i = 0; i < line; i++)
		av += average(a[i], line);
	av /= 6;
	std::cout << "平均值: " << av << std::endl;
	int r, c;
	std::cout << "最大值 " << max(a, line, &r, &c) << " 在第 " << r+1 << " 行 " << c+1 << " 列" << std::endl;
	return 0;
}