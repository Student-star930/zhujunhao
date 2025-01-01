#include<iostream>
#include<string>
#include"菜单.h"
#include"队列.h"
#include"显示信息.h"
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
		cout << "请输入你需要的数字" << endl;
		cin >> switch_on;

		switch (switch_on)
		{
		case 1:

			while (flag) {
				cout << "请输入你的名字" << endl;
				cin >> name_;
				cout << "请输入你的病历号" << endl;
				cin >> id_;

				EnQueue(Q, name_, id_);//排队--输人排队病人的病历号，加入到病人排队队列中
				patient_show(Q.rear);

				std::cout << "已加入到病人排队队列中" << std::endl;


				cout << "完成了吗？输入：是？否" << endl;
				cin >> key;
				if (!key.compare("是"))
					
				{

					flag = 0;
				}
			
			}
				system("pause");
			system("cls");
			break;
		case 2:       //2：就诊--病人排队队列中最前面的病人就诊，并将其从队列中删除
			deletefront_QNode(Q);
			std::cout << "已就医完成了" << std::endl;
			system("pause");
			system("cls");
			break;
		case 3:    //3：查看排队--从队首到队尾列出所有的排队病人的病历号。
			traversal(Q);
			system("pause");
			system("cls");
			break;
		case 4://	4：不再排队，余下依次就诊--从队首到队尾列出所有的排队病人的病历号，并退出运行
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