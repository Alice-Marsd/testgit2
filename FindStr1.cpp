#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s,order[100];
    int n;
    while(cin>>s>>n)
    {
        for(int i=0;i<n;i++)cin>>order[i];
        for(int i=0;i<n;i++)
        {
            int option=order[i][0]-'0',start=order[i][1]-'0',length=order[i][2]-'0';
            if(option==0)
                reverse(s.begin()+start,s.begin()+start+length); 
            else
                s.replace(start,length,order[i].substr(3,order[i].length()-3));
            cout<<s<<endl;
        }
    }
    return 0;
} 
