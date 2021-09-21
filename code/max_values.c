#include <stdio.h>


/* unsigned long can be no larger than ULONG_MAX = 18446744073709551615 */
/* anything greater than 2^63-1 and we get a warning because it is "so large that it's unsigned." */
#define ULONG_MAX 9223372036854775807

/* long can be no larger than  */
#define LONG_MAX 9223372036854775807

int main(int argc, char *argv[])
{
    printf("%lu\n", (unsigned long) ULONG_MAX);
    printf("%ld\n", (long) LONG_MAX);

    return 0;
}
