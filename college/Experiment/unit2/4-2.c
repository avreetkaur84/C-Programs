// Write a program to print the characters (alphabets, integers, special characters and symbols) against the ASCII numbers 32 to 126.

 #include <stdio.h>

 int main()
 {
    int i;
    for(i=32; i<=126; i++)
    {
        printf("The ASCI value of %d is %c\n", i, i);
    }
 }