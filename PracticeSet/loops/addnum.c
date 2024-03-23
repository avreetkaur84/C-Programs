# include <stdio.h> 

int main() {
    int i = 1;
    int sum1;
    printf("Printing numbers using while loop\n");
    while (i<=10) {
        sum1 += i;
        i++;
    }
    printf("%d\n", sum1);

    printf("Printing numbers using do-while loop\n");
    int j =1;
    int sum2;
    do {
        sum2 += j;
        j++;
    } while(j<=10);
    printf("%d\n", sum2);


    

    int k = 1;
    int sum3;
    printf("Printing numbers using for loop\n");

    printf("%d\n", sum1);
}