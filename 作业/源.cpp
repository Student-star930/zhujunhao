#include<iostream>
#include<string>
#include"�˵�.h"
#include"����.h"
#include"��ʾ��Ϣ.h"
using namespace std;

int main() {
	int switch_on = 0;
	string name_;
	double id_;
	
	LinkQueue Q;
	InitQueue(Q);
	
	while (true)
	{
	int flag = 1;
	string key;
		mean();
		cout << "����������Ҫ������" << endl;
		cin >> switch_on;

		switch (switch_on)
		{
		case 1:

			while (flag) {
				cout << "�������������" << endl;
				cin >> name_;
				cout << "��������Ĳ�����" << endl;
				cin >> id_;

				EnQueue(Q, name_, id_);//�Ŷ�--�����ŶӲ��˵Ĳ����ţ����뵽�����ŶӶ�����
				patient_show(Q.rear);

				std::cout << "�Ѽ��뵽�����ŶӶ�����" << std::endl;


				cout << "����������룺�ǣ���" << endl;
				cin >> key;
				if (!key.compare("��"))
					
				{

					flag = 0;
				}
			
			}
				system("pause");
			system("cls");
			break;
		case 2:       //2������--�����ŶӶ�������ǰ��Ĳ��˾��������Ӷ�����ɾ��
			deletefront_QNode(Q);
			std::cout << "�Ѿ�ҽ�����" << std::endl;
			system("pause");
			system("cls");
			break;
		case 3:    //3���鿴�Ŷ�--�Ӷ��׵���β�г����е��ŶӲ��˵Ĳ����š�
			traversal(Q);
			system("pause");
			system("cls");
			break;
		case 4://	4�������Ŷӣ��������ξ���--�Ӷ��׵���β�г����е��ŶӲ��˵Ĳ����ţ����˳�����
			traversal(Q);
			DestoryQueue(Q);

			system("pause");
			return 0;
			break;
		case 5:           //
			system("pause");
			return 0;
			break;
		default:
			system("cls");
			break;
		}
		
	}




	system("pause");
	return 0;
}