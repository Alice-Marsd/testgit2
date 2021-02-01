#include<iostream>
#include<vector>
using namespace std;
int upper_bound_(int n, int v, vector<int>& a) {
        // write code here
        if(a[n-1]<v) return n+1;
        int left=0,right = n-1;
        int temp;
        while(left<right){
            int mid = (right+left)/2;
            if(a[mid]<v) {
                left = mid+1;
            }
            else if(a[mid]>=v){
                temp = mid;
                right = mid;
            }
        }
        return temp+1;
    }
int main()
{
	vector<int> a;
	int i,n,v,x;
	cin >> n;
	cin >> v;
	for(i=0 ; i<n ; ++i )
	{
		cin >> x;
		a.push_back(x);
	}
		
	
	cout << upper_bound_(n,v,a)<<endl;
	
 } 
