#pragma once


class Queue_Fix
{
public:
	Queue_Fix();
	~Queue_Fix();

	void Enqueue(int data);
	int Dequeue();

	bool IsEmpty();
	bool IsFull();

	void Print();
	void ReadData(char* inputFileName = nullptr);

protected:

	int front = 0;
	int rear = 0;

	static const int QUEUE_SIZE = 5;
	int queue[QUEUE_SIZE];
};

