#pragma once
#include<iostream>
#include<string>
#include "commentitem.h"
using namespace std;
class Key : public CommentItem {
public:
    Key() {
        this->setPriority(3);
        this->setNumber(13);
        this->setName(13);
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bubble.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("��ֵ1ö���,�����������ڵĲƱ���");
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 2;
        return price;
    }

    Bubble* createNewItem() override {
        return new Bubble();
    }*/
};