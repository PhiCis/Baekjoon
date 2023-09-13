#include "timecard.h"
using namespace std;
static int N;

void init(int n) {
	N = n;
}

string convert(string s) {
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]=(char)(s[i]-'A'+'a');
    }
	return s;
}
