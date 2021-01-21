#include<iostream>
using namespace std;
struct S
{
	int x;
	int y;
}arr[100];
S FindMin()
{
	
}
int main()
{
	int n,i;
	cin >> n;
	for(i=0;i<n;++i)
		cin >>arr[i].x >>arr[i].y;
	S s=FindMin(arr,n);
}
