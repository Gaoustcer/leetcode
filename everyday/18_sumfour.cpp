#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        size_t a,b,c,d;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        for(a = 0;a < nums.size();a++){
            while(a > 0 && a < nums.size() && nums[a-1] == nums[a]){
                a++;
            }
            for(d = nums.size() - 1;d > a;d--){
                while(d < nums.size() - 1&& d > a + 1 && nums[d + 1] == nums[d]){
                    d--;
                }
                long val = nums[a] + nums[d];
                b = a + 1;
                c = d - 1;
                // vector<int> vec{nums[a],nums[d]};
                while(b < c && b < d && c > a){
                    long v = val + nums[b] + nums[c];
                    if(v < target){
                        b++;
                        while(b < d && nums[b] == nums[b-1]){
                            b++;
                        }
                    }
                    else if(v > target){
                        c--;
                        while(c > a && nums[c] == nums[c+1]){
                            c--;
                        }
                    }
                    else{
                        vector<int> vec{nums[a],nums[b],nums[c],nums[d]};
                        ret.push_back(vec);
                        b++;
                        while(b < d && nums[b] == nums[b-1]){
                            b++;
                        }
                        c--;
                        while(c > a && nums[c] == nums[c+1]){
                            c--;
                        }
                        // cout << a << " " << b << " " << c << " " << d << endl;
                        // break;
                    }
                    // cout << b << " " << c << endl;
                }
            }
        }
        return ret;
    }
};
int main(){
    vector<int> vec{2,2,2,2,2};
    Solution s;
    s.fourSum(vec,8);
}