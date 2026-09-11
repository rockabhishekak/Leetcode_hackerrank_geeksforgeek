class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int index =0;
        for(int i=0;i<arr.size();i+=2)
        {
            arr[index++]=arr[i];
            
        }
        arr.resize(index);
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna