/* FIBONNACI EVEN TERMS SUM */
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi  vector<int>
#define vii vector<vector<int>>
#define vpi vector<vector<pair<int,int>>>
#define mii unordered_map<int,int>
#define mci unordered_map<char,int>
#define pii pair<int,int>
#define pci pair<char,int>
#define pqmx priority_queue<int>
#define pqmn priority_queue<int,vi,greater<int>>
#define si  set<int>
#define spi set<pii>
#define sz(x) ((int) x.size())
#define all(p) p.begin(), p.end()
#define pb     push_back
#define loop1(i,x,y)   for(int i=x; i<=y ; i++)
#define loop2(i,x,y)   for(int i=x; i>=y ; i--)
#define loop(i,n)      for(int i=0; i<n ; i++)

int32_t main(){
    int t=1;
    // cin >> t;
    while(t--){
        int f=1, s=2;
        int sum = 2;

        while(s <= 4000000){
            int temp = f+s;
            if(temp%2 == 0){
                sum += temp;
            }
            f = s;
            s = temp;
        }

        cout << sum << endl;

    };
    return 0;
}