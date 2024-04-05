#include "../luckyhome/Bee.h"

Bee::Bee(){
    setPrice(2);
    setName("bee");
    setDescribe("��ֵ1ö��ң������Χ�л���ÿ�仨����1ö���");
}

int Bee::calculateMoney(std::vector<Thing*> category) {
    int value = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "flower" && isNear(i, position)) {
            value += 2;
        }
    }
    return value;
}

bool Bee::isNear(int index, int position) {
    // ��������ʵ���ж���Ʒ�Ƿ����ڵ��߼�
    // ������ڣ�����true�����򷵻�false
    return false;
}

Bee* Bee::createNewItem() {
    return new Bee();
}