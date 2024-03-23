// C program to understand difference between 
// pointer to an integer and pointer to an
// array of integers. 
#include<stdio.h>

int main()
{
    int arr[5]={23, 56, 87, 54, 34};
	int *p; 
	int (*ptr)[5]; 
	
	p = arr;
	ptr = &arr; 
	
	printf("p = %d, ptr = %d\n", *p, *ptr);
	
	p++; 
	ptr++;
	
	printf("p = %d, ptr = %d\n", p, ptr);

    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
                          sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n", 
                        sizeof(ptr), sizeof(*ptr));
	
	return 0;
}
