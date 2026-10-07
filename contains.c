#include <stdio.h>

int contains(int item, int arr[], int size) {

	unsigned int count = 0;
	
	for (int i = 0; i < size; i ++){
		count = (arr[i] == item)? count+1: count;	
	}

	return count;
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};
	

   int a = contains(2,arr,sizeof(arr));
   printf("Result: %d\n",a);
   return 0;
}

