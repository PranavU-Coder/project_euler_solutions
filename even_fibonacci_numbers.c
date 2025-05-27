#include <stdio.h>

long long fibo() {
    long long prev = 1, curr = 2;
    long long sum = 0;
    
    while (curr <= 4000000) {
        if (curr % 2 == 0) {
            sum += curr;  
        }
        
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    return sum;
}

int main() {
    long long result = fibo();
    printf("%lld\n", result);
    
    return 0;
}

/* not using recursive solution due runtime and memory complexity , instead initializing base numbers which compound to large numbers here , as required sum till found is 4 milli and in that only even fibo numbers
   are being computed as sum and the same fibonacci sequence is applied to solve this problem  */
