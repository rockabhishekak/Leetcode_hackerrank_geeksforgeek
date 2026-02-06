class Solution {
public:
    int count(int k)
    {
        int c =0;
        while(k>0)
        {
            int rem = k%10;
            if(rem == 1)
            {
                c++;
            }
            k=k/10;
        }
        return c;
    }
    int countDigitOne(int n) {
        int sum = 0;
        for(int i = 1 ;i<=n;i++)
        {
            sum=sum + count(i);

        }
        return sum;
        
    }

};