class Solution {
  public:
    bool ispelindrom(int val)
    {
        int temp = val;
        int rev = 0;
        while(temp>0)
        {
            int r=temp%10;
            rev = rev * 10 + r;
            temp = temp/10;
            
        }
        return rev==val;
    }
    bool isPalinArray(vector<int> &arr) {
        // code here
        bool ans;
        for(int i=0;i<arr.size();i++)
        {
            ans=ispelindrom(arr[i]);
            if(ans==false){
                return ans;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna