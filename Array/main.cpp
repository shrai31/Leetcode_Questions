#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        if(n==0) return 0; 
        
        int prev=1;
        for(int i=1;i<nums.size();++i){
            
            if(nums[i-1]!=nums[i]){
                
                nums[prev]=nums[i];
                prev++;
                }
            }
        return prev;
}


int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int no = removeDuplicates(nums);

    cout << no << endl;

    for (auto x : nums){
        cout << x << " ";
    }
    
    cout << endl;
    return 0;
}