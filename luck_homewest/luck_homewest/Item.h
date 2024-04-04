#ifndef ITEM_H
#define ITEM_H

#include<iostream>
#include <string>
#include "forms.h"
using namespace std;

class Item {
protected:
    const int PANEL_SIZE = 20;
    int number = 0; //Ĭ�ϱ��Ϊ0
    string name; //����Ʒ������
    string description = "null"; //������Ʒ������

public:
    Item();
    Item(string name, int number, string description);//��Ʒ������
    
    int getNumber();//���ʷ��ص�ǰ��Ʒ��number���
    void setNumber(int number); //���õ�ǰ��Ʒ�ı��


    string getName();//�������������֪����Ʒ�ı�ŵ�������ҵ���Ʒ��Ӧ����������
    void setName(int number); //��������������õ�ǰ��Ʒ�����ƣ��о�ûʲô�ã�

    string getDescription(); //���ص�ǰ��Ʒ������
    void setDescription(string description); //�������õ�ǰ��Ʒ������

    // ...
};

#endif