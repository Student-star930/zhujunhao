#include<iostream>
#include<string>
#include"队列.h"
#include"显示信息.h"


void InitQueue(LinkQueue &Q)//创建一个空队列
{
	QNode* q;
	q = new QNode();
	q->next = nullptr;
	Q.front = q;
	Q.rear = q;
}
void EnQueue(LinkQueue& Q,std:: string name_,double id)//在队尾插入元素
{
	QNode* q;
	q = new QNode();
	q->name = name_;
	q->next = NULL;
	q->number = id;
	Q.rear->next = q;
	Q.rear = q;
}
void deletefront_QNode(LinkQueue& Q)//删除首元结点
{

	QNode* temp;
	temp = Q.front->next;
	
	patient_show(Q.front->next);
	Q.front->next = temp->next;
	if (Q.rear == temp)
	{
		Q.front = Q.rear;
	}
	delete temp;
}

void traversal(LinkQueue& Q)//遍历
{  
	int number = 0;//统计病人数
	QNode* temp;
	temp = Q.front->next;
	while (temp!=Q.rear->next)
	{
		patient_show(temp);
		temp = temp->next;

		number++;
}
	std::cout << "当前的病人数为" << number << "人" << std::endl;

}
void DestoryQueue(LinkQueue& Q)
{
	/*QNode* temp;*/
while (Q.front)
	{
	Q.rear=Q.front->next;
	delete Q.front;
	Q.front = Q.rear;
	/*	Q.front = Q.front->next;*/

	}


}