#include<bits/stdc++.h>
using namespace std;

#define int                                          int64_t
#define mp                                           make_pair
#define pb                                           push_back
#define mod                                          1000000007
#define inf                                          1e18 
#define N 20000007
#define vi                                           vector<int>
#define pii                                          pair<int,int>
#define vpii                                         vector<pair<int,int>>
int arr[N];


void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int32_t main()
{
    init();
    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int moves = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                moves += (arr[i-1]-arr[i]);
                arr[i] += (arr[i-1]-arr[i]);
            }
        }
        cout<<moves<<endl;
    }
    return 0;
}