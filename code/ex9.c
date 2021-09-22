#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    int j = argc;

    char *state;

    while (i < j) {
        printf("arg %d: %s\n", i, argv[i]);
	i++;
    }

    while (i < (j + 4)) {
	
	switch ((i - j)) {
	    case 0:
		state = "California";
                break;
	    case 1:
		state = "Oregon";
		break;
	    case 2:
		state = "Washington";
		break;
            case 3:
                state = "Texas";
		break;
	    default:
		printf("\nERROR in switch\n");
	}

	printf("state %i: %s\n", (i - j), state);

        i++;
    }

    printf("----------------------------\n");
    printf(" while loop: counting down.\n");
    i = 25;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
    printf("----------------------------\n");

    return 0;
}
