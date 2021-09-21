#include <stdio.h>

void crash() {
    char *test = NULL;
    int i = 0;

    for (i = 0; i < 1000000; i++) {
        printf("%c", test[i]);
    }
}


int main(int argc, char *argv[])
{
    int age = 100;  // or set to default value that is an error.
    int height = 72;

    printf("I am %d inches tall.\n", height);

    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();

    return 0;
}
