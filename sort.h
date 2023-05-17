#include <stdlib.h>

void swap(int * xp, int * yp);

void bubble_sort(int arr[], int length, int iter)
{
	for (int i = 0; i < iter; i++)
	{
		int j = 0;
		while(j+1 < length)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
			j++;
		}
	}

}

void swap(int * xp, int * yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
