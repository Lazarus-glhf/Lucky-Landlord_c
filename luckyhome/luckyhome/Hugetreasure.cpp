#include "../luckyhome/Hugetreasure.h"

Hugetreasure::Hugetreasure() {
    setPrice(1);
    setName("halftreasure");
    setDescribe("��ֵ100ö���,���Ա�Կ������");
}

int calculateMoney(vector<Thing*>& category) {
    return 1;
}

Hugetreasure* createNewItem() {
    return new Hugetreasure();
}