#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[50];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int max_color = 0;
        int max_diff = 0;

        for (int i = 0; i < n - 1; i++) {
            int cur_min = a[i];
            int cur_max = a[i];

            for (int j = i + 1; j < n; j++) {
                cur_min = min(cur_min, a[j]);
                cur_max = max(cur_max, a[j]);
                max_diff = max(max_diff, cur_max - cur_min);
            }
        }

        printf("%d\n", max_diff);
    }

    return 0;
}
