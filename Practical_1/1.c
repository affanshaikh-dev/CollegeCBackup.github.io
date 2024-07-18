#include<stdio.h>

int main()
{
    int principle, interest, time, si;

    printf("Enter Your Principle Value");
    scanf("%d", &principle);

    printf("Enter Your Rate of Interest");
    scanf("%d", &interest);

    printf("Enter you time of Issue");
    scanf("%d", &time);

    si = (principle * interest * time )/ 100;

    printf("Simple Interest:- %d", si);

    return 0;
}