#include<iostream> 
using namespace std;
void Tree(int a[],int n,int d)
{
	if(a==NULL || n<=0 ||d<0) return ;
	int i,begin=1,end;

	while(d--)
	{
		begin=begin*2;
	}
	end=begin*2;
	if(begin > n)
		printf("EMPTY");
	else
	for(i=begin;i<end;++i)
		cout << a[i] <<" ";
}
int main()
{
	int i,n,d;
	int a[1001];
	cin >> n;
	for(i=1;i<=n;++i)
		cin >> a[i];
	cin >> d;	
	Tree(a,n,d-1);
}
