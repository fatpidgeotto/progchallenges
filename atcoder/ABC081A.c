#include <stdio.h>

int
main()
{
    char s[4];
    scanf("%s", s);
    int total = 0;
    for (int i = 0; i < 3; ++i) {
        if (s[i] == '1')
            ++total;
    }
    printf("%d\n", total);
    return 0;
}
