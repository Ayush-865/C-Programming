#include<stdio.h>

double power(int num, int exp); // function to calculate the power of a number
double factorial(int num); // function to calculate the factorial of a number
double series_sum(int n); // function to calculate the sum of the series

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    double sum = series_sum(n);
    
    printf("The sum of the series is: %lf", sum);
    
    return 0;
}

double power(int num, int exp)
{
    if(exp == 0) // base case
        return 1;
    else
        return num * power(num, exp-1); // recursive case
}

double factorial(int num)
{
    if(num == 0 || num == 1) // base case
        return 1;
    else
        return num * factorial(num-1); // recursive case
}

double series_sum(int n)
{
    if(n == 1) // base case
        return 1;
    else
        return power(n, n)/factorial(n) + series_sum(n-1); // recursive case
}
