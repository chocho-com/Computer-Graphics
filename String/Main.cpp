#include "GString.h"
#include <iostream>
using namespace std;

int main(){
	char arr[20];
	GString gstr=GString::GString("�Ŵ��ɣ�ÿ��7:30��������ɢ");
	cout << gstr.c_str() << endl;
	cout << gstr.gstrlen("����688") << endl;
	cout << gstr.gstrcpy(arr,"688") << endl;
	gstr="˳��˵ɧ������署����";
	cout << gstr.c_str() << endl;
	gstr.~GString();
	return 0;
}