#include <stdio.h>
int fun()
{
	static int a =100;
	return a++;
}
int main()
{
       static int a;
	a = 0x10;
	printf("my name is\n");
	return 0;
}
