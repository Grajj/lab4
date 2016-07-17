
/* 
 * Program: To find the factorial using recursion
 * Author : Giriraj Khatri
 * Roll No: 0509
 * 
 * Ref    : Data structures using C and C++, Chap 2, Page 127
*/


#include <stdio.h>
#include<conio.h>

long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

