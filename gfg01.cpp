class Solution {

  public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        // code here
        long long a = A[0],b = A[1] + max(0,A[0]);
        for(long long c,i=2;i<N;i++)
            c = max(a,b) + A[i],a = b,b = c;
        return max(a,b);
    }
};
int v1=0;
    int v2=0;
    sort(arr , arr+n);
    for(int i=0;i<m;i++)
    {
        v1+=arr[i];
        v2+=arr[m-1-1];
        
        }
        return v1-v2;