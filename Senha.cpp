#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int val1, val2;

int main(void) {
    int usr = 0;
    cin>>usr;

    string* senhas = new string[usr];
    int paresordenados = 0;
    cin.ignore();

    for (int i = -0; i < usr; i++){
        getline(cin,senhas[i]);
        
    }
 
    for (int x = 0; x < usr; x++)
    {
        for (int y = 0; y < usr; y++)
        {
            if(x==y){continue;}

            string senha1 = senhas[x];
            string senha2 = senhas[y];
            cout<<"senhas:"<<senha1<<" "<<senha2<<" "<<(senha2.find(senha1) != string::npos)<<endl;
            if (senha2.find(senha1) != string::npos ){
                paresordenados++;
            }
        }
        
    }
    cout<<paresordenados<<endl;
    return 0;
}
