#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void bubblesort(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
void out_array(int arr[], int N) {
	printf("\n");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
}
void selection(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		int mn = arr[i], tmp = i;
		for (int j = i+1; j < N; j++) {
			if (arr[j] < mn) {
				mn = arr[j];
				tmp = j;
			}
		}
		if (i != tmp) {
			int x = arr[i];
			arr[i] = arr[tmp];
			arr[tmp] = x;
		}
	}
}
int main() {
	int numbers[20] = { 0 }, flag = 0;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		numbers[i] = 1 + rand() % 100;
		printf("%d ", numbers[i]);
	}
	printf("\nEnter sort that you want 1 - bubble | 2 - selection\n");
	scanf_s("%d", &flag);
	switch (flag) {
	case 1: {bubblesort(numbers, 20); out_array(numbers, 20); break;}
	case 2: {selection(numbers, 20); out_array(numbers, 20); break;}
	default: {printf("Something get wrong"); break;}
	}
	return 0;
}