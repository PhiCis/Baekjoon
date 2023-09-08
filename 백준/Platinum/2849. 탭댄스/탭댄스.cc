#include<bits/stdc++.h>
using namespace std;
int l[800080], r[800080], m[800080], lm[800080], rm[800080];
int find(int id, int s, int e, int t)
{
	if(t<s||e<t) return 0;
	if(s==e)
	{
		return l[id];
	}
	int M=(s+e)/2;
	return find(id*2, s, M, t)+find(id*2+1, M+1, e, t);
}

void update(int id, int s, int e, int t, int v){
   if (t<s||e<t) return;
   if (s==e){
      l[id]=r[id]=v;
      m[id]=lm[id]=rm[id]=1;
      return;
   }
   int M=(s+e)/2;
   update(id*2, s, M, t, v);
   update(id*2+1, M+1, e, t, v);
   
   l[id]=l[id*2];
   r[id]=r[id*2+1];
   m[id]=(r[id*2]+l[id*2+1]==0)?max(max(m[id*2], m[id*2+1]), rm[id*2]+lm[id*2+1]):max(m[id*2], m[id*2+1]);
   
   lm[id]=(lm[id*2]==M-s+1&&r[id*2]+l[id*2+1]==0)?lm[id*2]+lm[id*2+1]:lm[id*2];
   rm[id]=(rm[id*2+1]==e-M&&r[id*2]+l[id*2+1]==0)?rm[id*2+1]+rm[id*2]:rm[id*2+1];
}



int main()
{
	int N, Q, a;
	scanf("%d%d", &N, &Q);
	for(int i=1;i<=N;i++)
	{
		update(1, 1, N, i, 1);
	}
	for(int i=1;i<=Q;i++)
	{
		scanf("%d", &a);
		//printf("%d ", find(1, 1, N, a));
		update(1, 1, N, a, -find(1, 1, N, a));
		printf("%d\n", m[1]);
	}
}