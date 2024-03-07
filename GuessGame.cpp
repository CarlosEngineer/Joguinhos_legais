#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



int main (){

cout << "*******************************" << endl;
cout <<"Hello to the Guess Game!" << endl;
cout <<"*******************************" << endl;

cout <<" Escolha o nivel de dificuldade: " << endl;
cout <<" Facil (F), Medio(M) ou Dificil (D) " << endl;

char dificuldade;
cin >> dificuldade;
int numero_de_tentaivas;

if(dificuldade == 'F')
{
    numero_de_tentaivas = 15; 
}
else if(dificuldade == 'M'){
    numero_de_tentaivas = 10; 
}else{
    numero_de_tentaivas = 5; 
}

srand(time(0));
const int  NUMERO_SECRETO = rand() % 100;

bool nao_acertou = true; 
int tentativas = 0;
double pontos = 1000.0; 

for(tentativas=1; tentativas <= numero_de_tentaivas; tentativas++){

    int chute;

    cout << "Numero de tentativas - " << tentativas << endl; 
    cout << "Digite seu chute: " << endl;

    cin >> chute; 


    double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0; 
    pontos = pontos - pontos_perdidos;
   

    bool acertou = chute == NUMERO_SECRETO; 
    bool maior = chute > NUMERO_SECRETO;

    if (acertou)
    {
        cout << chute << " Parabens, voce acertou!" << endl; 
        nao_acertou = false; 
        break;  
    }
    else if(maior) 
    {
        cout << chute <<" Seu chute foi maior que o numero secreto" << endl; 
    }
    else
    {
        cout << chute << " Seu chute foi menor que o numero secreto!" << endl; 
    }

}

/*finalizando o jogo*/

cout << "Fim de jogo..." << endl;

if(nao_acertou)

{
    cout << "Voce perdeu! :( tente novamente." <<endl;
}
else

{
cout << "Voce terminou o jogo com o total de " << tentativas << " tentativas! " << endl;
cout.precision(2);
cout << fixed;
cout << "Sua Pontuacao foi de - " << pontos << endl;

}



 




}

