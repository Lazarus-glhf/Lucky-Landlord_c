#pragma once
#include "commentitem.h"
#include<iostream>
#include<string>
#include "forms.h"
#include "Item.h"

class Bee : public CommentItem {
public:
    Bee() {
        this->setPriority(2); //�۷�����ȼ���2
        this->setNumber(0); //�۷���forms�еı����0
        this->setName(0); //ͨ���۷�ı����form�����ҵ��������Ĳ���ֵ��this
        //this->setIcon(new QPushButton(QIcon("images/commonItems/bee.png")));
        //this->getIcon()->setFocusPolicy(Qt::NoFocus);
        this->setDescription("��ֵ1ö��ң������Χ�л���ÿ�仨����1ö���"); //�����۷������
    }

    /*int calculateMoney(ItemCategory category) override {
        int price = 1;
        for (int i = 0; i < 20; i++) {
            if (category.getItemCategory().at(i).getName() == "flower" && this->isNear(i, this->getPosition())) {
                price += 2;
            }
        }
        return price;
    }

    Bee* createNewItem() override {
        return new Bee();
    }*/
};