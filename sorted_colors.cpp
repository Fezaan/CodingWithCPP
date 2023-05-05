#include<bits/stdc++.h>
using namespace std;


void sortColors(vector<int>& nums) {
        
         int low = 0, mid = 0, high = nums.size() - 1;
        
        // logic:
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low++], nums[mid++]); break;
                
                case 1: mid++; break;
                
                case 2: swap(nums[mid], nums[high--]); break;
            }
        }
        cout<<"The sorted colors are: ";
        for(auto it: nums){
            cout<<" "<<it;
        }


}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the colors (use 0 for red , 1 for white and 2 for blue): ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    sortColors(arr);
    return 0;
}