#include<stdio.h>
int main()
{
    char s1[30] = "eye";
    char s2[30] = "eye";
    printf("String = %s\n", s1);
    strrev(s1);
    printf("String Reverse = %s\n", s1);

    int d = strcmp(s1,s2);
    if(d==0)
    {
        printf("String is palindrome.");
    }
    else
        printf("String is not palindrome.");
}

