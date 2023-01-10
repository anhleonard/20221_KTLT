#include<bits/stdc++.h>
using namespace std;

int result_nguyen(int x) {
	return x*x*x;
}

float resutl_thuc(float k) {
	return k*k*k;
	//TRAN THI ANH
	//MSSV 20204512
}

int main() {
	int x;
	float k;
	cin >> x >> k;
	cout << "TRAN THI ANH - 20204512" << endl;
	cout << "Int: " << result_nguyen(x) << endl;
	printf("Double: %.2f", resutl_thuc(k));
}
