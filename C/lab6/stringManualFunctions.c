#include <stdio.h>
int main(){
    char string1[100] = "Hello,";
    char string2[] = " World!";
    char string3[100];
    int str1len = 0;
    int str2len = 0;
    while (string1[str1len]!='\0'){
        str1len++;
    }
    while (string2[str2len]!='\0'){
        str2len++;
    }
    /* To merge the two into another
    for (int i = 0;i<str1len+str2len;i++){
        if (i<str1len){
            string3[i]=string1[i];
            printf("%c",string3[i]);
        } else {
            string3[i]=string2[i-str1len];
            printf("%c",string3[i]);
        }
    }
    */
    // to concatinate
    for (int i=0;i<str2len;i++){
        string1[i+str1len] = string2[i];
    }
    for (int i=0;i<str1len+str2len;i++){
        printf("%c",string1[i]);
    }
    printf("\n");
    return 0;
    
}