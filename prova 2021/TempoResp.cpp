#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

struct Entradas
{
    int amigo = 0;
    char tipo = 'x';
};
int amigos[100] ={};
int tempos[100]={};
int main(void) {
    int x; cin>>x;
    Entradas* entradas = new Entradas[x];
    for (int i = 0; i < x; i++){
        cin >> entradas[i].tipo;
        cin >> entradas[i].amigo;
    }

    for (int i = 0; i < x; i++){
        if( entradas[i].tipo == 'R' ){
            int index = entradas[i].amigo;
            int tempo = 0;
            bool gambiarra = false;

            int indexP =entradas[i].tipo;
            char tipoP = entradas[i].amigo;

            bool fechou = false;
            for (int z = i; z < x; z++){
                char tipoF = entradas[z].tipo;
                char indexF = entradas[z].amigo;

                

                if(( (tipoF=='R' || tipoF=='E' ) && (tipoP=='R' || tipoP=='E' )  )   ){
                    tempo ++;
                }
               
                
                if(tipoF=='T' && indexF!=index){
                    tempo+=indexF;
                }
                if(tipoF=='E' && indexF==index){
                    fechou = true;
                    tempos[index]+=tempo;
                    break;
                }

                tipoP = entradas[z].tipo;
                indexP  = entradas[i].amigo;
            }
            cout<<"fechou"<<fechou<<endl;
            if (fechou==false  ){
                tempos[index]=-1;
            }
            

        }
        
        
        
    }
    cout<<"=======resultado======"<<endl;
    for (int i = 0; i < 100; i++)
    {
       
        if(tempos[i]!=0 ){
            if( tempos[i]==-1){
                cout<<"aoba"<<endl;
            }else{
                cout<<i<<" "<<tempos[i]<<endl;
            }

            
        }
    }
    
    
    

    
    return 0;

}
