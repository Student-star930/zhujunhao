#include<iostream>
#include"œ‘ æ–≈œ¢.h"
#include"Delay.h"
void patient_show(QNode *node)
{   
	std::cout << "please wait a minute" << std::endl;
	Delay();
	std::cout << node->name << std::endl;
	std::cout << node->number << std::endl;
	
	return;
}