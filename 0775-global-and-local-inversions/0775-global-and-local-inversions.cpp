#define ll  long long
#define pb  push_back
#define ppb pop_back
#define vti vector<int>
#define vll vector<ll>

class Solution 
{
public:
//     int merge(vti& arr, unsigned int low, unsigned int mid, unsigned int high)
//     {
//         vti temp;
//         unsigned int left = low;
//         unsigned int right = mid+1;
//         unsigned int cnt = 0;
        
//         while(left<=mid && right<=high)
//         {
//             if(arr[left] <= arr[right])
//                 temp.pb(arr[left++]);
//             else
//             {
//                 temp.pb(arr[right++]);
//                 cnt += (mid - left + 1);
                
//             }
//         }
//         while(left<= mid)
//             temp.pb(arr[left++]);
//         while(right<=high)
//             temp.pb(arr[right++]);
        
//         for(int i=low; i<=high; ++i)
//             arr[i] = temp[i-low];
    
//         return cnt;
//     }
//     unsigned int mergeSort(vti& arr, unsigned int low, unsigned int high)
//     {
//         unsigned int cnt = 0;
//         if(low>=high)
//             return cnt;
        
//         int mid = (low+high)/2;
//         cnt += mergeSort(arr, low, mid);
//         cnt += mergeSort(arr, mid+1, high);
//         cnt += merge(arr, low, mid, high);
//         return cnt;
//     }
    bool isIdealPermutation(vector<int>& nums) 
    {
        int cmax = 0, n = nums.size();
        for(int i=0; i<n-2; ++i)
        {
            cmax = max(cmax, nums[i]);
            if(cmax > nums[i+2])
                return false;
        }
        
        return true;
    }
};