#pragma once
#ifndef _THING_H_
#define _THING_H_
#include<map>
#include<string>
#include<iostream>
using namespace std;


//������Ʒ����
class Thing {

protected:
	string name;//��Ʒ������
	int value;//��Ʒ�ļ�ֵ
	int price;//��Ʒ�����ȼ�
	int number;//��Ʒ�ı��
	string describe;//��Ʒ������
	int counter;//��ʱ��
	int counter_now = 0;//��ǰ��ʱ��
	int Accumulator;//������
	int Accumulator_now = 0;//��ǰ������
	int positions;

public:

	Thing();
	virtual ~Thing();
	string getName();
	void setName(string name);

	int getValue();
	void setValue(int value);

	int getPrice();
	void setPrice(int price);

	int getNumber();
	void setNumber(int number);

	string getDescribe();
	void setDescribe(string describe);

	int getCounter();
	void setCounter(int counter);

	int getAccumulator();
	void setAccumulator(int Accumulator);

	int getPosition();
	void setPosition(int position);
};


#endif