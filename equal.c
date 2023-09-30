#include <stdio.h>

int checkequal() {
	int n1,n2;
	scanf("%d %d", &n1,&n2);
	if (n1==n2) 
	printf("equal");
	else 
	printf("not equal\n");
}

int main() {
	checkequal();
	return 0;
}
