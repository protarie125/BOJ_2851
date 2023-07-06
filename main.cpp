#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto now = int{ 0 };
	for (auto i = 0; i < 10; ++i) {
		int x;
		cin >> x;
		if (abs((now + x) - 100) <= abs(now - 100)) {
			now += x;
		}
		else {
			break;
		}
	}

	cout << now;

	return 0;
}