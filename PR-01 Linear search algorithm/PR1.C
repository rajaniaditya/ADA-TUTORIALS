#include <stdio.h>
int search(int array[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (array[i] == x)
			return i;
        			return -1;
}
int main()
{
	int array[] = { 12, 114, 200, 400, 90 };
	int x = 114;
	int n = sizeof(array) / sizeof(array[0]);
	int result = search(array, n, x);
	if (result == -1)
    		printf("Element not found");
    	else
		printf("Element found at index: %d", result);
}
