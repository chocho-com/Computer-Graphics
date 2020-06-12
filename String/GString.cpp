#include <iostream>
using namespace std;
#include "GString.h"

GString::GString(const char *str){
	int len=strlen(str);
	this->ps=new char[len+1];
	strcpy(this->ps,str);
}

GString::GString(const GString &cstr){
	if(strlen(this->ps)<strlen(cstr.ps)){
		this->ps=new char[strlen(cstr.ps)+1];
	}
	for(int i=0;cstr.ps[i]!='\0';i++){
		this->ps[i]=cstr.ps[i];
	}
}

int GString::gstrlen(const char *str){
	int  len = 0;
	if(str){
		while (*str++ != '\0'){
			len++;
		}
	}
	return len;
}

GString::~GString(){
	this->ps=NULL;
}

char *GString::gstrcpy(char arr[], const char *str){
	strcpy(arr,str);
	return arr;
}

GString & GString::operator = (const char *str){
	if(strlen(this->ps)<strlen(str)){
		this->ps=new char[strlen(str)+1];
	}
	strcpy(this->ps,str);
	return *this;
}


int GString::size() const{
	int  len = 0,i=0;
	if(this->ps){
		while (this->ps[i++] != '\0'){
			len++;
		}
	}
	return len;
}

const char *GString::c_str() const{	
	const char * gstr=this->ps;
	return gstr;
}
