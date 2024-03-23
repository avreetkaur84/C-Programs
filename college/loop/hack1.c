#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
  	// Complete the code.
    
    switch (a) {
        case 1:
            printf("one\n");
        case 2:
            printf("two\n");
        case 3:
            printf("three\n");
        case 4:
            printf("four\n");
        case 5:
            printf("five\n");
        case 6:
            printf("six\n");
        case 7:
            printf("seven\n");
        case 8:
            printf("eight\n");
        case 9:
            printf("nine\n");
        }
           
    if(a>9){
        printf("nine\n");
    }
    
        switch (b) {
            case 1:
                printf("one\n");
            case 2:
                printf("two\n");
            case 3:
                printf("three\n");
            case 4:
                printf("four\n");
            case 5:
                printf("five\n");
            case 6:
                printf("six\n");
            case 7:
                printf("seven\n");
            case 8:
                printf("eight\n");
            case 9:
                printf("nine\n");
        }
    if(b>9){
        printf("nine\n");
    }
    
    if(a%2==0)
        {
            printf("even\n");
        }else {
            printf("odd\n");
        }
        
    if(b%2==0)
        {
            printf("even");
        }else {
            printf("odd");
        }
    
    return 0;
}