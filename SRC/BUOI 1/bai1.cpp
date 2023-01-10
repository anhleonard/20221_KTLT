#include<bits/stdc++.h>

int main() {
	int x,y,z;
	int *ptr;
	printf("Enter three integers:\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("The three integers are:\n");
//	Ho va ten: Tran Thi Anh
//	MSSV: 20204512
	ptr = &x;
	printf("x = %d\n", *ptr);
	ptr = &y;
	printf("y = %d\n", *ptr);
	ptr = &z;
	printf("z = %d", *ptr);
}
