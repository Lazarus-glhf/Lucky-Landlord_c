#include "../luckyhome/Flower.h"

Flower::Flower() {
    setPrice(1);
    setName("flower");
    setDescribe("��ֵ1ö���");
}

int calculateMoney(vector<Thing*> category) {
    return 1;
}

Flower* createNewItem() {
    return new Flower();
}