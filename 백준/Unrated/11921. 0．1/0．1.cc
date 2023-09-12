#include<bits/stdc++.h>
#include <sys/stat.h>
#include <sys/mman.h>
using namespace std;
int main() 
{
	char* p = (char*)mmap(0, 45000000, PROT_READ, MAP_SHARED, 0, 0);

	auto readInt = [&]() {
		int ret = 0;
        for (char c = *p++; c & 16; ret = 10 * ret + (c & 15), c = *p++);
		return ret;
	};

	int n = readInt();
	long long sum = 0;
	for (int i = 0; i < n; i++) sum += readInt();
	printf("%d\n%lld", n, sum);
}