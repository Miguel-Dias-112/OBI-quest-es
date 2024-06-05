#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void imprime(int* vet, int tam){
    cout<<"[";
    for (int i = 0; i < tam; i++)
    {
        cout<<vet[i]<<", ";
    }
    cout<<"]"<<endl;
    
}
void encheZero(int* vet, int tam){
    for (int i = 0; i < tam; i++)
    {
        vet[i]=0;
    }
    
}
int main(void) {
    int interacoes; cin>>interacoes;
    int* falas = new int[interacoes];
    int soma = 0;
    encheZero(falas,interacoes);
    imprime(falas,interacoes);

    int index =0;

    for (int i = 0; i < interacoes; i++){
        int ipt;
        cin>>ipt;
        if (ipt == 0 && index != 0 ){
            index--;
            falas[index]=0;
        }else{
            falas[index]=ipt;
            index++;
        }
        imprime(falas,interacoes);
        
    }


    imprime(falas,interacoes);
    for (int i = 0; i < interacoes; i++){
        soma += falas[i];
    }
    
    cout<<soma<<endl;
    
    
    return 0;

}
