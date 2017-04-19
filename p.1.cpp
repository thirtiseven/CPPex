#include <iostream>
#include <algorithm>

using namespace std;

int a[100] = {0};

void myqsort(int a[],int left,int right){
	int mid = a[(left+right)/2];
	int l = left,r = right;
	while(l < r){
		while(a[l] < mid){
			l++;
		}
		while(a[r] > mid){
			r--;
		}
		if(l <= r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	if(l < right){
		myqsort(a, l, right);
	}
	if(r > left){
		myqsort(a, left, r);
	}
}

void xsort(int a[],int n){
	for(int i = 0;i<n;i++){
		int alice = i;
		for (int j = i; j < n; j++) {
			if (a[alice] > a[j]) {
				alice = j;
			}
		}
		swap(a[i],a[alice]);	
	}
}

void InsertionSort(int *a, int len)  
{  
	for (int j=1; j<len; j++)  
	{  
		int key = a[j];  
		int i = j-1;  
		while (i>=0 && a[i]>key)  
		{  
			a[i+1] = a[i];  
			i--;  
		}  
		a[i+1] = key;  
	}  
}   

void bubblesort(int a[],int n){
int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
//	myqsort(a,0,n-1);
//	xsort(a,n);
//	InsertionSort(a, n);
	bubblesort(a,n);
	for(int i = 0;i < n;i++){
		cout << a[i] << ' ';
	}
	return 0;
}