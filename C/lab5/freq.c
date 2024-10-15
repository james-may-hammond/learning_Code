#include <stdio.h>
int main()
{
    int arr[] = {1,2,1,2,1,3,5,6,5,3,1,4,2,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<len;i++)
    {
        int cnt = 1;
        if (arr[i]!=-1)
        {
            for (int j = i+1;j<len;j++)
            {
                if (arr[j]==arr[i])
                {
                    cnt++;
                    arr[j]=-1;
                }
            }
            printf("%d => %d \n",arr[i],cnt);
        }
    }
    return 0;
}