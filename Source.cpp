//rakib-CUET-cse06
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iostream>
#include <utility>// std::pair
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;

typedef long long LL;
typedef double DD;
typedef vector<string> VS;
typedef vector<LL> VL;
typedef vector<VL> VVI;
typedef pair<LL,LL> PL;
typedef vector<PL> VPL;
typedef map<string,int>MPS;
typedef map<int,int>MPI;
typedef set<LL> ST;
ST::iterator it;
VL::iterator it1;

#define N 1000
struct stc
{
    int fir,sc;
} input[N];

bool comp( stc a, stc b )
{
    return a.fir < b.fir;
}
#define FIR first
#define SC second
#define i64 __int64
#define I64 %I64d
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
#define S scanf
#define P printf
#define S1(a) scanf("%d",&a)
#define S2(a,b) scanf("d",&a,&b)
#define S3(a,b,c) scanf("d%d",&a,&b,&c)
#define SL(a) scanf("%lld",&a)
#define SL2(a,b) scanf("%lld %lld",&a,&b)
#define SL3(a,b,c) scanf("lld%lld",&a,&b,&c)
#define P1(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PL2(a,b) printf("%lld %lld\n",a,b)
#define PL3(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define PC(t) printf("Case %d: ",t)
#define NL printf("\n")
#define REP(i,a,b) for(i=a;i<b;i++)
#define REV(i,a,b)  for(i=a;i>=b;i--)
#define fr(i,a,b) for(i=a;i<=b;i++)
#define IT(x) for(typeof (x.begin())it = x.begin(); it != x.end (); it++)
#define ITV(x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) {  cout << *it << " "; } cout <<"\n";
#define ITP(x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) {  cout << (*it).FIR << " "<<(*it).SC<<"\n"; } cout << endl;
#define all(x) x.begin(),x.end()
#define rev(a) reverse(BE(a));
#define sorts(a) stable_sort(all(a))
#define sortc(a) sort(all(a),comp)
#define mem(a,b) memset(a,b,sizeof(a))
#define SZ(s) ((int)s.size())
#define even(a) ((a)%2==0)
#define odd(a) ((a)%2==1)
#define max(a,b) (a>b ?a:b)
#define min(a,b) (a<b ?a:b)
#define sqr(a)((a)*(a))
#define area(x1,y1,x2,y2,x3,y3) (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)) //Area of a triangle
#define dist(x1,y1,x2,y2) (sqr(x1-x2)+sqr(y1-y2)) //Distance between two points

#define inf 1e9 //(1<<30)-1
#define eps 1e-14
#define mod 1000000007
#define PI acos(-1.0)//3.141592653589793
#define STN(a) stringtonumber<LL>(a)
/*template <class T> inline T BM(T p,T e,T M)
{
    LL ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a,T b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
template <class T> inline T MDINV(T a,T M)
{
    return bigmod(a,M-2,M);
}
template <class T> inline T PW(T p,T e)
{
    LL ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}
template <class T>string NTS ( T Number )
{
    stringstream ss;
    ss << Number;
    return ss.str();
}
template <class T>T stringtonumber ( const string &Text )
{
    istringstream ss(Text);
    T result;
    return ss >> result ? result : 0;
}*/

///lets code///
bool isPalindrome(string c)
{
	int i,k=0,f=0,s;
	string b;
	 REP(i,0,c.size())
        {
            if(c[i]>='A' && c[i]<='Z')
				c[i]=c[i]-'A'+'a';
			//if(isupper(c[i]))
                //c[i]=tolower(c[i]);
            if(c[i]>=97&&c[i]<=122)
              b+=c[i];
        }
        s=b.size()-1;f=0;
		fr(i,0,s/2)
         {
            if(b[i]==b[s--]){}
            else
              {
                f=1;
                break;
              }

         }
         c.clear();b.clear();
         if(f)
           return false;
         else
           return true; 
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    string a;
    while(getline(cin,a))
    {
        
          bool r=isPalindrome(a);
          if(!r)
            cout<<"Not Palindrome\n";
          else
            cout<<"Palindrome\n";
    }
   return 0;
}
