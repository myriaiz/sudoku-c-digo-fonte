#include "assi.h"
int tira(const string linha) { // a função que vai tira os números
  int come = 0;
  while (come < linha.size() && !isdigit(linha[come])) { /a seunda condição ver se a atual linha no começo tem um numero usando a função isdigit.A função procura o inicio dos numeros da string. se nao achar um numero ande/
    come++;
  }
  int ter = come;
  while (ter < linha.size() && isdigit(linha[ter])) { /a primeira condição verifica se ainda estamos dentro do limete de tamanho da string e a segunda vai procura o fim da dos números da string começando de onde come terminou que foi no inicio do número e ele anda até o fim do número/
    ter++;
  }
  if (come < ter) {
    return stoi(linha.substr(come, ter - come)); /converte a parte de digitos em inteiros com a funçao stoi que recebe como parametos da função substr que faz a delimitação dos caracteres a serem convertidos a delmitaçao começa da posição inicio que no caso é come e termina em ter/
  } else {
    return 0;
  }
}
