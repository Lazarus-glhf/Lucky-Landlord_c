#include"../luckyhome/Props.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
class BlackPepper_k : public Props {
public:
	BlackPepper_k() {
		setName("�ں���");
		setPrice(1);
		setNumber(1);
		setDescribe("ÿ����һ�����ţ�����10ö��ҡ���֮����������");
		setCounter(1);//����ǰ�����ǲ�ɾ������Զ���ڵ�
		setAccumulator(0);
	};
};