#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}

int a[10][10];
int n;
bool b[100]={false};
int kq[100], best[100]={0};
int _min=INT_MAX, cost=0;
int start;


void Try(int i)
{
	if(n==i)
	{
		if(cost+a[kq[i-1]][kq[0]] <_min)
		{
			_min=cost+a[kq[i-1]][kq[0]];
			for(int j=0;j<n;j++)
				best[j]=kq[j];
		}
	}else
	{
		for(int j=0; j<n;j++)
		{
			if(!b[j] && cost+a[kq[i-1]][j] < _min)
			{
				kq[i]=j;
				b[j]=true;
				cost+=a[kq[i-1]][j];
				Try(i+1);
				b[j]=false;
				cost-=a[kq[i-1]][j];
			}
		}
	}
}
void xuat()
{
//	for(int i=0;i<n;i++)
//		cout<<best[i]+1<<" ->";
//	cout<<best[0]+1<<endl;
	cout<<_min<<endl;
}
void solve(){

	cin>>n;
	for(int i=0; i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	start=1;
	start--;
	kq[0]=start;
	b[start]=true;
	Try(1);
	xuat();
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



