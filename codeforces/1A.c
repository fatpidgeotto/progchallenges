#include <stdio.h>

int main()
{
    unsigned long long n, m, a;
    scanf("%llu %llu %llu", &n, &m, &a);
    unsigned long long total = n / a + ( n % a == 0 ? 0 : 1);
    total *= m / a + ( m % a == 0 ? 0 : 1);
    printf("%llu\n", total);
    return 0;
}
