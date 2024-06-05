#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int resultado(int vitorias){
    if (vitorias==5||vitorias==6)
    {
        return 1;
    }
    if (vitorias==3||vitorias==4)
    {
        return 2;
    }
    if (vitorias==1||vitorias==2)
    {
        return 3;
    }
    return -1;
    
}
int main(void) {
    int vitorias =0;
    for (int i = 0; i < 6; i++)
    {
        char x; cin>>x;
        if (x=='V'){
           vitorias++;
        }

        
        
    }
    cout<<resultado(vitorias)<<endl;
    
    return 0;

}
