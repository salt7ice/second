#include </Users/kallelskander/stdc++.h>
//#include <bits/stdc++.h>
#include <string.h>
#include<math.h>
#include<iostream>
 
using namespace std;
using  ll = long long;
const long long N=2e6+7;
const long long M=1e15+7;

#define PB push_back
#define MP make_pair
#define F first
#define S second


 
ll l,n,mini,maxi,c,tr,m,x,d,r,y,h,a,b,k;
ll t[N],t1[N],pr[N],ma[N],vis[N];


 
//char cat [1005][1005];
//set < ll > vis;
 
//map < ll , ll >ma;
map < ll , deque<ll> >la;

 


//vector< deque<ll>  >vp;

//vector< ll > adj[N];
 
//priority_queue < pair<ll,ll> > q;
//deque<ll> qr;
//string s ,s1;
 
 
//unsigned long long int  sum, gg;
/*
 
for(int i=0; i<n; i++){
 
}
 
for(cin>>tr;tr--;){
}
*/
int main(){
    
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt","r", stdin);
//    freopen("output.txt","w", stdout);
//    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    for(cin>>tr;tr--;){
        cin>>n;
        
        for(int i=0; i<n+100; i++){
         ma[i]=0;
            vis[i]=0;
            t[i]=0;
        }
        
        la.clear();
        //vis.clear();
        c=0;
        for(int i=0; i<n; i++){
            cin>>t[i+1];
            if( t[i+1]!= i+1 ){
                ma[  t[i+1] ]++;
            }
            

        }

        for(int i=1; i<=n; i++){
            //qr.clear();
            
            if(  ma[i]==0  ){
                //qr.PB(i);
                la[i].PB(i);
                x=i;
                vis[i]++;;
                while (  !vis[t[x]] )
                {
                    vis[t[x]]++;
                    la[i].push_front(t[x]);
                    
                    x=t[x];
                }
                //vp.PB(qr);

            }
        }

        cout<<la.size()<<endl;
        for(auto xx :la ){
            cout<<xx.second.size()<<endl;
            for(auto yy :xx.second ){
            
                cout<<yy<<" ";
            }
            cout<<endl;
        }
         
        
        cout<<endl;
        
    }


    
    return 0;
}


