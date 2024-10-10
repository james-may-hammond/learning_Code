#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<double> phNum;
    int n=0;
    cout<<"How many phone numbers to be entered: ";
    cin>>n;
    int j;
    for (unsigned int i = 0; i<n;++i){
        cout<<"Please enter number sequence "<<i<<" : ";
        cin>>j;
        phNum.push_back(j);
    }
}