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

	selectionSort(taskVector);
	check(taskVector, 'a');
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
			if((*task).getValue() > (*(task + 1)).getValue())
			{
				cerr<<"Not sorted"<<endl;
				return;
			}
		}
		else
		{
			if((*task).getValue() < (*(task + 1)).getValue())
			{
				cerr<<"Not sorted"<<endl;
				return;
			}
		}
	}

	cerr<<"Vector is properly sorted"<< endl;
}

void printVector(const vector<Task>& taskVec)
{
	for(auto it = taskVec.begin(); it != taskVec.end(); it++)
	{
		cout<< (*it).getValue() << ", "
			<<(*it).getPriority() << endl;
	}
}

void selectionSort(vector<Task>& taskVec)
{
	auto smallest = taskVec.begin();

	for (auto it = taskVec.begin(); it != taskVec.end() -1; it++)
	{
		smallest = it;
		for(auto it2 = it + 1; it2 != taskVec.end(); it2++)
		{
			if((*it2).getValue() < (*smallest).getValue())
				smallest = it2;
		}
		iter_swap(it, smallest);
	}
}
