#include "../luckyhome/Bubble.h"

Bubble::Bubble() {
    setPrice(1);
    setName("bubble");
    setDescribe("��ֵ2ö���");
}

int Bubble::calculateMoney(vector<Thing*> category) {
    int price = 2;
    return price;
}

Bubble* Bubble::createNewItem() {
    return new Bubble();
}