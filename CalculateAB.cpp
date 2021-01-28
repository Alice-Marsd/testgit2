#include<iostream>
//#include<>
using namespace std;
int calculate(string s) 
{
    int i;
    int x=1,y=0;
    for(i=0;i<s.length();++i)
    {
    	switch(s[i])
    	{
    		case 'A':
    			x=2*x+y;
				break;
    		case 'B':
				y=2*y+x;
				break;
    		default :;
		}
	}
       return x+y; 
}
int main()
{
	cout <<calculate("AB"); 
}
