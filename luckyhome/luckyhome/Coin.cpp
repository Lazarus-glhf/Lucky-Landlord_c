#include "../luckyhome/Coin.h"

Coin::Coin() {
    setPrice(1);
    setName("coin");
    setDescribe("��ֵ1ö���");
}

int calculateMoney(vector<Thing*> category) {
    return 1;
}

Coin* createNewItem() {
    return new Coin();
}