#include<bits/stdc++.h>
using namespace std;
vector<pair<unsigned long long, unsigned long long> > F = { {1, 2}, {2, 3}, {6, 4}, {12, 3}, {420, 4}, {840, 3}, {360360, 4}, {720720, 3}, {72201776446800, 4}, {144403552893600, 3}, {9419588158802421600, 3}};
int main(){
	unsigned long long A, B, ANS = 0;
	scanf("%llu%llu", &A, &B);
	for(int i=0;i+1<F.size();i++) ANS += (B/F[i].first-(A-1)/F[i].first-B/F[i+1].first+(A-1)/F[i+1].first)*F[i].second;
	printf("%llu", ANS);
}