# include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    printf("Enter the marks out of 100 for each subject\n");
    printf("Enter the marks for subject1 - ");
    scanf("%d", &subject1);

    printf("Enter the marks for subject2 - ");
    scanf("%d", &subject2);

    printf("Enter the marks for subject3 - ");
    scanf("%d", &subject3);

    float total_percent = (subject1 + subject2 + subject3)/3;
    printf("Total percentage is %f", total_percent);

    if (total_percent < 40.0 || subject1 < 33 || subject2 < 33 || subject3 < 33 ) {
        printf("\nYou have failed!!");
    } else {
        printf("\nYou have Passed!!");
    }
}




// You can enhance this program more by telling in detail the reason of failure, whether a student has failed because of overall percentage or individual subject percentage.