#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int * removeAtIndex(int * heapArr, int i, size_t size);

int main(){
	int * arr = (int*)malloc(5*sizeof(int));

	for(int i = 0; i < 5; i++){
		*(arr + i) = i;
	}

	int * arr2 = removeAtIndex(arr, 2, 5*sizeof(int));

	for(int i = 0; i < 5; i++){
		printf("%d | %d \n", *(arr+i), *(arr2+i));

	}

	free(arr2);
	free(arr);
	return 0;
}


int * removeAtIndex(int * heapArr, int i, size_t size){
	int* dupeArr = (int*)malloc(4*sizeof(int));
	memccpy(dupeArr, heapArr, i, i*sizeof(int));
	memcpy(dupeArr+i, heapArr+i+1, 4*sizeof(int)-i*sizeof(int));
	return dupeArr;
}
