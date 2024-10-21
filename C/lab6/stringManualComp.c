#include <stdio.h>
int main(){
    char string1[100] = "abc";
    char string2[] = "acb";
    int diff = 0;
    int i=0;
    while (string1[i]!='\0' && string2[i]!='\0')
    {
        int c = string1[i]-string2[i];
        if (c<0)
            c*=-1;
        diff+=c;
        i++;
    }
    printf("%d\n",diff);
    
}