#include <stdio.h>
#include <string.h>

#define MAXN 200005

int t, n;
int m[MAXN], s1[MAXN], s2[MAXN];
int min_time;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        min_time = 1e9;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &m[i], &s1[i], &s2[i]);
            if (s1[i]) count1++;
            if (s2[i]) count2++;
        }
        if (!count1 || !count2) {
            printf("-1\n");
            continue;
        }
        int bitmask = (1 << n) - 1;
        for (int i = bitmask; i >= 0; i--) {
            int time = 0, skills1 = 0, skills2 = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    time += m[j];
                    skills1 |= s1[j];
                    skills2 |= s2[j];
                }
            }
            if (skills1 && skills2) {
                min_time = time < min_time ? time : min_time;
            }
        }
        printf("%d\n", min_time);
    }
    return 0;
}
