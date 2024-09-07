/* LARGEST PRIME FACTOR */
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
        int x;
        cin >> x;
        vi v;
        for(int i=2 ; i*i<=x ; i++){
            if(x%i == 0){
                v.pb(i);
            }
        }

        if(v.empty()){
            cout << x << "\n";
        } else {
            loop2(idx,(int)v.size()-1,0){
                int num = v[idx], isPrime=1, i=2;
                for( ; i*i<=num ; i++){
                    if(num%i == 0){
                        isPrime ^= 1;
                        break;
                    }
                }
                if(isPrime){
                    cout << "Answer : " << num << endl;
                    break;
                }
            }
        }
    };
    return 0;
}