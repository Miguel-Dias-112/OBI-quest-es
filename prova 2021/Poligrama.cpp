#include <iostream>
#include <string>
#include <cmath>
using namespace std;    

bool anagramfinder( string raiz, string word,int n){
    if(n==raiz.length()){
        return true;
    }
    if (word.find(raiz[0]) != string::npos ){
        string nword =  word.substr(1,word.length()-1);
        return anagramfinder(raiz, nword,n+1);
    }else{
        return false;
    }
}
int main(void) {
    string poligrama="xxxx";
    getline(cin,poligrama);
    int tam = poligrama.length();
    string raiz = poligrama.substr(0,tam/2);
    string anagrama =  poligrama.substr(tam/2,tam);
   bool a = anagramfinder(raiz,anagrama,0);
    if (a==true)
    {
        cout<<raiz<<endl;
    }else{
        cout<<"*";

    }
    return 0;
}
