#include <stdio.h>
int main() {
	int i;
	char c;
	float f;
	double d;
	short int si;
	unsigned int ui;
	long int li;
	long long int lli;
	unsigned long int uli;
	unsigned long long int ulli;
	signed char sc;
	unsigned char uc;
	long double ld;
	
	scanf("%d\n", &i);
	scanf("%c\n", &c);
	scanf("%f\n", &f);
	scanf("%lf\n", &d);
	scanf("%hd\n", &si);
	scanf("%u\n", &ui);
	scanf("%ld\n", &li);
	scanf("%lld\n", &lli);
	scanf("%lu\n", &uli);
	scanf("%llu\n", &ulli);
	scanf("%c\n", &sc);
	scanf("%c\n", &uc);
	scanf("%Lf\n", &ld);
	
	printf("%d\n", i);
	printf("%c\n", c);
	printf("%f\n", f);
	printf("%lf\n", d);
	printf("%hd\n", si);
	printf("%u\n", ui);
	printf("%ld\n", li);
	printf("%lld\n", lli);
	printf("%lu\n", uli);
	printf("%llu\n", ulli);
	printf("%c\n", sc);
	printf("%c\n", uc);
	printf("%Lf\n", ld);
	
	return 0;
}
