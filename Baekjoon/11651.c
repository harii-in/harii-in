#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}point;
point sort[1000001];

void merge(point* arr, int first, int mid, int last) {
	int i = first, j = mid + 1, k = first;
	while (i <= mid && j <= last) {
		if (arr[i].y < arr[j].y)
			sort[k++] = arr[i++];
		else if (arr[i].y > arr[j].y)
			sort[k++] = arr[j++];
		else {
			if (arr[i].x < arr[j].x)
				sort[k++] = arr[i++];
			else if (arr[i].x > arr[j].x)
				sort[k++] = arr[j++];
		}
	}

	if (i <= mid)
		while (i <= mid)
			sort[k++] = arr[i++];
	else
		while (j <= last)
			sort[k++] = arr[j++];
	for (k = first; k <= last; k++)
		arr[k] = sort[k];
}

void mergeSort(point* arr, int first, int last) {
	int mid;
	if (first < last) {
		mid = (first + last) / 2;
		mergeSort(arr, first, mid);
		mergeSort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	point* coordinate = (point*)malloc(sizeof(point) * n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &coordinate[i].x, &coordinate[i].y);
	mergeSort(coordinate, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", coordinate[i].x, coordinate[i].y);
	free(coordinate);
	return 0;
}