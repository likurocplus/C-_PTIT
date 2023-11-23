#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int coins[m];
    for (int i = 0; i < m; i++) {
        cin >> coins[i];
    }

    long long dp[n + 1] = {0};
    dp[0] = 1;

    for (int i = 0; i < m; i++) {
        for (int j = coins[i]; j <= n; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }

    cout << dp[n] << endl;

    return 0;
}

