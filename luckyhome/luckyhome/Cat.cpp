#include "../luckyhome/Cat.h"

Cat::Cat(){
    setPrice(3);
    setName("cat");
    setDescribe("��ֵ1ö��ң�������Χ��ţ�̣�ÿ����һ��ţ�̣����9ö���");

}

int Cat::calculateMoney(std::vector<Thing*> category) {
    int price = 1;
    for (int i = 0; i < 20; i++) {
        if (category[i]->getName() == "milk" && isNear(i, this->getPosition())) {
            price += 9;
            category[i] = new Empty(); // ����ţ��
        }
    }
    return price;
}

Cat* Cat::createNewItem() {
    return new Cat();
}

bool Cat::isNear(int position1, int position2) {
    //int row = position.getRow();//������
    //int column = position.getColumn();
    //int indexRow = index / 5;
    //int indexColumn = index % 5;
    //return (abs(row - indexRow) <= 1 && abs(column - indexColumn) <= 1);
    return 0;
}

int Cat::getPosition() {
    // ��ȡλ�õ��߼�ʵ��
    // ����λ��ֵ
    return position;
}