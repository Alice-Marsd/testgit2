#include<iostream>
using namespace std;
int transfer(char c)
{
	int num=0;
	switch(c)
    {
        case 'I':num=1;break;
        case 'V':num=5;break;
        case 'X':num=10;break;
        case 'L':num=50;break;
        case 'C':num=100;break;
        case 'D':num=500;break;
        case 'M':num=1000;break;
        default: num=0;
    }
    return num;
 } 
int romanToInt(string s) {
        int num=0,num1=0,result=0;
        
        cout<<"i  "<<"s[i]  "<<"num  "<<"num1  "<<"result  "<<endl; 
        for(int i=0;i<=s.length();++i)
        {
            num=transfer(s[i]);
           
            if(num < transfer(s[i+1]))//�����ִ���ǰ�ߵģ���ôǰ�ߵ�����ȡ�����
            {	
                num=num*(-1);
            }
            result+=num;
            cout<<i<<"   "<<s[i]<<"     "<<num  <<"     "<<num1  <<"      "<<result <<endl;
        }
        return result;
    }
int main()
{
	string str="IV";//"MCMXCIV";
	cout << romanToInt(str) <<endl;
}
/*****
ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ�������������� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��ͬ���أ����� 9 ��ʾΪ IX���������Ĺ���ֻ�������������������

    I ���Է��� V (5) �� X (10) ����ߣ�����ʾ 4 �� 9��
    X ���Է��� L (50) �� C (100) ����ߣ�����ʾ 40 �� 90�� 
    C ���Է��� D (500) �� M (1000) ����ߣ�����ʾ 400 �� 900��

����һ���������֣�����ת��������������ȷ���� 1 �� 3999 �ķ�Χ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/roman-to-integer
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

************************************************************************
ע�����⣺���С������ֻ����һ�����ʣ�ֻ������ߺ��ұߵ���������ϵ
 
**/
