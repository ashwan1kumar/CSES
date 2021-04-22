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
        string str;
        cin>>str;
        int ans = 0;
        int count = 1;
        for(int i=1;i<str.length();i++)
        {
            if(str[i]==str[i-1])
            {
                count++;
            }
            else
            {
                ans = max(count,ans);
                count = 1;
            }
        }
        ans = max(ans,count);
        cout<<ans<<endl;
    }
    return 0;
}