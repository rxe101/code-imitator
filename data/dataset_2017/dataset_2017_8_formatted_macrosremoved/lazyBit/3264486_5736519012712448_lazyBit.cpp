#include <bitset>
#include <deque>
#include <iomanip>
#include <iostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>

#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <string>

#include <algorithm>
#include <functional>
#include <list>
#include <map>
#include <numeric>
#include <utility>
#include <vector>
// #include <random>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;

typedef long long LL;           // NOTES:int64
typedef unsigned long long ULL; // NOTES:uint64
typedef unsigned uint;

const double pi = acos(-1.0); // NOTES:pi
const double eps = 1e-11;     // NOTES:eps
const int MAXI = 0x7fffffff;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
const char dz[] = "SENW";
struct debugger {
  template <typename T> debugger &operator,(const T &v) {
    cerr << v << " ";
    return *this;
  }
} dbg;

void debugarr(int *arr, int n) {
  cout << "[";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}

char str[50];

bool containszero(int l) {
  int i = 0;
  while (str[i] == '0') {
    i++;
  }
  while (i < l) {
    if (str[i] == '0')
      return true;
    i++;
  }
  return false;
}
int main() {
  // #ifndef ONLINE_JUDGE
  //        input;
  //        output;
  //    #endif
  int n, i, j, k, l, m, t, s = 0, d;
  scanf("%d", &t);
  ;
  int c = 1;
  while (t--) {
    cin >> str;
    cin >> k;
    int ans = 0;
    l = strlen(str);
    for (i = 0; i + k - 1 < l; i++) {
      if (str[i] == '+')
        continue;
      s = 0;
      for (j = i; s < k; s++, j++) {
        if (str[j] == '-')
          str[j] = '+';
        else
          str[j] = '-';
      }
      ans++;
    }
    for (i = 0; i < l; i++) {
      if (str[i] == '-')
        break;
    }
    if (i < l) {
      printf("Case #%d: IMPOSSIBLE\n", c++);
    } else {
      printf("Case #%d: %d\n", c++, ans);
    }
  }
  return (0);
}
