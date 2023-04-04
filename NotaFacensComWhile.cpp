#include <iostream>//Puxando uma biblioteca externa para receber valor do usuario
#include <stdlib.h>//incluindo biblioteca externa
#include <string> //chamando biblioteca externa de string
using namespace std;//incluindo biblioteca padrão

int main() { //abrindo  a estrutura do codigo principal
    int ra; //definindo aa variavel do RA
    double ac1, ac2, ag, af; //definindo as variaveis
    char cont = 's'; //definindo variavel para repetição
    string nome; //Definindo a variavel string
    
    
    while(cont == 's' || cont == 'S'){
    cout <<"Qual o seu nome?" <<endl; //mensagem na interface do usuario
    cin >> nome; //solicitando o nome do usuario
    cout <<"Qual o seu RA?" <<endl;
    cin >> ra; //Solicitando o RA do usuario
    cout << "Digite sua AC1:" << endl; //mensagem na interface do usuario
    cin >> ac1; //solicitando o valor da ac1
    cout << "Digite sua AC2:" << endl;//mensagem na interface do usuario
    cin >> ac2;//solicitando o valor da ac2
    cout << "Digite sua AG:" << endl;//mensagem na interface do usuario
    cin >> ag;//solicitando o valor da ag    
    cout << "Digite sua Avaliação Final:" << endl;//mensagem na interface do usuario
    cin >> af;//solicitando o valor da af
    
    ac1 = (ac1 * 0.15); //definindo o peso de 1,5
    ac2 = (ac2 * 0.35); //definindo o peso de 3,5
    ag = (ag * 0.1);
    af = (af * 0.4); //definindo o peso de 5
    
    double soma = (ac1 + ac2 + af + ag); //somando as notas
    
    if(soma > 5){ //se a nota for maior que 5
        cout << "Aluno: " << nome << endl << "RA: " << ra <<endl; //Mensagem para o usuario
        cout << "Parabens você passou com: "<< soma<< endl; //mensagem para o usuario
    }
    else if(soma == 5){ //se a nota for exatamente 5
    cout << "Aluno: " << nome << endl << "RA: " << ra <<endl; //Mensagem para o usuario
        cout << "Quase morreu na praia com: " << soma<< endl;//mensagem para o usuario
    }
    else if(soma >= 3 && soma <5 ) { //se a nota for menor que 5
    cout << "Aluno: " << nome << endl << "RA: " << ra <<endl; //Mensagem para o usuario
     cout << "Você esta de recuperação: " << soma << endl;   //mensagem para o usuario
    }
    else{
        cout << "Aluno: " << nome << endl << "RA: " << ra <<endl; //Mensagem para o usuario
        cout << "Você foi reprovado: " << soma << endl;   //mensagem para o usuario
    }
    cout <<"Fazer o calculo novamente?(digite s ou S)"<<endl;
    cin >> cont;
    }
    return 0;
}
