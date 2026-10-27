# [Max Diff Elements and Indexes](https://www.geeksforgeeks.org/problems/maximum-value-of-difference-of-a-pair-of-elements-and-their-index/1)
## Medium
Given an array arr[] of positive integers. Find maximum value of |arr[i] – arr[j]| + |i – j|, (0 &lt;= i, j &lt;= n – 1)
Examples:
Input:&nbsp;arr[] = [1, 2, 3, 1]
Output: 4
Explanation: Choosing i=0 and j=2, will result in |1-3|+|0-2| = 4, which is the maximum possible value.

Input: arr[] = [1, 1, 1]
Output: 2
Explanation: Choosing i=0 and j=2, will result in |1-1|+|0-2| = 2, which is the maximum possible value.
Constraints:1 &lt;= arr.size() &lt;= 1060 &lt;= arr[i] &lt;= 105