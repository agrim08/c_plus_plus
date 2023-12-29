//coding ninja question:
//intersection of two sorted arrays
//https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149


#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Declare an array to store answer.
    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        // If both the elements are equal then we increase both the pointers.
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
       
        // If element of first array is greater, increment 'j'
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
       
        // Otherwise increment 'i'
        else
        {
            i++;
        }
    }

    // Return 'ans'
    return ans;
}

int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>a(n);
    vector<int>b(m);
   
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a[i]=ele;
    }
   
    for(int i=0;i<m;i++)
    {
        int ele;
        cin>>ele;
        b[i]=ele;
    }
   
    vector<int>ans= findArrayIntersection(a,n,b,m);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
   
    return 0;
}