#include<stdio.h>

long long Prime(long long num){
    if(num < 2) return 0;  
    if(num == 2) return 1; 
    if(num % 2 == 0) return 0; 
    
    for(long long i = 3; i * i <= num; i += 2){  
        if(num % i == 0){
            return 0;  
        }
    }
    return 1;  
}

int main(void){
    long long n = 2000000;
    long long sum=0;
    for(long long i = 2; i < n; i++){  
        long long k = Prime(i);
        if(k == 1){
            sum+=i;
        }
    }
    printf("%lld ",sum);
    return 0;
}

// using long long again for preventing int overflow , basic program to solve the summation of prime numbers till 2 milli
