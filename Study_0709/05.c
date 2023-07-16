#include <stdio.h>

int main_05() {
	int num_list[5];
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num_list[i]);
	}

	// ÃÖ¼Ú°ª, ÃÖ´ñ°ª ÆÇº°
	int min = num_list[0]; // ÃÊ±âÈ­
	int max = num_list[0];

	for (int i = 0; i < 5; i++) {
		if (num_list[i] < min) {
			min = num_list[i];
		}
		else if (num_list[i] > max) {
			max = num_list[i];
		}
	}

	printf("ÃÖ¼Ú°ª : %d\n", min);
	printf("ÃÖ´ñ°ª : %d", max);

	return 0;
}