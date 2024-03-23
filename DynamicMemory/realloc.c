#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char *ptr;
    ptr = (char *)malloc(10*sizeof(char));

    if(ptr == NULL)
        printf("Unable to give memory\n");

    strcpy(ptr, "Programming");
    printf("Adress: %d\n", ptr);
    printf("Value: %s\n", ptr);

    ptr = (char*)realloc(ptr, 20);
    strcat(ptr, " is amazing");
    printf("Adress: %d\n", ptr);
    printf("Value: %s\n", ptr);

    free(ptr);
}