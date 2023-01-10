#include<bits/stdc++.h>
using namespace std;

//TRAN THI ANH
// MSSV 20204512

struct Complex {
	double real;
	double img;
};

Complex operator + (Complex a, Complex b) {
	Complex c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

Complex operator - (Complex a, Complex b) {
	Complex c;
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	return c;
}

Complex operator * (Complex a, Complex b) {
	Complex c;
	c.real = a.real*b.real - a.img*b.img;
	c.img = a.real*b.img + a.img*b.real;
	return c;
}

Complex operator / (Complex a, Complex b) {
	Complex c;
	c.real = (a.real*b.real + a.img*b.img)/(b.real*b.real + b.img*b.img);
	c.img = (- a.real*b.img + a.img*b.real)/(b.real*b.real + b.img*b.img);
	return c;
}

ostream & operator << (ostream& out, const Complex &a) {
	out << '(' << setprecision(2) << a.real << (a.img >= 0 ? '+' : '-') << setprecision(2) << fabs(a.img) << "i)";
	return out;
}

int main() {
	double real_a, real_b, img_a, img_b;
	cin >> real_a >> img_a;
	cin >> real_b >> img_b;
	Complex a{real_a, img_a};
	Complex b{real_b, img_b};
	cout << "TRAN THI ANH - 20204512" << endl;
	cout << a << " + " << b << " = " << a+b << endl;
	cout << a << " - " << b << " = " << a-b << endl;
	cout << a << " * " << b << " = " << a*b << endl;
	cout << a << " / " << b << " = " << a/b << endl;
}












