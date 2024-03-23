# include <stdio.h>

int main() {
    int i=1, t1=1, t2=1, t3;

    while (i<=10)
    {
        t3 = t1+t2;
        printf("%d + %d = %d\n",t1, t2, t3);
        t1 = t2;
        t2 = t3;
    
        i++;
    }
}