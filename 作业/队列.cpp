#include<iostream>
#include<string>
#include"����.h"
#include"��ʾ��Ϣ.h"


void InitQueue(LinkQueue &Q)//����һ���ն���
{
	QNode* q;
	q = new QNode();
	q->next = nullptr;
	Q.front = q;
	Q.rear = q;
}
void EnQueue(LinkQueue& Q,std:: string name_,double id)//�ڶ�β����Ԫ��
{
	QNode* q;
	q = new QNode();
	q->name = name_;
	q->next = NULL;
	q->number = id;
	Q.rear->next = q;
	Q.rear = q;
}
void deletefront_QNode(LinkQueue& Q)//ɾ����Ԫ���
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

void traversal(LinkQueue& Q)//����
{  
	int number = 0;//ͳ�Ʋ�����
	QNode* temp;
	temp = Q.front->next;
	while (temp!=Q.rear->next)
	{
		patient_show(temp);
		temp = temp->next;

		number++;
}
	std::cout << "��ǰ�Ĳ�����Ϊ" << number << "��" << std::endl;

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