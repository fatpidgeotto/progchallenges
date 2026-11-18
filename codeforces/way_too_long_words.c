#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[128];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        unsigned len = strlen(s);
        if (len <= 10) {
            printf("%s\n", s);
        } else {
            printf("%c%d%c\n", s[0], len - 2, s[len-1]);
        }
    }
    return 0;
}
