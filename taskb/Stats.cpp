#include"stats.h"
#include<cassert>

using namespace std;
Stats::Stats(vector<int> &v) {
	assert(v.size() > 0);
	int min = v[0];
	int max = v[0];
	double sum = 0.0;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] < min) min = v[i];
		if (v[i] > max) max = v[i];
		sum += static_cast<double>(v[i]);
	}

	minimum = min;
	maximum = max;
	average = sum / v.size();
}

int Stats::getMinimum() {
	return minimum;
}

int Stats::getMaximum() {
	return maximum;
}

double Stats::getAverage() {
	return average;
}
