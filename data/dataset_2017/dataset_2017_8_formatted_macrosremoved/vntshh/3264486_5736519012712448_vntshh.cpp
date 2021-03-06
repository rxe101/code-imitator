#include <bits/stdc++.h>
using namespace std;

using namespace std;
typedef long double ldb;
typedef long long lld;
lld powm(lld base, lld exp, lld mod = 1000000007) {
  lld ans = 1;
  while (exp) {
    if (exp & 1)
      ans = (ans * base) % mod;
    exp >>= 1, base = (base * base) % mod;
  }
  return ans;
}
typedef vector<lld> vlld;
typedef pair<lld, lld> plld;
typedef map<lld, lld> mlld;
typedef set<lld> slld;

int main() {
  freopen("done1.in", "r", stdin);
  freopen("done1.out", "w", stdout);
  lld t, k, siz, cnt = 0;
  string x;
  cin >> t;
  for (lld tt = 1; tt < t + 1; tt++) {
    cin >> x >> k, siz = lld((x).size()), cnt = 0;
    for (lld i = 0; i < siz - k + 1; i++)
      if (x[i] == '-') {
        x[i] = '+', cnt++;
        for (lld j = i + 1; j < i + k; j++)
          x[j] = ((x[j] == '-') ? '+' : '-');
      }
    for (lld i = 0; i < siz; i++)
      if (x[i] == '-') {
        cnt = -1;
        break;
      }
    cout << "Case #" << tt << ": ";
    if (cnt == -1)
      cout << "IMPOSSIBLE\n";
    else
      cout << cnt << endl;
  }
  return 0;
}
