#include<bits/stdc++.h>

#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

bool testaTabuleiro(string str){
    if(str.size()!=64 || count(str, str+str.size(), "1")!=8) return true; //problemas na funcao count - encontrar outra solucao para encontrar os caracteres '1'
    else return false;
}

int main()
{optimize;

    int mat[8][8];
    int row=0, column=0;
    string s;

    while(cin >> s)
    {
        if(testaTabuleiro(s))
        {
            cout << "O tabuleiro nao esta no formato correto.\n";
        }else{
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
    }

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    
    return 0;
}