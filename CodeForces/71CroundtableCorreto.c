#include <stdio.h>
#include <stdbool.h>

#define MAXN 100005

int a[MAXN];

bool testar_passo(int n, int d) {
    int k = n / d; 
    if (k < 3) return false; 


    for (int start = 0; start < d; start++) {
        bool valido = true;
        for (int j = start; j < n; j += d) {
            if (a[j] == 0) {
                valido = false;
                break;
            }
        }
        if (valido) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int d = 1; d * d <= n; d++) {
        if (n % d == 0) {
            if (testar_passo(n, d)) {
                printf("YES\n");
                return 0;
            }

            int d2 = n / d;
            if (d2 != d) {
                if (testar_passo(n, d2)) {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }

    printf("NO\n");
    return 0;
}