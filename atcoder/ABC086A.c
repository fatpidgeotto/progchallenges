#include <stdio.h>

int
main()
{
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);
    printf("%s\n", (a * b) % 2 == 0 ? "Even" : "Odd");
    return 0;
}
