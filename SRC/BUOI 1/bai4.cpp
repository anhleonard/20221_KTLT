#include<bits/stdc++.h>
using namespace std;

double *maximum(double *a, int n) {
	double *max;
	max = a;
	if(a==NULL) return NULL;
	else {
		double b = *a;
		for(int i = 0; i < n; i++) {
			if(b < a[i]) b = a[i];
		}
		max = &b;
	}
	return max;
}

int main() {
	double arr[] = {1., 10., 2., -7., 25., 3.};
    double* max = maximum(arr, 6); 
	cout << *max << endl;
	cout << "Ho va ten: Tran Thi Anh" << endl;
    cout << "MSSV: 20204512" << endl;
}
