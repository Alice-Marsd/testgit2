#include<iostream>
using namespace std;
bool exit(int a[],int n,int x)
{
	int i;
	bool exit=false;
	for(i=0;i<n;++i)
	 	if(a[i]==x)
	 	{
	 		exit = true;
	 		break;
		 }
	return exit;
}
int main()
{
	int i,n,m,x;
	int a[101];
	cin >> n;
	for(i=0;i<n;++i)
		cin >>a[i];
	cin >> m;
	for(i=0;i<m;++i)
	{
		cin >> x;
		if(exit(a,n,x)) cout << "YES" <<  endl;
		else cout << "NO" <<  endl;
	}
}
