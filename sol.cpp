#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	vector<int> digits;
	while(n > 0) {
		digits.push_back(n % 10);
		n /= 10;
	}
	reverse(digits.begin(), digits.end());
	int sz = digits.size();
	if(sz == 1) {
		cout << digits[0];
	}
	else if(sz == 2) {
		if(is_sorted(digits.begin(), digits.end())) {
			cout << *max_element(digits.begin(), digits.end());
		}
		else {
			cout << *min_element(digits.begin(), digits.end());
		}
	}
	else {
		cout << *min_element(digits.begin(), digits.end());
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 0; tc < T; tc++) {
		test_case();
	}
}
