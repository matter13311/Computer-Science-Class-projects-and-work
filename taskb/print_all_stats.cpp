#include<iostream>
#include"stats.h"
#include "print_all_stats.h"

using namespace std;
void print_all_stats(Stats& stats) {
	cout << "Minimum = " << stats.getMinimum() << endl;
	cout << "Maximum = " << stats.getMaximum() << endl;
	cout << "Average = " << stats.getAverage() << endl;
}