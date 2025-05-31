#include <stdio.h>

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm_two(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long lcm_array(long long arr[], int n) {
    if (n == 1)
        return arr[0];
    
    return lcm_two(arr[0], lcm_array(arr + 1, n - 1));
}

int main() {
    long long arr[20];  
    for(int i = 0; i < 20; i++){
        arr[i] = i + 1;
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("LCM of array elements: %lld\n", lcm_array(arr, n));
    return 0;
}

// using long long type for avoiding the int overflow , I find it easy to solve this using recursive patterns again and again even though it is not the best runtime or space complexity
