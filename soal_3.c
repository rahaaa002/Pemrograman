#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007


int compare(const void *a, const void *b) {
    int valA = *(const int *)a;
    int valB = *(const int *)b;
    if (valA < valB) return -1;
    if (valA > valB) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *a = (int *)malloc((size_t)n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    qsort(a, n, sizeof(int), compare);

   
    long long total_pairs = (long long)n * (n - 1) / 2;
    long long equal_pairs = 0;
    long long count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            equal_pairs += count * (count - 1) / 2;
            count = 1;
        }
    }
    equal_pairs += count * (count - 1) / 2;

    long long valid_pairs = total_pairs - equal_pairs;
    long long result = valid_pairs % MOD;

    printf("%lld\n", result);

    free(a);
    return 0;
}
