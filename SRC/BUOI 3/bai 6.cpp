#include<bits/stdc++.h>
using namespace std;

int ucln(int x, int y) {
	if( y == 0 ) return x;
	return ucln(y, x % y);
}

//TRAN THI ANH - 20204512

int ucln2(int a, int b) {
	while(b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << "TRAN THI ANH - 20204512" << endl;
	cout << ucln(a,b) << endl;
	cout << ucln2(a,b) << endl;
}


