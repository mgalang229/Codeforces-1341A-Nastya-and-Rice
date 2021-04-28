#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		// calculate the starting point of sum of numbers
		int left = n * (a - b);
		// calculate the end point of the sum of the numbers
		int right = n * (a + b);
		if (right < c - d || c + d < left) {
			// check if the 'right' value is STRICTLY less than the starting point [c - d, c + d]
			// or the ('c' + 'd') (end point) is less than 'left' value (sum of the first value)
			// if it's true, then print "No"
			cout << "No";
		} else {
			// otherwise, print "Yes"
			cout << "Yes";
		}
		cout << '\n';
	}
	return 0;
}
