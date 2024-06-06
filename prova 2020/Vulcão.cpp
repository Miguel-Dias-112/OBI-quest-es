#include <iostream>
#include <string>
#include <cmath>

using namespace std;
void imprimematriz(string mapa[500], int x){
    cout<<"========"<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<mapa[i];
        cout<< endl;
    }
    
}
void checaPos(string mapa[500], char forca, int x, int y, int tam){
  
    int tam2 = mapa[0].size();
    if (x>0 && x<tam && y>tam2 && y<tam2){
        /* code */
    }
    
    string _mapa[tam2];
    for (int i = 0; i < tam2; i++)
    {
        _mapa[i]=mapa[i];
    }
    
    if (x+1<tam){
        char D = mapa[x+1][y];
        if ( D<= forca  && D!='*'){
            mapa[x+1][y]='*';
            checaPos(mapa,forca,x+1,y,tam);
        }
    }
    if (y+1<tam2){
        char D = mapa[x][y+1];
       
        if ( D<= forca && D!='*' ){
            mapa[x][y+1]='*';

            checaPos(mapa,forca,x,y+1,tam);
        }
        
      
    }
   if (y-1>=0){
      char E = mapa[x][y-1];
        if ( E<= forca && E!='*'){
            mapa[x][y-1]='*';
            checaPos(mapa,forca,x,y-1,tam);
        }
   }
   
     if (x-1>=0){
      char E = mapa[x-1][y];
        if ( E<= forca && E!='*'){
            mapa[x-1][y]='*';
            checaPos(mapa,forca,x-1,y,tam);
        }
   }
   
    
    



    
    

}
int main(void) {
    int x;cin>> x;
    char forca;cin>>forca;
    cin.ignore();
    string mapa[500]={};
    for (int i = 0; i < x; i++)
    {
        getline(cin,mapa[i]);
       
    }

    checaPos(mapa,forca,0,0,x);
    imprimematriz(mapa,x);

    return 0;

}
