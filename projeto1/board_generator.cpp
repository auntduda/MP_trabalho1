#include<bits/stdc++.h>

using namespace std;

// #ifdef RAND_MAX
// #define RAND_MAX = 32767;
// #endif

int main()
{
    srand(time(0));

    int n=7, queens=8;

    while(n--)
    {
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                int num = rand()%2;

                if(num==1)
                {
                    if(queens==0)
                    {
                        num=0;
                    }else
                    {
                        queens--;
                    }
                }
                
                cout << num;
            }
            cout << endl;
        }
        cout << endl;
        queens=8;
    }

    return 0;
}