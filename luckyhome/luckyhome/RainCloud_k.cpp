#include"../luckyhome/Props.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ�ʹ�Ǽ���Ʒ��ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
class RainCloud_k : public Props {
public:
	RainCloud_k() {
		setName("����");
		setPrice(2);
		setNumber(5);
		setDescribe("�����ͻ����ڣ������������������󣬴���Ϸ�е���ͻ��������1ö���");
		setCounter(1);
		setAccumulator(0);
	};
};