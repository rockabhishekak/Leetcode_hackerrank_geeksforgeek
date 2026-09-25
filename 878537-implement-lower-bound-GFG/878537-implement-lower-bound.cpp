class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=target)
            {
               return i;
            }
          
        }
        return arr.size();
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna