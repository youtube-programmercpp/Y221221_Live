#include <stdio.h>
#include <stdlib.h>
int input()
{
	int x;
	if (scanf_s("%d", &x) == 1)
		return x;
	else {
		fputs("入力エラー\n", stderr);
		exit(EXIT_FAILURE);
	}
}
int main()
{
	int x = input();

	int a[] = { 1, 2, 3 };

}
