#include "../include/Student.h"
#include <iosfwd>
#include <string>

int Student::currentId = 0;

Student::Student(std::string name, std::string surname)
	: name(name), surname(surname), average(0.0)
{
	id = ++currentId;
}

Student::~Student(){}

int Student::getId()const
{
	return id;
}

std::string Student::getName() const
{
	return name;
}

std::string Student::getSurname() const
{
	return surname;
}

double Student::getAverage() const
{
	return average;
}

void Student::setAverage(double numAverage)
{
	this->average = numAverage;
}


std::ostream & operator<<(std::ostream & os, const Student & st)
{
	os << "ID: " << st.id << ", ";
	os << "Имя: " << st.name << ", ";
	os << "Фамилия: " << st.surname << ", ";
	os << "Средний бал: " << st.average;
	return os;
}
