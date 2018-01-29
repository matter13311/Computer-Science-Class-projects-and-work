#pragma once
#include<vector>
class Stats {
private:
	int minimum;
	int maximum;
	double average;

public:
	// constructor from a vector
	Stats(std::vector<int> &v);

	// accessors
	int getMinimum();
	int getMaximum();
	double getAverage();
};