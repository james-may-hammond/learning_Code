#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int n, t;
    cin >> n >> t;
    cin.ignore();
    string queue;
    getline(cin, queue);
    for (int i = 0; i < t; i++) 
    {
        for (int j = 0; j < n - 1; j++) 
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G') 
            {
                swap(queue[j], queue[j + 1]); // swapping 'B' and 'G'
                j++; // skip next index since the pair is already swapped
            }
        }
    }
    cout << queue << endl;
    return 0;
}
