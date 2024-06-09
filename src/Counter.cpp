#include "../include/Counter.h"

int Counter::getCount() const
{
	return counter;
}

Counter & Counter::operator++()
{
	++counter;
}

