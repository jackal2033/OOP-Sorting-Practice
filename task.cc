/*
Programmer: Chase Pranga
Purpose: become more familiar with OOP Concepts and Fundamentals
	- familiarize with various sorting algorithms

*/

#include "task.h"

int Task::getValue() const
{
	return value;
}

int Task::getPriority() const
{
	return priority;
}

void Task::setValue(int value)
{
	this->value = value;
}

void Task::setPriority(int priority)
{
	this->priority = priority;
}
