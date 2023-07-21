#include <stdio.h>
#include <limits.h>

int eggDrop(int n, int k) {
    int dp[n+1][k+1];
    int res;
    int i, j, x;

    for (i = 1; i <= n; i++) {
        dp[i][0] = 0;
        dp[i][1] = 1;
    }

    for (j = 1; j <= k; j++) {
        dp[1][j] = j;
    }

    for (i = 2; i <= n; i++) {
        for (j = 2; j <= k; j++) {
            dp[i][j] = INT_MAX;
            for (x = 1; x <= j; x++) {
                res = 1 + max(dp[i-1][x-1], dp[i][j-x]);
                if (res < dp[i][j]) {
                    dp[i][j] = res;
                }
            }
        }
    }

    return dp[n][k];
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n = 2, k = 10;
    printf("Minimum number of attempts: %d\n", eggDrop(n, k));
    return 0;
}
