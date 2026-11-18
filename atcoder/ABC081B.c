#include <stdio.h>

int
main()
{
    int n;
    scanf("%d", &n);
    long int v[200];
    for (int i = 0; i < n; ++i) {
        scanf("%ld", &v[i]);
    }
    long times = 0;
    long flag = 1;
    while (flag) {
        for (int i = 0; i < n; ++i) {
            if (v[i] % 2 != 0) {
                flag = 0;
                break;
            } else {
                v[i] /= 2;
            }
        }
        if (flag)
            ++times;
    }
    printf("%ld\n", times);
    return 0;
}
