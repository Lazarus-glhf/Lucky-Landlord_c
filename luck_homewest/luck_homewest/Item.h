#include<iostream>
#include<string>
#include "forms.h"
using namespace std;
class Item {
protected:
    const int PANEL_SIZE = 20;//��ʾһ���̶�������С
    int number = 0;//��ʾ��Ʒ�ı��
    string name;//��ʾ��Ʒ������
    string description = "null";//�洢��Ʒ������

public:
    Item() {}

    Item(string name, int number, string description) : name(goods[number]), number(number), description(description) {}
    //���ں������ʱֱ�Ӵ���
    string getName() {
        return goods[number];
    }

    void setName(string name) {
        this->name = name;
    }

    string getDescription() {
        return description;
    }

    void setDescription(string description) {
        this->description = description;
    }

    /*virtual int calculateMoney(int category) {
        return 0;
    }

    virtual Item* createNewItem() {
        return new Item();
    }*/
};
