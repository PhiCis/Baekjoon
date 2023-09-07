#include "mushrooms.h"
#include<bits/stdc++.h>
using namespace std;


int count_mushrooms(int n) {
	if(n<=400) //작은 케이스의 경우에는 그냥 돌리자. 
	{
		int ans = 1;
		for(int i=1;i+1<n;i+=2)
		{
			int c = use_machine({i, 0, i+1});
			if(c==0) ans+=2;
			if(c==1) ans+=1;
			if(c==2) ans+=0;
		}
		if(n%2==0)
		{
			int c = use_machine({0, n-1});
			if(c==0) ans+=1;
			if(c==1) ans+=0;
		}
		return ans;
	}
	else
	{
		int sq = (int)sqrt(n)+80;
		//step 1. 4번의 비교로 초기 5개의 값을 구하자.
		vector<int> A;
		vector<int> B;
		A.push_back(0);
		for(int i=1;i<=2;i++)
		{
			if(use_machine({0, i})==0) A.push_back(i); 
			else B.push_back(i);
		}
		if(A.size()>=2)
		{
			int c = use_machine({A[0], 3, A[1], 4});
			if(c&1) B.push_back(4);
			else A.push_back(4);
			if(c/2==0) A.push_back(3);
			else B.push_back(3);
		}
		else
		{
			int c = use_machine({B[0], 3, B[1], 4});
			if(c&1) A.push_back(4);
			else B.push_back(4);
			if(c/2==0) B.push_back(3);
			else A.push_back(3);
		}
		//step 2. 2번의 비교, 최대 한 번의 3번의 비교로 이후 5개의 값들을 구하자. 
		int pnt = 5;
		while(pnt<sq)
		{
			if(A.size()>=3&&B.size()>=2)
			{
				int c = use_machine({A[0], pnt, A[1], pnt+1, A[2], pnt+2});
				if(c&1) B.push_back(pnt+2);
				else A.push_back(pnt+2);
				if(c/2==0)
				{
					A.push_back(pnt);	A.push_back(pnt+1);
					int d = use_machine({A[0], pnt+3, A[1], pnt+4});
					if(d&1)	B.push_back(pnt+4);
					else A.push_back(pnt+4);
					if(d/2==0) A.push_back(pnt+3);
					else B.push_back(pnt+3);
				}
				else if(c/2==2)
				{
					B.push_back(pnt);	B.push_back(pnt+1);
					int d = use_machine({A[0], pnt+3, A[1], pnt+4});
					if(d&1)	B.push_back(pnt+4);
					else A.push_back(pnt+4);
					if(d/2==0) A.push_back(pnt+3);
					else B.push_back(pnt+3);
				}
				else
				{
					int d = use_machine({B[0], pnt, B[1], A[0], pnt+1, A[1], pnt+3, A[2], pnt+4});
					if(d&1) A.push_back(pnt+4);
					else B.push_back(pnt+4);
					if((d-1)/2==0)
					{
						B.push_back(pnt);
						A.push_back(pnt+1);
						A.push_back(pnt+3);
					}
					if((d-1)/2==1)
					{
						B.push_back(pnt);
						A.push_back(pnt+1);
						B.push_back(pnt+3);
					}
					if((d-1)/2==2)
					{
						A.push_back(pnt);
						B.push_back(pnt+1);
						A.push_back(pnt+3);
					}
					if((d-1)/2==3)
					{
						A.push_back(pnt);
						B.push_back(pnt+1);
						B.push_back(pnt+3);
					}
				}
			}
			else if(A.size()>=2&&B.size()>=3)
			{
				int c = use_machine({B[0], pnt, B[1], pnt+1, B[2], pnt+2});
				if(c&1) A.push_back(pnt+2);
				else B.push_back(pnt+2);
				if(c/2==0)
				{
					B.push_back(pnt);	B.push_back(pnt+1);
					int d = use_machine({B[0], pnt+3, B[1], pnt+4});
					if(d&1)	A.push_back(pnt+4);
					else B.push_back(pnt+4);
					if(d/2==0) B.push_back(pnt+3);
					else A.push_back(pnt+3);
				}
				else if(c/2==2)
				{
					A.push_back(pnt);	A.push_back(pnt+1);
					int d = use_machine({B[0], pnt+3, B[1], pnt+4});
					if(d&1)	A.push_back(pnt+4);
					else B.push_back(pnt+4);
					if(d/2==0) B.push_back(pnt+3);
					else A.push_back(pnt+3);
				}
				else
				{
					int d = use_machine({A[0], pnt, A[1], B[0], pnt+1, B[1], pnt+3, B[2], pnt+4});
					if(d&1) B.push_back(pnt+4);
					else A.push_back(pnt+4);
					if((d-1)/2==0)
					{
						A.push_back(pnt);
						B.push_back(pnt+1);
						B.push_back(pnt+3);
					}
					if((d-1)/2==1)
					{
						A.push_back(pnt);
						B.push_back(pnt+1);
						A.push_back(pnt+3);
					}
					if((d-1)/2==2)
					{
						B.push_back(pnt);
						A.push_back(pnt+1);
						B.push_back(pnt+3);
					}
					if((d-1)/2==3)
					{
						B.push_back(pnt);
						A.push_back(pnt+1);
						A.push_back(pnt+3);
					}
				}
			}
			else if(A.size()>=4)
			{
				int c = use_machine({A[0], pnt, A[1], pnt+1, A[2], pnt+2});
				if(c&1) B.push_back(pnt+2);
				else A.push_back(pnt+2);
				if(c/2==0)
				{
					A.push_back(pnt);
					A.push_back(pnt+1);
					int d = use_machine({A[0], pnt+3, A[1], pnt+4});
					if(d&1) B.push_back(pnt+4);
					else A.push_back(pnt+4);
					if(d/2==0) A.push_back(pnt+3);
					else B.push_back(pnt+3);
				}
				else if(c/2==2)
				{
					B.push_back(pnt);
					B.push_back(pnt+1);
					int d = use_machine({A[0], pnt+3, A[1], pnt+4});
					if(d&1)	B.push_back(pnt+4);
					else A.push_back(pnt+4);
					if(d/2==0) A.push_back(pnt+3);
					else B.push_back(pnt+3);
				}
				else
				{
					int d = use_machine({A[0], pnt+3, A[1], pnt+4, A[2], pnt});
					if(d&1) B.push_back(pnt), A.push_back(pnt+1);
					else A.push_back(pnt), B.push_back(pnt+1);
					if(d/2==0)
					{
						A.push_back(pnt+3);
						A.push_back(pnt+4);
					}
					else if(d/2==2)
					{
						B.push_back(pnt+3);
						B.push_back(pnt+4);
					}
					else
					{
						int e = use_machine({A[0], pnt+3});
						if(e&1) B.push_back(pnt+3), A.push_back(pnt+4);
						else A.push_back(pnt+3), B.push_back(pnt+4);
					}
				}
			}
			else if(B.size()>=4)
			{
				int c = use_machine({B[0], pnt, B[1], pnt+1, B[2], pnt+2});
				if(c&1) A.push_back(pnt+2);
				else B.push_back(pnt+2);
				if(c/2==0)
				{
					B.push_back(pnt);
					B.push_back(pnt+1);
					int d = use_machine({B[0], pnt+3, B[1], pnt+4});
					if(d&1) A.push_back(pnt+4);
					else B.push_back(pnt+4);
					if(d/2==0) B.push_back(pnt+3);
					else A.push_back(pnt+3);
				}
				else if(c/2==2)
				{
					A.push_back(pnt);
					A.push_back(pnt+1);
					int d = use_machine({B[0], pnt+3, B[1], pnt+4});
					if(d&1)	A.push_back(pnt+4);
					else B.push_back(pnt+4);
					if(d/2==0) B.push_back(pnt+3);
					else A.push_back(pnt+3);
				}
				else
				{
					int d = use_machine({B[0], pnt+3, B[1], pnt+4, B[2], pnt});
					if(d&1) A.push_back(pnt), B.push_back(pnt+1);
					else B.push_back(pnt), A.push_back(pnt+1);
					if(d/2==0)
					{
						B.push_back(pnt+3);
						B.push_back(pnt+4);
					}
					else if(d/2==2)
					{
						A.push_back(pnt+3);
						A.push_back(pnt+4);
					}
					else
					{
						int e = use_machine({B[0], pnt+3});
						if(e&1) A.push_back(pnt+3), B.push_back(pnt+4);
						else B.push_back(pnt+3), A.push_back(pnt+4);
					}
				}
			}
			pnt+=5;
		}
		//여기까지 하면 0~pnt-1까지는 모두 완료한 것이다.
		int ans = A.size(); //현재 답  
		while(pnt<n)
		{
			if(A.size()>=B.size())
			{
				vector<int> tmp;
				for(int i=0;i<A.size();i++)
				{
					tmp.push_back(A[i]);
					tmp.push_back(pnt++);
					if(pnt>=n) break;
				}
				int c = use_machine(tmp);
				if(c&1) B.push_back(pnt-1);
				else
				{
					A.push_back(pnt-1);
					ans++;
				}
				ans+=tmp.size()/2-1-c/2;
			}
			else
			{
				vector<int> tmp;
				for(int i=0;i<B.size();i++)
				{
					tmp.push_back(B[i]);
					tmp.push_back(pnt++);
					if(pnt>=n) break;
				}
				int c = use_machine(tmp);
				if(c&1)
				{
					A.push_back(pnt-1);
					ans++;
				}
				else B.push_back(pnt-1);
				ans+=c/2;
			}
		}
		return ans;
	}
}