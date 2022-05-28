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
		//if the length of digits of n is equal to 1, then this is the answer
		cout << digits[0];
	}
	else if(sz == 2) {
		//if the length of digits of n is equal to 2, then there are 2 cases:
		if(is_sorted(digits.begin(), digits.end())) {
			//first case: sorted
			//we have no choice but to swap the digits so the answer will be the larger digit
			cout << *max_element(digits.begin(), digits.end());
		}
		else {
			//second case: unsorted
			//swap the digits and the remaining digit will be the smaller one
			cout << *min_element(digits.begin(), digits.end());
		}
	}
	else {
		//if the length of digits of n is greater than 2, then it's always possible to get the smallest digit
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
