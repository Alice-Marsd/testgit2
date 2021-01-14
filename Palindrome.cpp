 #include <iostream>
 using namespace std; 
 bool isPalindrome(int x) {
        bool isP=false;
        string str="";
        int a=x,i=0,j;
        if(a>=0)
        { 
            while(a)
            {
                char cc='0'+a%10;
                str.insert(i,1,cc);
                a=a/10;
                ++i;
            } 
            
            i=0;
            j=str.length()-1;
            isP=true;
            while(i<=j)
            {
                if(str[i]!=str[j])
                {
                	isP=false;
                	break;
				} 
                i++;
                j--;
            }
        }

        return isP;
    }
    int main()
    {
    	
    	cout<< isPalindrome(0)<<endl;
	}
