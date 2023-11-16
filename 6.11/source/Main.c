#include <stdio.h>

// Part (a): Improved Bubble Sort
void improvedBubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int numberOfComparisons = n - i - 1;
		for (int j = 0; j < numberOfComparisons; ++j) {
			if (arr[j] > arr[j + 1]) {
				// Swap elements
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// Part (b): Optimized Bubble Sort
void optimizedBubbleSort(int arr[], int n) {
	int swapped;
	for (int i = 0; i < n - 1; ++i) {
		swapped = 0;
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				// Swap elements
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 1;
			}
		}

		// If no swaps were made, the array is already sorted
		if (swapped == 0) {
			break;
		}
	}
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Sorting using Improved Bubble Sort
	improvedBubbleSort(arr, n);

	// Print array after the first sorting
	printf("After the first sorting: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Sorting using Optimized Bubble Sort
	optimizedBubbleSort(arr, n);

	// Print final sorted array
	printf("Final sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
