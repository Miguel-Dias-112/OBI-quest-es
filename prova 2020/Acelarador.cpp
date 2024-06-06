#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(void) {
    int dist;
    cin>>dist;

    dist -=5;
    for (int i = 0; 3 < dist; i++)
    {
        dist-=8;
    }
    cout<<dist;
    return 0;

}
