#include "../luckyhome/Halfcoconut.h"

Halfcoconut::Halfcoconut() : Thing() {
    setPrice(1);
    setName("halfCoconut");
    setDescribe("��ֵ1ö���,�����������4���");
}

int Halfcoconut::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            price += 9;
            category[position] = new Empty(); // ��������
        }
    }
    return price;
}

Halfcoconut* Halfcoconut::createNewItem() {
    return new Halfcoconut();
}

bool Halfcoconut::isNear(int position1, int position2) {
    // �������λ���Ƿ����ڵ��߼�ʵ��
    // ���� true �� false
    return false;
}

int Halfcoconut::getPosition() {
    // ��ȡλ�õ��߼�ʵ��
    // ����λ��ֵ
    return position;
}