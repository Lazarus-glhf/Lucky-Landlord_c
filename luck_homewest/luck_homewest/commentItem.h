#include<iostream>
#include<string>
#include "Item.h"
using namespace std;
class commentitem : public Item{
private:
	int priority = 0;//���ȼ�Ĭ��Ϊ 0
public:
	commentitem() {}

	commentitem(string name, int number, string description, int priority)
		: Item(name, number, description), priority(priority) {}
	//ͨ������item�еķ�����������Ʒ������
	int getPriority() {
		return priority;
		//����ĳ��Ʒ�����ȼ�ʱ����
	}

	void setPriority(int priority) {
		this->priority = priority;
		//����ĳ��Ʒ�����ȼ�ʱ����
	}


};