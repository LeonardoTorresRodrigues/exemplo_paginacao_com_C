#include <stdio.h>
int soma(int x, int y)
{
	return (x + y);
}
int main()
{
	int resultado = 0, resultado2 = 0, x = 3, y = 5;

	__asm__(
		"movl %1, %%eax;"
		"movl %2, %%ebx;"
		"addl %%ebx, %%eax;"
		: "=r"(resultado)
		: "a"(x),
		  "b"(y));

	__asm__(
		"addl %%ebx, %%eax;"
		: "=r"(resultado2)
		: "a"(x), "b"(y));

	printf("resultado = %d\n", resultado);

	printf("resultado2 = %d\n", resultado2);
}