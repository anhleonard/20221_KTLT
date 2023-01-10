#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[100];
//	cout << "Ho va ten: Tran Thi Anh" <<endl;
//	cout << "MSSV: 20204512"<<endl;
	cout << "Enter the number of elements: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "The input array is:" << endl;
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if(*(a+i) > *(a+j)) {
				int x = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = x;
			}
		}
	}
	cout << "The sorted array is:" << endl;
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
