// If the marks obtained by a student in five different subjects are input through the keyboard, find out aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.

# include <stdio.h>

int main () {
    int sub1, sub2, sub3, sub4, sub5;
    int aggregate;
    float percentage;

    printf("Note: Input the marks out of 100.\n");
    printf("Enter the marks for the first subject: ");
    scanf("%d", &sub1);
    printf("Enter the marks for the second subject: ");
    scanf("%d", &sub2);
    printf("Enter the marks for the third subject: ");
    scanf("%d", &sub3);
    printf("Enter the marks for the fourth subject: ");
    scanf("%d", &sub4);
    printf("Enter the marks for the fifth subject: ");
    scanf("%d", &sub5);

    aggregate = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (aggregate/5);

    printf("Aggregate marks obtained by student are %d\n", aggregate);
    printf("Percentage of the student is %f", percentage);
}