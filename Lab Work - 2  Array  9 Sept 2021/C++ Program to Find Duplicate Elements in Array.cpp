Suppose we have an array of integers, in range 1 ≤ a[i] ≤ n (n = size of array), here some elements appear twice and others appear once. We have to find all the elements that appear twice in this array. So if the array is [4,3,2,7,8,2,3,1], then the output will be [2, 3]

To solve this, we will follow these steps −

n := size of array, make one array called ans
for i in range 0 to n – 1
x := absolute value of nums[i]
decrease x by 1
if nums[x] < 0, then add x + 1 into ans, otherwise nums[x] := nums[x] * (-1)
return ans
Example(C++)
Let us see the following implementation to get a better understanding −

 Live Demo

#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<auto> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector<int> findDuplicates(vector<int>& nums) {
      int n = nums.size();
      vector <int> ans;
      for(int i = 0; i < n; i++){
         int x = abs(nums[i]);
         x--;
         if(nums[x] < 0) ans.push_back(x + 1);
         else nums[x] *= -1;
      }
      return ans;
   }
};
main(){
   Solution ob;
   vector<int> v = {4,3,2,7,8,2,3,1};
   print_vector(ob.findDuplicates(v));
}
Input
[4,3,2,7,8,2,3,1]
Output
[2,3]
