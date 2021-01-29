#include<iostream>
using namespace std;
bool scanUnsignedInteger(const char** str)
{
	const char* before=*str;
	while(**str!='\0' && **str>='0' && **str<='9')
	 ++(*str);
	 return *str>before;
}
bool scanInteger(const  char** str)
{
	if(**str=='+' || **str=='-')
		++(*str);
	return scanUnsignedInteger(str);
}
bool isNumber(const char* str) 
{
	if(str==NULL) return false;
	bool numeric = scanInteger(&str);
	
	//
	if(*str=='.')
	{
		++str;
		numeric=scanUnsignedInteger(&str)||numeric;
	}
	if(*str=='e' ||*str=='E')
	{
		++str;
		numeric=numeric && scanInteger(&str);
	}

	return numeric&&*str=='\0';
}
int main()
{
	string str;
	while(1)
	{
		cin >> str;
		if(isNumber(str.data())) cout <<"Yes"<<endl;
		else cout << "No" << endl;
	}
	
 } 
