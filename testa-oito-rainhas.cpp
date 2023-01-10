// Aluna: Maria Eduarda Carvalho Santos
// Matricula: 190092556
// Campus: Darcy Ribeiro, UnB
// Semestre: 2022.2

// Problema: 

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


bool testaTabuleiro(string str){
    if(posRainha.size()!=8) return true;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(mat[i][j]!=1 || mat[i][j]!=0) return true;
        }
    }

    return false;
}

int main()
{optimize;

    int row=0, column=0;
    string s;

    while(cin >> s)
    {
        for(int i=0; i<s.size(); i++)
        {
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
                posRainha.push_back(make_pair(i,j));
            }
        }
    }

    if(testaTabuleiro(s))
    {
        cout << "O tabuleiro nao esta no formato correto.\n";
    }else{
        cout << "deu ruim a testaTabuleiro\n";
    }
    
    return 0;
}