#include <stdio.h>

int
main()
{
    int a, b, c, x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);
    long total = 0;
    for (int i = 0; i <= a; ++i) {
        for (int j = 0; j <= b; ++j) {
            for (int k = 0; k <= c; ++k) {
                long curr = 500 * i + 100 * j + 50 * k;
                if (curr == x)
                    ++total;
            }
        }
    }
    printf("%ld\n", total);
    return 0;
}
