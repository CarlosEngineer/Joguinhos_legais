#include<iostream>
#include<cstdlib>
#include<string>
#include<map>
#include<vector>
using namespace std;

// declarando as variaveis globais;
const string PALAVRA_SECRETA = "MELANCIA";
map<char , bool>chutou;
vector<char>chutes_errados; 



bool letra_existe(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }

    return false;

}



int main(){

    // titulo;

cout << "*******************************" << endl;
cout <<"Bem-vindo ao jogo da forca" << endl;
cout <<"*******************************" << endl;
cout << endl;

bool nao_acertou = true;
bool nao_enforcou = true;

while(nao_acertou && nao_enforcou){
    cout << "Chutes errados: ";
    for(char letra:chutes_errados){
        cout << letra << " ";
    }
    cout << endl;


    for(char letra : PALAVRA_SECRETA){
        if(chutou[letra]){
            cout << letra <<  " ";
        }
        else
        {
            cout << "_";
            
        }
        
    }
     cout << endl;

    char chute; 
    cout << "Digite uma letra: ";
    cin >> chute; 

    chutou[chute] = true;
    cout << " esse foi o seu chute - " << chute << endl; 

    if(letra_existe(chute)){
        cout << "Voce acertou!" << endl;
    }else{
        cout << "Voce errou!" << endl; 
        chutes_errados.push_back(chute);
    }
    cout << endl;

}

}