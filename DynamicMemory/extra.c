#include <stdio.h>

int main()
{  
    int size,t;
   printf("Enter size of array: ");
   scanf("%d",&size);
   printf("Enter %d elements of array: \n",size);
   int a[50];
   for(int i=0;i<size;i++)
   {
    scanf("%d",&a[i]);
   }

    printf("original array is : ");
    for(int i=0;i<size;i++)
        printf("%d\t",a[i]);

    //logic to sort using bubble sort
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nSorted Array is: ");
    for(int i=0;i<size;i++)
    printf("%d\t",a[i]);


    return 0;
}