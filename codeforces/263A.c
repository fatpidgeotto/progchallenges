#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int val;
            scanf("%d", &val);
            if (val == 1) {
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", abs(x - 2) + abs(y - 2));
    return 0;
}
