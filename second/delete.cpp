
#include "delete.hpp"
#include "/Users/kallelskander/stdc++.h"
//#include <bits/stdc++.h>
#include <string.h>
#include<math.h>
#include<iostream>

using  ll = long long;
const long long N=2e5+7;
const long long S=1e9+7;

using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool isPrime(long long n)
{
    long long c;
    // Corner case
    if (n <= 1)
        return false;
    c=sqrt(n);
    // Check from 2 to n-1
    for (int i = 2; i <= c; i++)
        if (n % i == 0)
            return false;

    return true;
}
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a%S;
        a = a * a%S;
        b >>= 1;
    }
    return res;
}
//printf( "%6.*lf", precision, number );

bool seca(const pair<int,int> &a,  const pair<int,int> &b)
{
    if(a.second == b.second ){
        return (a.first > b.first);
    }else{
        return (a.second < b.second);
    }
    
}
struct Cmp
{
    bool operator ()(const pair< int, int> &a, const pair< int, int> &b)
    {
        if(a.first == b.first ){
            return a.second > b.second;
        }else{
            return a.first < b.first;
        }
        
    }
};
class gfg {
public:
    int getSum(long long n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
};






long long fact(int i){
    if (i <= 1) return 1;
      else return i*fact(i-1)%S;
}


ll l,k,tr,n,m,sum,mini,maxi,a,b,c,y,z,r,n0,n1,n2,x,h;

double fs,fp,fe;

ll t1[N],t2[N],tt1[N];
char mat[55][55];
int fat[200][200];
double tmin,tsum,d1,d2;
bool t[N];
set <ll> ta[7];

set <ll> vis;
set <ll> mis;

set <string> gis;
set <char> lis;
deque<ll> res;
deque<ll> bes;

//set <pair<int,int>> v1;
//set <pair<int,int>> v2;
pair<int,int> pp;
vector <ll> tv[N];
map < ll , ll > ma;
map <ll , ll > la;
char c1,c2;
string s;
string ss;

void dfs(int s) {
    if (t[s]) return;
    t[s] = true;
        // process node s
        for (auto xx: tv[s]) {
            dfs(xx);
            
        }
    if (t1[s]==a && b==0) {
        b=s;
        
    }
}

int bfs(ll s) {
    int sum=0;
    if (t[s]) return 0;
    t[s] = true;
    
    //cout<<s<<endl;
    
    for (auto xx: tv[s]) {
        sum=sum^bfs(xx);
        
    }
    t1[s]=sum^t2[s];
    
    return sum^t2[s];
}
//int lfs(ll s) {
//    int sum=0;
//    //int mini=0;
//    if (t[s]) return 0;
//    t[s] = true;
//
//    //cout<<s<<endl;
//
//    for (auto xx: tv[s]) {
//        sum=sum^bfs(xx);
//
//    }
//    t1[s]=sum^t2[s];
////    if ( sum^t2[s]==0) {
////        cout<<"hi"<<s<<"ji";
////        mini=s;
////    }
//    //cout<<mini;
//    return sum^t2[s];
//}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //gfg g;
    
    for(cin>>tr;tr--;){
        cin>>n>>m>>k;
        
        
    }
    
    
}
/*
for(int i=0; i<n; i++){

    }
 
for(cin>>tr;tr--;){
}
*/


