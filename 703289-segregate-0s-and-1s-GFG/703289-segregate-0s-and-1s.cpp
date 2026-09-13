class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int l=0;
        for(int r=0;r<arr.size();r++)
        {
            if(arr[r]!=1)
            {
                swap(arr[r],arr[l]);
                l++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna