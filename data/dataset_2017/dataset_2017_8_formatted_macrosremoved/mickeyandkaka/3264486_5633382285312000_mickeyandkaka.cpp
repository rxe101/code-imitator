#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int, int> PII;

vector<string> split(const string &s, char c) {
  vector<string> v;
  stringstream ss(s);
  string x;
  while (getline(ss, x, c))
    v.push_back(x);
  return v;
}
void err(vector<string>::iterator it) {}
template <typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args) {
  cerr << it->substr((*it)[0] == ' ', it->length()) << " = " << a << ", ";
  err(++it, args...);
}
const int INF = 0x3f3f3f3f;

int T;

char s[1111];
int v[1111];
int k;

int main() {

  int cas = 1;
  scanf("%d", &T);

  while (T--) {
    scanf("%s%d", s, &k);
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
      v[i] = (s[i] == '+') ? 0 : 1;
    }

    int ans = 0;
    for (int i = 0; i + k - 1 < len; i++) {
      if (v[i] == 0)
        continue;

      ans++;
      for (int j = i; j <= i + k - 1; j++)
        v[j] ^= 1;
    }

    bool fg = true;
    for (int i = 0; i < len; ++i) {
      if (v[i] == 1)
        fg = false;
    }

    printf("Case #%d: ", cas++);
    if (fg == false)
      printf("IMPOSSIBLE\n");
    else
      printf("%d\n", ans);
  }

  return 0;
}
