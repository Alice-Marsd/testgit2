#include<iostream>
using namespace std;
bool EVENMOREODD(int a[],int n)
{
	if(a==NULL||n<=0)	return false;
	int i,count=0;
	
	for(i=0;i<n;++i)
	{
		if(a[i]&1) count--;
		else count++;
	}
	return count<0;
}
int main()
{
	int n,i;
	int a[1001];
	cin >> n;
	for(i=0;i<n;++i)
	cin>>a[i];
	if(EVENMOREODD(a,n)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
