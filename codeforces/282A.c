#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;
    while (n--) {
        char op[16];
        scanf("%s", op);
        if (strchr(op, '+') != NULL) {
            ++x;
        } else {
            --x;
        }
    }
    printf("%d\n", x);
    return 0;
}
