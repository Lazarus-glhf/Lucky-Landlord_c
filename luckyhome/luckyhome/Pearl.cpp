#include "../luckyhome/Pearl.h"

Pearl::Pearl() {
    setPrice(1);
    setName("pearl");
    setDescribe("��ֵ1ö���");
}

int calculateMoney(vector<Thing*>& category) {
    return 1;
}

Pearl* createNewItem() {
    return new Pearl();
}