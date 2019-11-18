#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);

  a = 10;
  b = 20;
  int tmp;

  tmp = a;
  a = b;
  b = tmp;

	a = a + b;
	b = a - b;
	a = a - b;

	printf("a = %d, b = %d\n", a, b);
	
	system("pause");
	return 0;
}
