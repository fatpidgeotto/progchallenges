#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[128], b[128];
    scanf("%s", a);
    scanf("%s", b);
    for (int i = 0; a[i] != '\0'; ++i) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    int ret = strcmp(a, b);
    printf("%d\n", ret < 0 ? -1 : ret > 0 ? 1 : 0 );
    return 0;
}
