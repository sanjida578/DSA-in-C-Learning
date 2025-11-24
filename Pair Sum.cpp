#include<iostream>
#include<vector>
using namespace std;

//function declaration
vector<int>pair_sum_1(vector<int>nums,int target);
vector<int>pair_sum_2(vector<int>nums,int target);

int main()
{
    vector<int> nums={2,7,11,15};
    int target=17;

    vector<int>result=pair_sum_1(nums,target);
    cout<<result[0]<<" , "<<result[1]<<endl;

    vector<int>ans=pair_sum_2(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
}
//function definition
//first method to calculate pair sum
//time complexity O(n^2)
vector<int>pair_sum_1(vector<int>nums,int target)
{
    vector<int>ans;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]== target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;

            }
        }
    }

}
//second optimise method to calculate pair sum
//time complexity O(n)
vector<int>pair_sum_2(vector<int>nums,int target)
{
    vector<int>ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j)
    {
        int sum=nums[i]+nums[j];
        if(sum>target)
            j--;
        else if(sum<target)
            i++;
        else
            ans.push_back(i);
            ans.push_back(j);
            return ans;
    }
}
