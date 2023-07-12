#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // (nums.begin(),nums.end(),sizeof(int));
        sort(nums.begin(),nums.end());
        vector<int> sumresult;
        // int targetvalue = 0;
        for(int i = 0;i < nums.size() - 2;i++){
            int left = i + 1;
            int right = nums.size() - 1;
            // targetvalue = target - nums[i];
            int pushvalue = 1000;
            while(left < right){
                int tmp = nums[i] + nums[left] + nums[right];
                if(tmp < target){
                    left++;
                }
                else if(tmp > target){
                    right--;
                }
                else{
                    return 0;
                }
                if(abs(pushvalue) > abs(target - tmp)){
                    pushvalue = target - tmp;   
                }
                else{

                }
                // pushvalue = min(pushvalue,abs(target - tmp));
            }
            sumresult.push_back(pushvalue);
        }
        int value = sumresult[0];
        for(int &v:sumresult){
            if(abs(v) < abs(value)){
                value = v;
            }
        }
        return value + target;
    }
    // int 
};

int main(){
    vector<int> vec = {-1,2,1,-4};
    Solution s = Solution();
    s.threeSumClosest(vec,1);
    // sort(vec.begin(),vec.end());
    // for(int &num:vec){
    //     cout << num << endl;
    // }
}