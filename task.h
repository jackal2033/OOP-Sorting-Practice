#ifndef TASK_H
#define TASK_H

using namespace std;

/*
Task object
2 values, and 2 accessor methods

*/
class Task
{
private:
	int priority,
		value;
public:
	int getPriority() const;
	int getValue() const;

	void setPriority(int priority);
	void setValue(int value);
	Task(int p, int v) : priority(p), value(v){}
};

#endif
