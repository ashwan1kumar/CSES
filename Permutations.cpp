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
        if(n==2 or n==3)
        {
            cout<<"NO SOLUTION"<<endl;
        }
        else
        {
            vi odd,eve;
            for(int i=1;i<=n;i++)
            {
                if(i%2)
                {
                    odd.pb(i);
                }
                else   
                    eve.pb(i);
            }
            for(auto x:eve)
            {
                cout<<x<<" ";
            }
            for(auto x:odd)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}