#include<iostream>
using namespace std;
int numWays(int n)
{
	int i;
	int a=1,b=1,sum;
	for(int i = 0; i < n; i++)
	{
        sum = (a + b) % 1000000007;
        a = b;
        b = sum;
        }
        return a;
}
int main()
{
	int x;
	while(1)
	{
		cin >> x;
		cout <<numWays(x)<<endl;
	}
	
}
