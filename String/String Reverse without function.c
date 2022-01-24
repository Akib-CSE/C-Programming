#include<stdio.h>
int main()
{
    char s1[50] = "MD. Abtab Uddin Akib Shikder";
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
}

