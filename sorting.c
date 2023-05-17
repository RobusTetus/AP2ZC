#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main (int argc, char *argv[])
{
	int count;
	printf ("Kolik čísel budeme řadit?\n");
	scanf("%u", &count);

	int numbers[count];
	for (int i = 0; i < count; i++)
	{
		printf("Zadejte %i. číslo: ", i + 1);
		scanf("%i", &numbers[i]);
	}

	bubble_sort(numbers, count, 2*count);

	system("clear");
	printArray(numbers, count);

	return EXIT_SUCCESS;
}
