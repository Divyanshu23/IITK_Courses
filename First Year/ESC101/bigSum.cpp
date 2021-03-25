#include<stdio.h>
#include<string.h>

int max(int len1, int len2)
{
    return len1>=len2 ? len1:len2;
}

int main() 
{
    char str1[100]; char str2[100];
    scanf("%s%s",str1,str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = max(len1,len2)+1;
    printf("%d \n",len);
    char sum[len+1];
    int temp_sum, carry=0;
    int j = len1+len2-max(len1,len2);    //min of len1 and len2;
    for (int i=0;i<j;i++)
    {
        temp_sum = str1[len1-1-i] - '0' + str2[len2-1-i] - '0' + carry;
        carry = temp_sum/10;
        temp_sum = temp_sum%10;
        sum[len-1-i] = temp_sum + '0';
    }
    if(carry!=0)
    {
        sum[0] = carry+'0';
    }else
    {
        sum[0]='0';
    }
    
    sum[len] = '\0';
    printf("%s \n",sum);
    return 0;
}