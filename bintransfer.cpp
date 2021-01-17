#include<iostream>
using namespace std;
string transfer(unsigned int num)
{
    
    string str="";
    int cc;
    int i=0;
    while(num)
    {
       cc=num%2+'0';
       str.insert(i,1,cc);
       num=num/2;
    }
	return str;
}
int main()
{
    unsigned x;
    while(cin>>x!="EOF")
    {
        cout<<transfer(x)<<endl;
    }
}
