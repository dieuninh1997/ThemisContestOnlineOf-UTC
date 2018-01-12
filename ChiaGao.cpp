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
int a[10];
int p[100],b[100];
int ans=INT_MAX,dem=0;
void xuat()
{
	dem++;
	cout<<dem<<" ";
	for(int i=1;i<=9;i++)
		cout<<p[i]<<" ";
	cout<<endl;
}
void xuly()
{
	//bo hang bo cot sau khi xet xong hang do 
	int t[3];
	t[0]=a[p[1]]+a[p[2]]+a[p[3]];
	t[1]=a[p[4]]+a[p[5]]+a[p[6]];
	t[2]=a[p[7]]+a[p[8]]+a[p[9]];
	sort(t,t+3);
//	cout<<"min-max: "
	ans=min(ans,t[2]-t[0]);
}

void hv(int k)
{
	for(int j=1; j<=9;j++)
	{
		if(b[j])
		{
			p[k]=j;
			b[j]=0;
			if(k==9)
			{
//				xuat();
				xuly();
			}
			else
				hv(k+1);
			b[j]=1;
		}
		
	}
}

void solve(){
	for(int i=1; i<=9;i++)
		b[i]=1;

	for(int i=1;i<=9;i++)
		cin>>a[i];
//	ans=INT_MAX;
	hv(1);
	cout<<ans;
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



