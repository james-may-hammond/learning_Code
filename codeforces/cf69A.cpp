#include <iostream>
using namespace std;
int main(){
    int n,a[3],asum[3] = {0,0,0};
    cin>>n;
    while(n--){
        cin>>a[0]>>a[1]>>a[2];
        asum[0]+=a[0];
        asum[1]+=a[1];
        asum[2]+=a[2];
    }
    if (asum[0]==0 && asum[1] ==0 && asum[2]==0){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}