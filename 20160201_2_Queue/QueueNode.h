#pragma once


class QueueNode
{
public:

	QueueNode(){}
	~QueueNode(){}

	int data = 0;
	QueueNode* next = nullptr;
};

