#include"../luckyhome/Props.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
class GreenPepper_k : public Props {
public:
	GreenPepper_k() {
		setName("�ཷ");
		setPrice(1);
		setNumber(2);
		setDescribe("���������3����ͬ�ҷǿ�λ�ķ���ÿ�ܶ���ÿ����ת֮�����30ö��ҡ���֮���������� ");
		setCounter(1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
		setAccumulator(0);
	};
};