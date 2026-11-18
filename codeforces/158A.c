#include <stdio.h>

int main()
{
    int n, k;
    int scores[128];
    scanf("%d %d", &n, &k);
    int advanced = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &scores[i]);
    }
    int min_score = scores[k-1];
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= min_score && scores[i] > 0) {
            ++advanced;
        } else {
            break;
        }
    }
    printf("%d\n", advanced);
    return 0;
}
