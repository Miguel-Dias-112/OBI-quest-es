#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int val1, val2;
bool checaDupla(char padrão[3], string letras, int tam){
    int incidencia =0;

  for (int i = 0; i < tam; i+=3){
    string num = {letras[i], letras[i+1], letras[i+2]};
    if (num[0]==padrão[0] && num[1]==padrão[1] && num[2]==padrão[2] )
    {

      incidencia++;
    }

    
    
  }
  if (incidencia>1)
    {
      return true;
    }
  return false;
}
int main(void) {
  // lê as duas vals
  string teste;
  
  getline(cin,teste);
  
  int tam = teste.length();
  int Copas = 0;
  int Espadas = 0;
  int Ouros = 0;
  int Paus = 0;

  int baralho[4] = {Copas,Espadas,Ouros,Paus};

  for (int i = 0; i < tam; i+=3)
  {
      char padrão[3] =  {teste[i], teste[i+1], teste[i+2]};
      string num = {teste[i], teste[i+1]};
      int numero = stoi(num);
      int naipe = teste[i+2];
      bool duplicado = checaDupla( padrão , teste, tam);

      switch (naipe)
      {
      case 'P':
        if (duplicado){
          baralho[3] -= 1000;
        }
        
        baralho[3] += 1;
        break;
      case 'C':
       if (duplicado){
          baralho[0] -= 1000;
        }
        baralho[0] += 1;
        break;
      case 'U':
       if (duplicado){
          baralho[2] -= 1000;
        }
        baralho[2] += 1;
        break;
      case 'E':
       if (duplicado){
          baralho[1] -= 1000;
        }
        baralho[1] += 1;
      default:
        break;
      }
  }

  cout<<endl;
  for (int i = 0; i < 4; i++)
  {
    int elem = baralho[i];
    if (elem <0)
    {
      cout<<"erro"<<endl;
    }else{
      cout<<13-elem<<endl;

    }
    

    
  }
  // termina a execução
  return 0;
}
