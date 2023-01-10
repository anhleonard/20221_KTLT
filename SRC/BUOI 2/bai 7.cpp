#include <bits/stdc++.h>
using namespace std;

template <class temp>

temp sumArr(temp *a, temp *b, int m, int n) {
	temp sum = 0;
	for(int i = 0; i < m; i++ ) {
		sum = sum + *(a+i);
	}
	for(int i = 0; i < n; i++ ) {
		sum = sum + *(b+i);
	}
	return sum;
	//TRAN THI ANH
	//MSSV 20204512
}


int main() {
	int val;
	cin >> val;
	cout << "TRAN THI ANH - 20204512" << endl;
	{
		int a[] = {3,2,0,val};
		int b[] = {5,6,1,2,7};
		cout << sumArr(a,b,4,5) << endl;
	}
	{
		double a[] = {3.0, 2, 0, val*1.0};
		double b[] = {5,6.1,1,2.3,7};
		cout << sumArr(a,b,4,5);
	}
}

