#include <iostream>
#include <string>

using namespace std;


int insereVetor(int elemento, int valorMax, int lastPos, int Vetor[]){
  
  Vetor[lastPos + 1] = elemento;

  if (valorMax <= lastPos +1){
 
    cout << "Erro: valorMax: 10" << valorMax << "lastPos + 1 (indice): 10" << valorMax << endl;
  }


  return 0;

}




// Descomente a função main abaixo para testar o exercício 3
int main(){
  int valorMax = 10;
  int lastPos = -1;
  int Numbers[valorMax];
  insereVetor(9, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(8, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(7, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(6, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(5, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(4, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(3, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(2, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(1, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(0, valorMax, lastPos, Numbers);
  lastPos = lastPos + 1;
  insereVetor(100, valorMax, lastPos, Numbers);
  // valor esperado: mensagem de erro "Erro: valorMax: 10, lastPos + 1 (indice): 10"
  cout << Numbers[0] << endl; // valor esperado: 9
  cout << Numbers[1] << endl; // valor esperado: 8
  cout << Numbers[2] << endl; // valor esperado: 7
  cout << Numbers[3] << endl; // valor esperado: 6
  cout << Numbers[4] << endl; // valor esperado: 5
  cout << Numbers[5] << endl; // valor esperado: 4
  cout << Numbers[6] << endl; // valor esperado: 3
  cout << Numbers[7] << endl; // valor esperado: 2
  cout << Numbers[8] << endl; // valor esperado: 1
  cout << Numbers[9] << endl; // valor esperado: 0
}