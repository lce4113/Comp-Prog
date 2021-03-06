// ––– "Qpwoeirut And Grid" - Fastest TLE Solution O(n^2) –––

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    ll pfs_a[n + 1], pfs_b[n + 1], half_sum = 0;
    vector<ll> pfs_a(1,0), pfs_b(1,0);
    pfs_a[0] = 0, pfs_b[0] = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      pfs_a[i + 1] = pfs_a[i] + x;
      half_sum += x;
    }
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      pfs_b[i + 1] = pfs_b[i] + x;
      half_sum += x;
    }
    half_sum /= 2;

    int ans = 0;
    for (int i = 0; i <= n; i++) {
      for (int k = 0; k <= n; k++) {
        if (half_sum == pfs_a[i] + pfs_b[k]) {
          ans++;
        }
      }
    }

    cout << ans << '\n';
  }
}
