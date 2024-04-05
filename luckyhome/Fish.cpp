#include "../luckyhome/Fish.h"
#include "../luckyhome/Empty.h"

Fish::Fish() : Thing() {
    setPrice(3);
    setName("fish");
    setDescribe("��ֵ1ö��ң�������Χ�����ݣ�ÿ����һ�����ݣ����4ö���");
}

int Fish::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "bubble" && isNear(i, this->getPosition())) {
            price += 4;
            category[i] = new Empty();
        }
    }
    return price;
}

Fish* Fish::createNewItem() {
    return new Fish();
}

bool Fish::isNear(int position, int fishPosition) {
    // �������λ���Ƿ����ڵ��߼�ʵ��
    // ���� true �� false
    return false;
}

int Fish::getPosition() {
    // �������λ��
    return position;
}