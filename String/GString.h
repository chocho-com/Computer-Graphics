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
	//实现构造函数赋值
	GString(const char *str);
	//实现拷贝构造函数赋值
	GString(const GString &cstr);
	//实现析构函数释放内存
	~GString();
	//查看字符串指针
	const char *c_str() const;
	//查看字符串长度
	int size() const;
	//获得字符串长度
	int gstrlen(const char *str);
	//实现字符串拷贝
	char *gstrcpy(char arr[], const char *str);
	//实现等号赋值
	GString &operator = (const char *str);
};
#endif