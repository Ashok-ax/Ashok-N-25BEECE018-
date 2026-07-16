#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char s[20];
        scanf("%d", &n);
        scanf("%s", s);
        int maxLen = 0;
        int current = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                current++;
            } else {
                if (current > maxLen)
                    maxLen = current;
                current = 0;
            }
        }
        if (current > maxLen)
            maxLen = current;
        int ans = (maxLen + 1) / 2;
        printf("%d\n", ans);
    }

    return 0;
}