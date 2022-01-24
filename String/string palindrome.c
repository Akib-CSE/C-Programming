#include<stdio.h>
int main()
{
    char s1[50] = "level";
    char s2[50];

    int i,j, len=0;

    for(i=0; s1[i]!='\0';i++)
    {
        len++;
    }

    for(j=0, i=len-1; s2[j] = '\0', i>=0;i--, j++)
    {
        s2[j] = s1[i];
    }

    printf("String = %s\n", s1);
    printf("length = %d\n", len);
    printf("String Reverse = %s\n", s2);

    int d = strcmp(s1,s2);
    if(d==0)
    {
        printf("String is palindrome.");
    }
    else
        printf("String is not palindrome.");
}

