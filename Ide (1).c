#include <stdio.h>
void toh(int,char,char,char);
void toh(int n, char first, char last, char next)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from  %c to  %c",first,last);
        return;
    }
    toh(n-1, first,next,last);
    printf("\n Move disk %d from %c to %c",n,first,last);
    toh(n-1,next,last,first);
}
 int main()
{
    int n = 3; 
    toh(n,'A','C','B');  
    return 0;
}