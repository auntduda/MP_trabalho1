// Aluna: Maria Eduarda Carvalho Santos
// Matricula: 190092556
// Campus: Darcy Ribeiro, UnB
// Semestre: 2022.2

// Problema: O objetivo deste trabalho é utilizar o desenvolvimento orientado a testes (TDD) para verificar se um tabuleiro
// contém a solução para o problema das 8 rainhas. Não é necessário encontrar uma solução. O objetivo é apenas verificar se a
// entrada é uma solução. Neste problema se verifica nenhuma das rainhas ataca as outras

#include<bits/stdc++.h>

//#define macro to optimize the input and output time complexity (na real, nao precisava desse define, mas fiquei noiada)
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

//Variaveis Globais -------------------------------------------------------------------------------------------
int mat[8][8];
vector<pair<int,int>> posRainha;
// ------------------------------------------------------------------------------------------------------------

// bool testaColuna()
// {

// }

// bool testaDiagonal()
// {
    // for(int i=0; i<8; i++)
    // {
    //     for(int j=0; j<8; j++)
    //     {

    //     }
    // }

// }

// bool testaLinha()
// {
    
// }

// funcao que testa se o tabuleiro de entrada eh valido ou nao
bool entradaEhValida(string str){
    
    // se a entrada nao conter 8 rainhas, a entrada eh invalida
    if(posRainha.size()!=8) return true;
   
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            // se algum caractere da matriz for diferente de 0 ou 1, a entrada eh invalida
            if(mat[i][j]!=1 && mat[i][j]!=0) return true;
        }
    }

    // nao encontrou nenhum problema ao longo do tabuleiro
    return false;
}

int main()
{optimize;

    int row=0, column=0;
    string s;

    while(cin >> s)                                                 // fazendo leitura de arquivo
    {
        for(int i=0; i<s.size(); i++)
        {
            // tranformando a entrada em numeros inteiros
            mat[row][column] = abs('9' - s[i] - 9);
            column++;
            
            if(column==8)
            {
                row++; column=0;
            }
        }        

    }

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(mat[i][j]==1)
            {
                posRainha.push_back(make_pair(i,j));                // fazendo a contagem de rainhas do tabuleiro, junto de suas respectivas posicoes
            }
        }
    }

    if(entradaEhValida(s))
    {
        cout << "O tabuleiro nao esta no formato correto.\n";
    }else{
        cout << "Entrada valida\n";
    }
    
    return 0;
}
