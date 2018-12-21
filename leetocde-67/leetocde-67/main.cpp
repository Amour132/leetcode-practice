#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {

		string c;
		int n = a.size();
		int m = b.size();
		int l = max(n, m);
		bool car = 0;
		if (n > m) {
			for (int i = 0; i < n - m; ++i) b.insert(b.begin(), '0');
		}
		else if (n < m) {
			for (int i = 0; i < m - n; ++i) a.insert(a.begin(), '0');
		}
		for (int i = l - 1; i >= 0; --i) {
			int t = 0;
			if (car) t = (a[i] - '0') + (b[i] - '0') + 1;
			else t = (a[i] - '0') + (b[i] - '0');
			if (t == 0) {
				c.insert(c.begin(), '0');
				car = 0;
			}
			else if (t == 1) {
				c.insert(c.begin(), '1');
				car = 0;
			}
			else if (t == 2) {
				c.insert(c.begin(), '0');
				car = 1;
			}
			else if (t == 3) {
				c.insert(c.begin(), '1');
				car = 1;
			}
		}
		if (car) c.insert(c.begin(), '1');
		return c;
	}
};

int main()
{
	Solution s;
	string ret = s.addBinary("110","1011");
	cout << ret << endl;


	return 0;
}