class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int k=n;
        int sum=0;
        while(k>0)
        {
            int rem = k%10;
            sum = sum + rem;
            k=k/10;
            
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna