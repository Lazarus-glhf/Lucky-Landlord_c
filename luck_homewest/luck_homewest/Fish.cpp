#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Fish : public CommentItem {
public:
    Fish() {
        this->setPriority(3);
        this->setNumber(7);
        this->setName(7);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("��ֵ1ö��ң�������Χ�����ݣ�ÿ����һ�����ݣ����15ö���");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};