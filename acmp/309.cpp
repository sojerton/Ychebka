#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main() {
	int res = 0, k, n = 0, m, inverse;
	string str, sm = "1", snum, s_inverse;
	getline(cin, str);
	n = str.length();
	stringstream ss;
	while (ss) {
		ss << str;
		ss >> k;
		//n++;
	}
	for (int i = 0; i<n - 1; i++) {
		sm += "0";
		if (to_string(k) == sm)sm.erase(sm.size() - 1);
	}
	stringstream ssm;
	while (ssm) {
		ssm << sm;
		ssm >> m;
	}
	for (int num = m; num<k; num++) {
		snum = to_string(num);
		n = snum.length();
		s_inverse = snum[n - 1];
		for (int j = n - 2; j >= 0; j--) {
			s_inverse += snum[j];
		}
		stringstream ssr;
		while (ssr) {
			ssr << s_inverse;
			ssr >> inverse;
		}
		if (num + inverse == k) {
			res++;
		}
	}
	cout << res;
	return 0;
}