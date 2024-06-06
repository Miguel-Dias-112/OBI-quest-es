#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(void) {
    int c; cin>> c;
    int* camisas = new int[c];

    int contP=0;
    int contM=0;
    for (int i = 0; i < c; i++){
        int cam; cin>>cam;

        if (cam==1){
           contP++;
        }
        if (cam==2)
        {
            contM++;
        }
        
        
    }
    int P; cin>>P;
    int M; cin>>M;

    if (contM == M && contP==P)
    {
        cout<<"S";
    }else{
        cout<<"N";
    }
    cout<<endl;
    
    
    return 0;

}
