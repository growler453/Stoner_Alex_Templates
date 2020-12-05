// Alex Stoner
// CIS 1202 502
// December 5, 2020

#include<iostream>
#include<cmath>
using namespace std;

template<class T>
T half(T num) {
	return num /= 2.0f;
}

int half(int);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}

int half(int i) {
	return round(static_cast<float>(i) / 2.0f);
}