#include "../luckyhome/Lockbox.h"

Lockbox::Lockbox() {
    setPrice(1);
    setName("lockbox");
    setDescribe("��ֵ15ö���,���Ա�Կ������");
}

int calculateMoney(vector<Thing*>& category) {
    return 1;
}

Lockbox* createNewItem() {
    return new Lockbox();
}