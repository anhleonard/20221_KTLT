#include<bits/stdc++.h>
using namespace std;

void hoanvi(int *a, int *b, int *c) {
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	cout << "Before: " << a << ", " << b << ", " << c << endl;
	hoanvi(&a, &b, &c);
	cout << "After: " << a << ", " << b << ", " << c << endl;
}
