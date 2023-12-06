#include "assi.h"

struct sudoku1 {
  int val_ini, val_new; /a matriz val_ini recebe o valor inicial e val_new recebe os valores inseridos pelo jogador/
  int matriz; /matriz recebe a matriz que será mostrada para o jogador já com os espaços em branco/
};

int main() {

  auto começar = steady_clock::now(); /auto para o compilador deduzir o tipo da variavel e o steady_clock now pega o tempo agora/

  srand(time(NULL));

  sudoku1 matriz[9][9];

  matriz[0][0].val_ini = 5;
  matriz[0][1].val_ini = 3;
  matriz[0][2].val_ini = 4;
  matriz[0][3].val_ini = 6;
  matriz[0][4].val_ini = 7;
  matriz[0][5].val_ini = 8;
  matriz[0][6].val_ini = 9;
  matriz[0][7].val_ini = 1;
  matriz[0][8].val_ini = 2;
  matriz[1][0].val_ini = 6;
  matriz[1][1].val_ini = 7;
  matriz[1][2].val_ini = 2;
  matriz[1][3].val_ini = 1;
  matriz[1][4].val_ini = 9;
  matriz[1][5].val_ini = 5;
  matriz[1][6].val_ini = 3;
  matriz[1][7].val_ini = 4;
  matriz[1][8].val_ini = 8;
  matriz[2][0].val_ini = 1;
  matriz[2][1].val_ini = 9;
  matriz[2][2].val_ini = 8;
  matriz[2][3].val_ini = 3;
  matriz[2][4].val_ini = 4;
  matriz[2][5].val_ini = 2;
  matriz[2][6].val_ini = 5;
  matriz[2][7].val_ini = 6;
  matriz[2][8].val_ini = 7;
  matriz[3][0].val_ini = 8;
  matriz[3][1].val_ini = 5;
  matriz[3][2].val_ini = 9;
  matriz[3][3].val_ini = 7;
  matriz[3][4].val_ini = 6;
  matriz[3][5].val_ini = 1;
  matriz[3][6].val_ini = 4;
  matriz[3][7].val_ini = 2;
  matriz[3][8].val_ini = 3;
  matriz[4][0].val_ini = 4;
  matriz[4][1].val_ini = 2;
  matriz[4][2].val_ini = 6;
  matriz[4][3].val_ini = 8;
  matriz[4][4].val_ini = 5;
  matriz[4][5].val_ini = 3;
  matriz[4][6].val_ini = 7;
  matriz[4][7].val_ini = 9;
  matriz[4][8].val_ini = 1;
  matriz[5][0].val_ini = 7;
  matriz[5][1].val_ini = 1;
  matriz[5][2].val_ini = 3;
  matriz[5][3].val_ini = 9;
  matriz[5][4].val_ini = 2;
  matriz[5][5].val_ini = 4;
  matriz[5][6].val_ini = 8;
  matriz[5][7].val_ini = 5;
  matriz[5][8].val_ini = 6;
  matriz[6][0].val_ini = 9;
  matriz[6][1].val_ini = 6;
  matriz[6][2].val_ini = 1;
  matriz[6][3].val_ini = 5;
  matriz[6][4].val_ini = 3;
  matriz[6][5].val_ini = 7;
  matriz[6][6].val_ini = 2;
  matriz[6][7].val_ini = 8;
  matriz[6][8].val_ini = 4;
  matriz[7][0].val_ini = 2;
  matriz[7][1].val_ini = 8;
  matriz[7][2].val_ini = 7;
  matriz[7][3].val_ini = 4;
  matriz[7][4].val_ini = 1;
  matriz[7][5].val_ini = 9;
  matriz[7][6].val_ini = 6;
  matriz[7][7].val_ini = 3;
  matriz[7][8].val_ini = 5;
  matriz[8][0].val_ini = 3;
  matriz[8][1].val_ini = 4;
  matriz[8][2].val_ini = 5;
  matriz[8][3].val_ini = 2;
  matriz[8][4].val_ini = 8;
  matriz[8][5].val_ini = 6;
  matriz[8][6].val_ini = 1;
  matriz[8][7].val_ini = 7;
  matriz[8][8].val_ini = 9;

  matriz[0][0].matriz = 5;
  matriz[0][1].matriz = 3;
  matriz[0][2].matriz = 4;
  matriz[0][3].matriz = 6;
  matriz[0][4].matriz = 7;
  matriz[0][5].matriz = 8;
  matriz[0][6].matriz = 9;
  matriz[0][7].matriz = 1;
  matriz[0][8].matriz = 2;
  matriz[1][0].matriz = 6;
  matriz[1][1].matriz = 7;
  matriz[1][2].matriz = 2;
  matriz[1][3].matriz = 1;
  matriz[1][4].matriz = 9;
  matriz[1][5].matriz = 5;
  matriz[1][6].matriz = 3;
  matriz[1][7].matriz = 4;
  matriz[1][8].matriz = 8;
  matriz[2][0].matriz = 1;
  matriz[2][1].matriz = 9;
  matriz[2][2].matriz = 8;
  matriz[2][3].matriz = 3;
  matriz[2][4].matriz = 4;
  matriz[2][5].matriz = 2;
  matriz[2][6].matriz = 5;
  matriz[2][7].matriz = 6;
  matriz[2][8].matriz = 7;
  matriz[3][0].matriz = 8;
  matriz[3][1].matriz = 5;
  matriz[3][2].matriz = 9;
  matriz[3][3].matriz = 7;
  matriz[3][4].matriz = 6;
  matriz[3][5].matriz = 1;
  matriz[3][6].matriz = 4;
  matriz[3][7].matriz = 2;
  matriz[3][8].matriz = 3;
  matriz[4][0].matriz = 4;
  matriz[4][1].matriz = 2;
  matriz[4][2].matriz = 6;
  matriz[4][3].matriz = 8;
  matriz[4][4].matriz = 5;
  matriz[4][5].matriz = 3;
  matriz[4][6].matriz = 7;
  matriz[4][7].matriz = 9;
  matriz[4][8].matriz = 1;
  matriz[5][0].matriz = 7;
  matriz[5][1].matriz = 1;
  matriz[5][2].matriz = 3;
  matriz[5][3].matriz = 9;
  matriz[5][4].matriz = 2;
  matriz[5][5].matriz = 4;
  matriz[5][6].matriz = 8;
  matriz[5][7].matriz = 5;
  matriz[5][8].matriz = 6;
  matriz[6][0].matriz = 9;
  matriz[6][1].matriz = 6;
  matriz[6][2].matriz = 1;
  matriz[6][3].matriz = 5;
  matriz[6][4].matriz = 3;
  matriz[6][5].matriz = 7;
  matriz[6][6].matriz = 2;
  matriz[6][7].matriz = 8;
  matriz[6][8].matriz = 4;
  matriz[7][0].matriz = 2;
  matriz[7][1].matriz = 8;
  matriz[7][2].matriz = 7;
  matriz[7][3].matriz = 4;
  matriz[7][4].matriz = 1;
  matriz[7][5].matriz = 9;
  matriz[7][6].matriz = 6;
  matriz[7][7].matriz = 3;
  matriz[7][8].matriz = 5;
  matriz[8][0].matriz = 3;
  matriz[8][1].matriz = 4;
  matriz[8][2].matriz = 5;
  matriz[8][3].matriz = 2;
  matriz[8][4].matriz = 8;
  matriz[8][5].matriz = 6;
  matriz[8][6].matriz = 1;
  matriz[8][7].matriz = 7;
  matriz[8][8].matriz = 9;

  for (int cont = 0; cont < 40; cont++) {
    int linha = rand() % 9;  // gera números aleatórios entre 0 e 8
    int coluna = rand() % 9; // gera números aleatórios entre 0 e 8
    matriz[linha][coluna].matriz = 32; // para a célula sorteada ficar com espaço em branco
  }

  char x, y;
 string name;
  cout << "                       SUDOKU                       " << endl;
  cout << "Tem conhecimento sobre as regras e o funcionamento do jogo?\n";
  cout << "DIGITE 'S' PARA SIM E 'N' PARA NÃO\n";
  cin >> y;
  while (y != 'S' && y != 'N' && y != 's' && y != 'n') {
    cout << "Digite S(para sim) ou N(para não)";
    cin >> y;
  }
  if (y == 'n' || y == 'N') {
    if (!system("clear")) {
    }
    cout << "------------------------REGRAS DO "
      "JOGO--------------------------------\n";
    cout << "A ideia principal do jogo é que o jogador preencha a tabela com "
            "números de 1 a 9, sem que haja quaisquer repetições de números na "
            "mesma linha, coluna e grade.\n";
    cout << "\nO ranking do jogo funciona de acordo com o tempo que o jogador "
            "utiliza para preencher todos os espaços em branco sem nenhuma "
            "repetição\n";
  }

  cout << "\nIMPORTANTE: As linhas e as colunas vão de 0 a 8" << endl;

  cout << endl << "Digite seu nome" << endl;
  setbuf(stdin, NULL);
  getline(cin, name);
  cout << "\nAperte em uma tecla para continuar" << endl;
  cin >> x;
  
  for (int lin = 0; lin < 9; lin++) {
    for (int col = 0; col < 9; col++) {
      if (matriz[lin][col].matriz == 32) {
        cout << (char)matriz[lin][col].matriz; // conversão de int para char
      } else {
        cout << matriz[lin][col].matriz;
      }
      cout << " |";
      if (col == 2 || col == 5) {
        cout << "| ";
      } else
        cout << " ";
    }
    if (lin != 8)
      cout << "\n-------------------------------------\n";
    if (lin == 2 || lin == 5)
      cout << "-------------------------------------\n";
  }
  int vidas = 3; // quantidade de vidas
  int n;
  for (n = 40; n > 0 && vidas > 0; n+=0) { /enquanto tiver espaços em branco e vidas, pode jogar/
    int linha, coluna;
    int num;
    cout << endl << "digite a linha: " << endl;
    cin >> linha;
    cout << "digite a coluna: " << endl;
    cin >> coluna;
    cout << "digite o número que deseja: " << endl;
    cin >> num;

    /para caso o jogador digitar um valor que não está em um espaço em branco a matriz/

    while (matriz[linha][coluna].matriz != 32) {
      cout << "\nERRO. DIGITE UM NÚMERO QUE COMPLETE OS ESPAÇOS EM BRANCO"
           << endl;
      cout << endl << "digite a linha: " << endl;
      cin >> linha;
      cout << "digite a coluna: " << endl;
      cin >> coluna;
      cout << "digite o número que deseja: " << endl;
      cin >> num;
    }

    matriz[linha][coluna].val_new = num; // adiciona o número digitado pelo jogador na matriz
    if (matriz[linha][coluna].val_new == matriz[linha][coluna].val_ini) {
      /se o número digitado for igual ao número na matriz original, limpe a tela/
      if (!system("clear")) {
      }

      matriz[linha][coluna].matriz = num; /o número inserido será adicionado na matriz mostrada na tela caso o jogador tenha acertado/
      n--;
      //cout << n;
      cout << "VOCÊ ACERTOU!\n" << endl;

      // printando a matriz novamente caso o jogador tenha acertado
      for (int lin = 0; lin < 9; lin++) {
        for (int col = 0; col < 9; col++) {
          if (matriz[lin][col].matriz == 32) {
            cout << (char)matriz[lin][col].matriz;
          } else {
            cout << matriz[lin][col].matriz;
          }
          cout << " |";
          if (col == 2 || col == 5) {
            cout << "| ";
          } else
            cout << " ";
        }
        if (lin != 8)
          cout << "\n-------------------------------------\n";
        if (lin == 2 || lin == 5)
          cout << "-------------------------------------\n";
      }
    } else {
      // caso o jogador tenha digitado o número errado
      if (vidas == 0) {
        cout << "VOCÊ PERDEU" << endl;
        break;
      } else {
        vidas--;
        cout << "você errou" << endl << "VOCÊ TEM " << vidas << " VIDA(S)";
      }
    }
  }
  if (vidas > 0 && n == 0) {
    cout << "\nTempo de duração da partida em segundos: " << endl;
    auto acabou = steady_clock::now();
    auto total = acabou - começar; // dá a difereança dos dois tempos
    int time = duration_cast<seconds>(total).count(); // comando que converte de nanosegundos para segundos
    cout << time;

    ofstream fout;
    fout.open("fileRanking.csv", ios_base::out | ios_base::app);
    fout << name << " " << duration_cast<seconds>(total).count() << endl;
    fout.close();
  }
  ifstream ler("fileRanking.csv");
  if (!ler.is_open()) {
    cout << "erro" << endl;
  }
  string lin;
  vector<string> arquivolin;
  while (getline(ler, lin)) {
    arquivolin.push_back(lin); // push vai colocar dentro do vetor de string
    // arquivolin as strings lin lidas
  }
  sort(arquivolin.begin(), arquivolin.end(), [](string i, string j) {
    return tira(i) < tira(j);
  }); /[] é o inicio de uma lambada que é uma função anônima que pode ser definida diretamente no local onde vai precisar dela. ela recebe como parametro duas strings que terão os valores extraidos pala funão tira e comparados. Serão strings consecutivas do vector arquivolin que serão ordenadas begin se refere ao intervalo de inicio e fim de arquivolin/
  ler.close();
  cout << endl;
  cout << "-------------------RANKING-------------------" << endl;
  for (const auto &ordenadalin : arquivolin) { /fiz passagem por referencia para evitar erros a variavel é auto para o pc fazer a dedução.Essa variável vai percorrer o vector arquivolin que já foi ordenado e imprimir as linhas ordenadas/
    cout << ordenadalin << endl;
  }
}
