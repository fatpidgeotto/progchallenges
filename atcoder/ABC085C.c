#include <stdio.h>

int
main()
{
    int N;
    long Y, K;
    scanf("%d %ld", &N, &Y);
    K = Y / 1000;
    for (int x = 0; x <= N; ++x) {
        int y = (K - N - 9 * x) / 4;
        int z = N - y - x;
        if (y >= 0 && z >= 0 && x + y + z == N && 10 * x + 5 * y + z == K) {
            printf("%d %d %d\n", x, y, z);
            return 0;
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}
