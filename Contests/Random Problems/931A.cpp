// ––– CodeForces Contest 931, Problem A: "Friends Meeting" –––

#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define mp make_pair
#define pb push_back
using str = string;
using ll = long long;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;

int main()
{
  cin.tie(0)->sync_with_stdio(0);

  int a, b;
  cin >> a >> b;

  int c = abs(b - a);
  int d = c / 2;
  int e = c - d;
  int ans = d * (d + 1) / 2 + e * (e + 1) / 2;
  cout << ans << '\n';
}
