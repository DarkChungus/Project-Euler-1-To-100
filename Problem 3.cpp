#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long num = 600851475143;

    int ans = 2;
    while (ans < num) {
        while (num % ans < 1) num /= ans;
        ans++;
    }

    cout << ans;

    return 0;
}
