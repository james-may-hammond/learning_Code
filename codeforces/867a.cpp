#include <iostream>
int main(){
    int n;
    int sfcnt=0,fscnt=0;
    char inp[101];
    do{
        std::cin>>n;
        if (n>=2 && n<=100)
            break;
        else
            std::cin>>n;
    }while(true);
    std::cin>>inp;
    for (int i=0;i<n;++i){
        if (inp[i] =='S' && inp[i+1] == 'F'){
            sfcnt++;
        } else if (inp[i] == 'F' && inp[i+1] == 'S') {
            fscnt++;
        }
    }
    if (sfcnt>fscnt)
        std::cout<<"YES"<<std::endl;
    else 
        std::cout<<"NO"<<std::endl;
    

}