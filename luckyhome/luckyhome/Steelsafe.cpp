#include "../luckyhome/Steelsafe.h"

Steelsafe::Steelsafe() {
    setPrice(1);
    setName("steelsafe");
    setDescribe("��ֵ30ö���,���Ա�Կ������");
}

int calculateMoney(vector<Thing*>& category) {
    return 1;
}

Steelsafe* createNewItem() {
    return new Steelsafe();
}