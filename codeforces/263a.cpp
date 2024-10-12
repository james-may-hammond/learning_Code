#include <iostream>
int main()
{
    int matrix[5][5];
    int onecnt=0;
    int cui,cuj;
    for (int i = 0;i<=4;++i)
    {     
        std::cin>>matrix[i][0]>>matrix[i][1]>>matrix[i][2]>>matrix[i][3]>>matrix[i][4];
        for (int j=0;j<=4;++j)
        {
            if(matrix[i][j]==1)
                onecnt++;
            if(onecnt>=2)
            {
                std::cout<<"MORE THAN ONE IS ONE"<<std::endl;
                break;
            }
        }
        if (onecnt>=2)
            break;
    }
    if (matrix[2][2]==1)
        std::cout<<0<<std::endl;
    else 
    {
        for (int i = 0; i<5; ++i)
        {
            for (int j = 0;j<5; ++j)
            {
                if (matrix[i][j]==1)
                {
                    cui=i;
                    cuj=j;
                }
            }
        }
        int transformations = std::abs(cui - 2) + std::abs(cuj - 2);
        std::cout<<transformations<<std::endl;
    }
}