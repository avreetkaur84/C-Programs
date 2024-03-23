# include <stdio.h>

void morning();
void afternoon();
void night();

int main() {
    morning();
    afternoon();
    night();

    return 0;
}

void morning() {
    printf("Good Morning! Have a nice day!!\n");
}

void afternoon() {
    printf("Good Aternoon! Keep working hard!!\n");
}

void night() {
    printf("Good Night! Have a good sleep!!\n");
}