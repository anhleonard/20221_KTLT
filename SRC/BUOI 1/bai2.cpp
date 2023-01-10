#include<bits/stdc++.h>
using namespace std;

int main() {
//	cout << "Ho va ten: Tran Thi Anh" << endl;
//	cout << "MSSV: 20204512" << endl;
	int x,y,z;
	cin >> x >> y >> z;
	cout << "Here are the values of x, y, and z: " << endl;
	cout << x << " "<< y <<" "<< z << endl;
	int *ptr;
	ptr = &x;
	x = *ptr + 100;
	ptr = &y;
	y = *ptr + 100;
	ptr = &z;
	z = *ptr + 100;
	cout << "Once again, here are the values of x, y, and z: " << endl;
	cout << x << " "<< y <<" "<< z << endl;
}
