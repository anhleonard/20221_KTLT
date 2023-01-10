#include<bits/stdc++.h>
using namespace std;

float get_hypotenuse(float x, float y) {
	float result = sqrt(x*x+y*y);
	return result;
	//TRAN THI ANH
	//MSSV 20204512
}

int main() {
	float x,y;
	cin >> x >> y;
	float z = get_hypotenuse(x,y);
	printf("z = %.2f\n", z);
}

