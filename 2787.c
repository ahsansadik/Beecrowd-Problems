#include <stdio.h>
int main ()
{

	int line, col;

	scanf("%d d", &line, &col);

	if (line % 2 == 0 && col % 2 == 0)
		printf("1\n");
	else if (line % 2 == 1 && col % 2 == 1)
		printf("1\n");
	else
		printf("0\n");

}
