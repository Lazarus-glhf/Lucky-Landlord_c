#pragma once
#ifndef _ESSENCE_H_
#define _ESSENCE_H_
#include<map>
#include<string>
#include<iostream>
using namespace std;
//���ھ�������
class Essence {
protected:
	string name;
	int price;
	string describe;

public:
	int getName();
	void setName(string name);

	int getPrice();
	void setPrice(int price);

	int getDescribe();
	void setDescribe(string describe);

};

#endif
