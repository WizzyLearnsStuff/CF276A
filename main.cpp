#include<iostream>

using namespace std;

int main() {
	int n, k; 
	cin >> n >> k;

	int f;
	int fi, ti;
	cin >> fi >> ti;
	n--;
	f = min(fi, fi + k - ti);

	for (int i = 0; i < n; i++) {
		cin >> fi >> ti;
		f = max(f, min(fi, fi + k - ti));
	}

	cout << f;
}
