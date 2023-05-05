#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                int k = j + 1;
                int l = nums.size() - 1;
                while (k < l) {
                    //by writing below 4 statement this way it will not give runtime error
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        for(auto quadruplets : s)
            output.push_back(quadruplets);
        return output;
}

int main(){
    int n,target;
    cout<<"The size of array is : ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.emplace_back(temp);
    }
    cout<<"Enter the target sum: ";
    cin>>target;
    vector<vector<int>> ans=fourSum(v,target);
    cout<<"The elements having target sum are :"<<endl;
    for(int i=0;i<ans.size();i++){
        for(auto it: ans[i])    cout<<" "<<it;
        cout<<endl;
    }
    return 0;
}