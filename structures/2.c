#include <stdio.h>
#include <string.h>

int main()
{
    struct book
    {
        char name[70];
        float price;
        int pages;
    } a, b;

    strcpy(a.name, "Zero to One");
    a.price = 324.5;
    a.pages = 270;

    strcpy(b.name, "Cruel Prince");
    b.price = 405.4;
    b.pages = 315;

    printf("%s\n", a.name);
    printf("%.2f\n", a.price);
    printf("%d\n\n", a.pages);

    printf("%s\n", b.name);
    printf("%.2f\n", b.price);
    printf("%d\n", b.pages);
}