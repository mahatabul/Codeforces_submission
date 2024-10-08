#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool p = true;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                p = false;
                break;
            }
        }

        if (p) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
