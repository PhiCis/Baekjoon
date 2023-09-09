#include<bits/stdc++.h>
using namespace std;
typedef complex<double> cpx;

double pi = acos(-1);

void FFT(vector<cpx> &f, cpx w)
{
	int n=f.size();
	if(n==1) return;
	vector<cpx> even(n>>1), odd(n>>1);
	for(int i=0;i<n;i++)
	{
		if(i&1) odd[i>>1]=f[i];
		else even[i>>1]=f[i];
	}
	FFT(even, w*w); 
	FFT(odd, w*w);
	cpx wp(1, 0);
	for(int i=0;i<n/2;i++)
	{
		f[i]=even[i]+wp*odd[i];
		f[i+n/2]=even[i]-wp*odd[i];
		wp=wp*w;
	}	
}

vector<cpx> mul(vector<cpx> a, vector<cpx> b)
{
	int n=1;
	while(n<=a.size()||n<=b.size())
	{
		n*=2;
	}
	n*=2;
	a.resize(n); 
	b.resize(n); 
	vector<cpx> c(n);

	cpx w(cos(2*pi/n), sin(2*pi/n));
	FFT(a, w);
	FFT(b, w);
	
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]*b[i];
	}

	FFT(c, cpx(w.real(), -w.imag()));
	for(int i=0;i<n;i++)
	{
		c[i]/=cpx(n, 0);
		c[i]=cpx(round(c[i].real()), round(c[i].imag()));
	}
	
	return c;
}
long long ans;
int main()
{
	int n;
	cin>>n;
	vector<cpx> a(n), c;
	for(long long i=1;i<n;i++)
	{
		a[i*i%n]+=cpx(1, 0);
	}
	c=mul(a, a);
	for(int i=0;i<n;i++) c[2*i]=cpx(round(c[2*i].real())+round(a[i].real()), 0);
	for(int i=0;i<n;i++)
	{
		ans+=(long long)(round(a[i].real()))*(round(c[i].real())+round(c[i+n].real()))/2;
	}
	cout<<ans;
}