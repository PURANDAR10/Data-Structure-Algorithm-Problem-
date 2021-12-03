 #include<iostream>
 using namespace std;
 #include <vector>
 vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int start = 0; start < n-1; start++)
        {
            for(int end = start+1; end < n; end++)
            {
                if(nums[start] + nums[end] == target)
                    return {start, end};
            }
        }
        return {};
    }
int main()
{
    vector<int> nums={1,3,4,12,4,8,9,3,6};
    int target=8;
    vector<int> arrby4;

    arrby4=twoSum(nums,target);
    for(int i=0;i<2;i++)
    {
        cout<<arrby4[i]<<endl;
    }
    }