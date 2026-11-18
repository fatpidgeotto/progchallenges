#include <stdio.h>

int
main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int total = 0;
    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        int val = i;
        while (val) {
            sum += val % 10;
            val /= 10;
        }
        if (a <= sum && sum <= b) {
            total += i;
        }
    }
    printf("%d\n", total);
    return 0;
}
