#ifndef _GSTRING_H
#define _GSTRING_H
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;

class GString{
private:
	char *ps;
public:
	//ʵ�ֹ��캯����ֵ
	GString(const char *str);
	//ʵ�ֿ������캯����ֵ
	GString(const GString &cstr);
	//ʵ�����������ͷ��ڴ�
	~GString();
	//�鿴�ַ���ָ��
	const char *c_str() const;
	//�鿴�ַ�������
	int size() const;
	//����ַ�������
	int gstrlen(const char *str);
	//ʵ���ַ�������
	char *gstrcpy(char arr[], const char *str);
	//ʵ�ֵȺŸ�ֵ
	GString &operator = (const char *str);
};
#endif