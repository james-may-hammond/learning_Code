#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<double> temps;
    for (double temp; cin>>temp;)
        temps.push_back(temp);
    sort(temps.begin(),temps.end());
    cout<<"Median Temp: "<<temps[temps.size()/2];
}