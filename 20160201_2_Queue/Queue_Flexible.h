#pragma once

#include "QueueNode.h"

class Queue_Flexible
{
public:
	Queue_Flexible();
	~Queue_Flexible();

	void Enqueue(int data);
	int Dequeue();

	void Clear();

	void Print();
	void ReadData(char* inputFileName = nullptr);

protected:

	QueueNode* front = nullptr;
	QueueNode* rear = nullptr;
};

