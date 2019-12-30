#ifndef SORT_H
#define SORT_H
using namespace std;

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>


#include "sort.h"
#include "task.h"

void check(const vector<Task>& taskVec, char order);
void printVector(const vector<Task>& taskVec);
void selectionSort(vector<Task>& taskVec);

#endif
