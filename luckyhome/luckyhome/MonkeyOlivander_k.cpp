#include"../luckyhome/Props.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ�ʹ�Ǽ���Ʒ��ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
class MonkeyOlivander_k : public Props {
public:
	MonkeyOlivander_k() {
		setName("���Ӱ�������");
		setPrice(2);
		setNumber(4);
		setDescribe("����㽶��Ҭ�ӻ���Ҭ�ӱ����������������������������󣬴���Ϸ�ĺ��Ӹ������2����� ");
		setCounter(1);
		setAccumulator(0);
	};
};