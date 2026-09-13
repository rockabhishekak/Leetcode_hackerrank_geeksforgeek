class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int l = 0;
        int r = arr.size() - 1;

        while (l < r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna