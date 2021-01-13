class Solution {
public:
    int reverse(int x) {
        int a=x,num=0;
        int temp=0;
        while(a)
        {
            temp=a%10;
           if((num > 214748364 && a>7) ||(num > 214748364) ) return 0;
           if((num <-214748364 && a<-8) ||(num <-214748364)) return 0;
            num=num*10+temp; 
            a=a/10;
        }
        return num;
    }
};
//反转数字要点：判断是否溢出；溢出返回0
