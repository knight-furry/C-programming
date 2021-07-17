#include<stdio.h>
void main()
{
    char str[20];
    printf("Please enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Given string is: %s", str);
    int i = 0;
    while(str[i] != '\n')
    i++;
    i--;
    int j;
    char x;
    for(j = 0; j <= i; j++)
    {
        x = str[j];
        str[j] = str[i];
        str[i] = x;
        i--;
    }

    printf("Reverse string is: %s", str);
}