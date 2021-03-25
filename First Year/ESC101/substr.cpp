#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
    char *str = (char*)malloc(50*sizeof(char));
    scanf("%s",str);
    printf("%s\n",str);
    int len = strlen(str);
    int nsubstr = (len*(len+1))/2;
    char **substr = (char**)malloc(nsubstr*sizeof(char*));
    // for(int i=0;i<nsubstr;i++)
    // // {
    // //     substr[i] = (char*)malloc((len+1)*sizeof(char));
    // // }
    int k=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            substr[k] = (char*)malloc((j-i+2)*sizeof(char));
            strncpy(substr[k],str+i,j-i+1);
            k++;
        }
    }
    for(int i=0;i<nsubstr;i++)
    {
        printf("%s || ",substr[i]);
    }
    printf("\n");
    for (int i=0; i<k; i++) 
    {
        free(substr[i]);
    }
    free(substr);

    return 0;
}