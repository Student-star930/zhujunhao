#pragma once
#include <string>
struct	QNode
{
	std::string name;
	double number;
	QNode* next=NULL;
};
struct LinkQueue
{
	QNode* front;
	QNode* rear;
};
void InitQueue(LinkQueue& Q);//创建一个空队列
void EnQueue(LinkQueue& Q,std::string name, double id);
void deletefront_QNode(LinkQueue& Q);
void traversal(LinkQueue& Q);
void DestoryQueue(LinkQueue& Q);