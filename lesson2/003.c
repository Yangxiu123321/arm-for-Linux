#include <stdio.h>
int main()
{
	float a = 1.2;
	unsigned  char *p;
	p = &a;
	printf("%x\n",*p);
	return 0;
}
