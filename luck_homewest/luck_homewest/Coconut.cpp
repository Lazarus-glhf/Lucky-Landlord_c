#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Coconut : public CommentItem {
public:
    Coconut() {
        this->setPriority(1);
        this->setNumber(3);
        this->setName(3);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("��ֵ2���,�����������12��ң����ұ��2�����Ҭ��");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};