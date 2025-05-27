#include<stdio.h>
int main(void)
{
    int sum=0;int j=0;
    for(int i=1;i<1000;i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}

// very basic problem , just use a tracker/counter/sum and increase the value each time a multiple of either 3 or 5 is found in the range of first 1000 numbers as given in problem statement
