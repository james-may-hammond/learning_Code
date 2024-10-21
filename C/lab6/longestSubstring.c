#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int longestSubstringLen(char s[]);
int main(){
    char str[] = "ABCBC";
    printf("%d\n", longestSubstringLen(str));
}
int longestSubstringLen(char s[]){
    int n=strlen(s);
    int res=0;
    for (int i=0;i<n;i++){
        bool visited[256]={false};
        for (int j = i;j<n;j++){
            if (visited[s[j]]){
                break;
            } else {
                if (res < j-i+1){
                    res = j-i+1;
                    visited[s[j]]=true;
                }
            }
        }
    }
    return res;
    
}