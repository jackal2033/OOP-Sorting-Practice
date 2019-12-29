#include "sort.h"

int main()
{
	vector<Task> taskVector;
	Task tmpTask(0,0);
	srand(time(0));
	for(int i = 0; i < 30; i++)
	{
		tmpTask.setPriority(rand() % 100);
		tmpTask.setValue(rand() % 100);
		taskVector.push_back(tmpTask);
	}
	printVector(taskVector);

	return 2033;
}

void check(const vector<Task>& taskVec, char order)
{
	cerr<<"Starting check:"<<endl;
	for (auto task = taskVec.begin(); task != taskVec.end() - 1; task++)
	{
		if(order == 'a')
		{
			if((*task).getValue() < (*(task + 1)).getValue())
			{
				cerr<<"Not sorted"<<endl;
				exit(-1);
			}
		}
		else
		{
			if((*task).getValue() > (*(task + 1)).getValue())
			{
				cerr<<"Not sorted"<<endl;
				exit(-1);
			}
		}
	}
}

void printVector(const vector<Task>& taskVec)
{
	for(auto it = taskVec.begin(); it != taskVec.end(); it++)
	{
		cout<< (*it).getValue() << ", "
			<<(*it).getPriority() << endl;
	}
}
