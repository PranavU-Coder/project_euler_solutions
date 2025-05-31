#include <stdio.h>

int square_sum(long long n){
    
    long long a,b;
    a=n+1;
    b=2*n+1;
    long long prod=1;
    prod=(n*a*b)/6;
    return prod;
}

int squared(long long n){
    long long sum=0;
    for(long long i=0;i<=n;i++){
        sum+=i;
    }
    return sum*sum;
}

int main(void){
    long long n=100;
    long long a,b;
    a=squared(n); b = square_sum(n);
    long long diff;
    diff=a-b;
    printf("%lld ",diff);
    return 0;
}

// standard mathematical approach 
