class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m-1,j=n-1;
        int ind=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[ind]=nums1[i];
                i--;
            }
            else
            {
                nums1[ind]=nums2[j];
                j--;
            }
            ind--;
        }
        while(i>=0)
        {
            nums1[ind]=nums1[i];
            i--;
            ind--;
        }
        while(j>=0)
        {
            nums1[ind]=nums2[j];
            j--;
            ind--;
        }

        // vector <int > ans;
        // int a=0,b=0;
        // while(a<m && b<n)
        // {
        //     if(nums1[a]>nums2[b])
        //     {
        //         if(nums2[b]!=0)
        //         {
        //             ans.push_back(nums2[b]);
        //             b++;
        //         }   
        //         else
        //         {
        //             ans.push_back(nums1[a]);
        //             a++;
        //         }

        //     }
        //     else
        //     {
        //         if(nums1[a]!=0)
        //         {
        //             ans.push_back(nums1[a]);
        //             a++;
        //         }
        //         else
        //         {
        //             ans.push_back(nums2[b]);
        //             b++;
        //         }
                
        //     }
        // }
        // while(a<m)
        // {
        //     ans.push_back(nums1[a]);
        // }
        // while(b<n)
        // {
        //     ans.push_back(nums2[b]);
        // }
    }
};