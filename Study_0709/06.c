#include <stdio.h>

int main_06()
{
	int i = 1;
	int j = 1;

	while (i <= 9) {
		while (j <= 9) {
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
		j = 1; // j를 다시 1로 초기화 시켜야 반복 된다.
	}

	return 0;
}