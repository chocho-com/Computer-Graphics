#include "GString.h"
#include <iostream>
using namespace std;

int main(){
	char arr[20];
	GString gstr=GString::GString("张大仙，每晚7:30，不见不散");
	cout << gstr.c_str() << endl;
	cout << gstr.gstrlen("虎牙688") << endl;
	cout << gstr.gstrcpy(arr,"688") << endl;
	gstr="顺风说骚话，逆风讲道理";
	cout << gstr.c_str() << endl;
	gstr.~GString();
	return 0;
}