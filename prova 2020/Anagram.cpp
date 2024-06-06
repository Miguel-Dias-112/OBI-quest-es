#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool anagramfinder( string raiz, string word,int n){
    if(n==raiz.length()){
        return true;
    }
    char letra= word[0];
    
    bool achou = raiz.find(word[0]) != string::npos;
  
    
    if (achou == true || letra=='*'){
        string nword =  word.substr(1,word.length()-1);
        return anagramfinder(raiz, nword,n+1);
    }else{
        return false;
    }
}
int main(void) {
    string x ="microfone";
    string y = "*conform*";
    
    if (anagramfinder(x,y,0))
    {
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;

    }
    

    return 0;

}
