#pragma once

using namespace std;

class Counter
{
	int counter;

	Counter(int count) : counter(count) {}
	~Counter() {}

	int getCount() const;

	Counter& operator++();
};


