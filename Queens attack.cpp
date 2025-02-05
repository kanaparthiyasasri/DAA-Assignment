#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

// DID YOU FIX GLOBAL STATE

typedef long long ll;
typedef pair<int, int> pii;

const double PI = 2 * acos(0);
const int MOD = 1000000007;
const int HASH = 3137;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void solve() {
  int n;
  int k;
  scanf("%d%d", &n, &k);
  int x, y;
  scanf("%d%d", &x, &y);
  set<pii> bad;
  while(k--) {
    int xx, yy;
    scanf("%d%d", &xx, &yy);
    bad.insert(pii(xx, yy));
  }
  set<pii> ret;
  for(int k = 0; k < 8; k++) {
    int nx = x + dx[k];
    int ny = y + dy[k];
    while(true) {
      if(min(nx, ny) < 1 || max(nx, ny) > n || bad.count(pii(nx, ny))) {
        break;
      }
      ret.insert(pii(nx, ny));
      nx += dx[k];
      ny += dy[k];
    }
  }
  printf("%d\n", ret.size());
}

int main() {
  solve();
  return 0;
}

