#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s1[9999];
    while(1){

        if(s1=='\n')
        {
            break;
        }

    scanf("%c",&s1);

   if(s1>='a' && s1<='z')

    {
        printf("\n%c", s1);
    }}
    return 0;
}
