#include <stdio.h>
#include <ctype.h>

int isNumber(char number[]);

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc > 1 && isNumber(argv[1])) {
        printf("Your first argument is a number, the number %s.\n", argv[1]);
    }

    if (argc == 1) {
        printf("You do not have any arguments. That really stinks.\n");
    } else if (argc == 2) {
        printf("You only have one argument. That is very boring.\n");
    } else if (argc > 1 && argc < 4) {
        printf("Here's your arguments: \n");

	for (i = 0; i < argc; i++) {
	    printf("%s ", argv[i]);
	}
	printf("\n");
    } else {
        printf("You have too many arguments. That's not good.\n");
    }

    return 0;
}

int isNumber(char number[]) {
    int i = 0;

    // check for negative numbers
    if (number[0] == '-') {
        i++;
    }

    // check for trailing zeros
    if (number[0] == '0') {
        i++;
    }

    for (; number[i] != 0; i++) {
        // if (number[i] > '9' || number[i] < '0')
	if (!isdigit(number[i])) {
	    return 0; // false
	}
    }
    return 1; // true
}
