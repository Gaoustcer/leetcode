#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int right = 0;
        int left = people.size() - 1;
        size_t boatcount = 0;
        while(right < left){
            int sumweight = people[right] + people[left];
            if(sumweight < limit){
                right++;
                left--;
            }
            else{
                left--;
            }
            boatcount++;
        }
        return boatcount;
    }
};