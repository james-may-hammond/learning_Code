#include <iostream>
int perm(int n, int r);
int comb(int n, int r);
int fact(int a);
int main(){
    int n,r,res;
    char func;
    std::cout<<"Please enter what you wish to do in this format n p/c r:  ";
    std::cin>>n>>func>>r;
    if (func=='C' || func =='c')
        std::cout<<comb(n,r)<<std::endl;
    else if (func =='P' || func == 'p')
        std::cout<<perm(n,r);
    else 
        std::cout<<"Invalid Input"<<std::endl;
    return 0;
}
int fact(int a){
    if (a==0)
        return 1;
    else 
        return a*fact(a-1);
}
int perm(int n, int r){
    return fact(n)/fact(n-r);
}
int comb(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}