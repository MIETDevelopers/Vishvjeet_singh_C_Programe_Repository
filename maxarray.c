//Creation: 20-03-21
//vishvjeet singh
#include<stdio.h>
int main(){
	int i;
	float arr[5];

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i)
	{
    scanf("%f", &arr[i]);
	}

		for (i = 1; i < 5; ++i)
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);// This will give the result

	return 0;
} //End