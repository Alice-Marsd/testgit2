#include<iostream>
using namespace std;

void MiK(int *a,int *b,int n)
{
    if(a==NULL ||n<=0) return;
    
}
int main()
{
    int T,n,k;
    cin >> T;
    int a[10][10];
    for(int i=0;i<n;++i)
	for(int j=0;j<n;++j)
	    cin>>a[i][j];
    MiK(&a,&a,n);
}
