#include<stdio.h>

bool checkPalindrome(int array[])
{
    int counter=0;
    while(counter<=4)
    {
        if(array[counter]!=array[9-counter]) return false;
        counter++;
    }
    return true;
}

int main() 
{
    int array[10];
    for(short i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    if(checkPalindrome(array))
    {
        printf("The sequence of numbers given is a palindrome");
    }
    else 
    {
        printf("The sequenc is not a palindrome");
    }
    return 0;
}