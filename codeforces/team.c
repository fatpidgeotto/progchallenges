#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int total = 0;
    while (n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int curr = a + b + c;
        total += curr >= 2 ? 1 : 0;
    }
    printf("%d\n", total);
    return 0;
}
