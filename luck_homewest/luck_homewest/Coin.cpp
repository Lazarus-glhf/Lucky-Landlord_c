#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Coin : public CommentItem {
public:
    Coin() {
        this->setPriority(1);
        this->setNumber(4);
        this->setName(4);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("��ֵ1ö���");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};