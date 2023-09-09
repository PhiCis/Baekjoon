#include <cstdio>
#include <algorithm>
using namespace std;

void solve(int n) {
    int c[n] = {0, };
    for (int i=0; i<6; i++) c[i] = 1;
    int a[n];
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    do {
        for (int i=0; i<n; i++) {
            if (c[i]) printf("%d ", a[i]);
        }
        printf("\n");
    } while (prev_permutation(c, c+n));
    printf("\n");
}

int main() {
    int n;
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;
        solve(n);
    }
    return 0;
}