#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n%2==1 || (n%2==0 && n>=6 && n<=20))
    printf("Weird\n");
    else if(n%2==0 && ( (n>=2 && n<=5) || n>20))
    printf("Not Weird\n");

}
