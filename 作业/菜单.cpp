#include<string>
#include <iostream>
#include"菜单.h"

void mean() {
	std::cout << "*********************************	*" << std::endl;
	std::cout<< "	1：排队--输人排队病人的病历号，加入到病人排队队列中"<<std::endl;
	std::cout << "	2：就诊--病人排队队列中最前面的病人就诊，并将其从队列中删除" << std::endl;
	std::cout << "	3：查看排队--从队首到队尾列出所有的排队病人的病历号" << std::endl;
	std::cout << "	4：不再排队，余下依次就诊--从队首到队尾列出所有的排队病人的病历号，并退出运行" << std::endl;
	std::cout << "	5：下班--退出运行" << std::endl;



}