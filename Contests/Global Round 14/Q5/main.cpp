// ––– CodeForces Global Round 14: Problem E –––

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
  pair<int, int> arr[3];
  for (int i = 0; i < 3; i++) {
    cin >> arr[i].f >> arr[i].s;
  }

  for (int i = 0; i < 3; i++) {
    cout << arr[i].f << ' ' << arr[i].s << endl;
  }
}