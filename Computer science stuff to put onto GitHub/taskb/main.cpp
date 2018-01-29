#include"print_all_stats.h"
#include<vector>
#include"stats.h"
#include<iostream>


using namespace std;

int main() {
	int n = 15;
	// make a vector of all squares 1^2, 2^2, ... n^2
	vector<int> v;
	for (int i = 1; i < n; i++) {
		v.push_back(i*i);
	}

	// print the vector out
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// get the vector statistics
	Stats st(v);

	// print it out
	print_all_stats(st);
}
