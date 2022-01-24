#include<stdio.h>
int main()
{
    char s1[50] = "Akib";
    char s2[50] = "Abaid";
    char temp[30];

    printf("Before Swapping\n");
    printf("String1 = %s\n",s1);
    printf("String2 = %s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n\nAfter Swapping\n");
    printf("String1 = %s\n",s1);
    printf("String2 = %s\n",s2);
}

