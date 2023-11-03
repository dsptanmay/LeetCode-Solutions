#define vti vector<int>
#define ll long long
#define pb push_back

class Solution 
{
public:
    void merge(vector<int> &arr, int low, int mid, int high) 
    {
        vector<int> temp; 
        int left = low; 
        int right = mid + 1;
        while (left <= mid && right <= high) 
        {
            if (arr[left] <= arr[right]) 
                temp.push_back(arr[left++]);
            else 
                temp.push_back(arr[right++]);
        }
        while (left <= mid) 
            temp.push_back(arr[left++]);

        while (right <= high) 
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++) 
            arr[i] = temp[i - low];
    }

    int countPairs(vector<int> &arr, int low, int mid, int high) 
    {
        int right = mid + 1;
        int cnt = 0;
        for (int i = low; i <= mid; i++) 
        {
            
            while (right <= high && (long long)arr[i] > 2*(long long)arr[right])
                right++;
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int mergeSort(vector<int> &arr, int low, int high) 
    {
        int cnt = 0;
        if (low >= high) 
            return cnt;
        int mid = (low + high) / 2 ;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return cnt;
    }
    int reversePairs(vti& nums) 
    {
        int res = mergeSort(nums, 0, nums.size()-1);
        return res;
    }
};