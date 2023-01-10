	#include<bits/stdc++.h>
	using namespace std;
	
	int get_value(int x, int a = 2, int b = 1, int c = 0) {
		int value = a*x*x + b*x + c;
		return value;
		//TRAN THI ANH
		// MSSV 20204512
	}
	
	int main () {
		int x;
		cin >> x;
		int a = 2;
		int b = 1;
		int c = 0;
		cin >> a >> b >> c;
		cout << "TRAN THI ANH - 20204512" << endl;
		cout << "a=2, b=1, c=0: " << get_value(x) << endl;
		cout << "a=" << a << ", b=1, c=0: " << get_value(x,a) << endl;
		cout << "a=" << a << ", b=" << b <<", c=0: " << get_value(x, a, b) << endl;
		cout << "a=" << a << ", b=" << b << ", c=" << c <<": " << get_value(x, a, b, c) << endl;
	}
