#ifndef COMMENTITEM_H
#define COMMENTITEM_H

#include "Item.h"
using namespace std;
class CommentItem : public Item {
protected:
	int priority = 0;//��Ʒ�����ȼ�

public:
	CommentItem();
	CommentItem(string name, int number, string description, int priority);

	int getPriority(); //�������ʵõ���ǰ��Ʒ�����ȼ�
	void setPriority(int priority); //�������õ�ǰ��Ʒ�����ȼ�
};

#endif