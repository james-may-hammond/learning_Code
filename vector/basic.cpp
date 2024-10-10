#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> names = {"james", "Jenny","Woody","Undir"};
    for (int i = 0; i<names.size();++i)
        cout<<names[i]<<endl;
}