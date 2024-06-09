#pragma once

#include "string"
#include <iosfwd>
#include <ostream>

class Student
{
private:
	int id;
	std::string name;
	std::string surname;
	double average;
	static int currentId;

public:
	Student(std::string name, std::string surname);
	~Student();

	std::string getName() const;
	std::string getSurname() const;
	int getId() const;
	double getAverage() const;
	void setAverage(double numAverage);
	
	friend std::ostream& operator<<(std::ostream& os, const Student& student);
};