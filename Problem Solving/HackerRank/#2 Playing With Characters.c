#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char char1,string[100],sen[100];
    
    scanf("%c",&char1);
    scanf("%s", string);
    scanf("\n");
    gets(sen);

    printf("%c\n%s\n%s",char1,string,sen);
       
    return 0;
}
