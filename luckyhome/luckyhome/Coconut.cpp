#include "../luckyhome/Coconut.h"

Coconut::Coconut() {
    setPrice(1);
    setName("coconut");
    setDescribe("��ֵ2���,�����������10���");
}

int Coconut::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "monkey" && isNear(i, this->getPosition())) {
            price += 9;
            category[position] = new Halfcoconut(); // ��Ӱ��Ҭ��
        }
    }
    return price;
}

bool Coconut::isNear(int position1, int position2) {
    // �������λ���Ƿ����ڵ��߼�ʵ��
    // ���� true �� false
    return false;
}

int Coconut::getPosition() {
    // ��ȡλ�õ��߼�ʵ��
    // ����λ��ֵ
    return position;
}

Coconut* Coconut::createNewItem() {
    return new Coconut();
}