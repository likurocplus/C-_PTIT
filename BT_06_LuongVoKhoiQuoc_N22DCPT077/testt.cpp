#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int candies = 0;
    vector<int> candyCount(n, 1);

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            candyCount[i] = candyCount[i - 1] + 1;
        }
    }


    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1] && candyCount[i] <= candyCount[i + 1]) {
            candyCount[i] = candyCount[i + 1] + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        candies += candyCount[i];
    }

    cout << candies << endl;

    return 0;
}

