#include"../luckyhome/Props.h"
using namespace std;
/*
���ȼ� 1 ֻ���ܲ�����һ��߱�������
���ȼ� 2 ��ʹ������Ʒ��ֵ���ǲ���ʧ��
���ȼ� 3 ������������Ʒ��
���ȼ� 4 �ܲ�����Ʒ��*/
class LockRemover_k : public Props {
public:
	LockRemover_k() {
		setName("������");
		setPrice(3);
		setNumber(3);
		setDescribe("��3�������䣬�����䣬����;޴��䱻�������������������䣬�����䣬����;޴�����100%�ļ��ʱ�������");
		setCounter(3);//����ǰ������������3�ξ�ɾ��
		setAccumulator(0);
	};
};