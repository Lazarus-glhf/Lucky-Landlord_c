#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class HollowFruit : public CommentItem {
public:
    HollowFruit() {
        this->setPriority(1);
        this->setNumber(12);
        this->setName(12);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("��ֵ8ö��ҡ������Χ�пգ�ÿ��һ���վͶ������1ö���,�����0����������������������8���");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};