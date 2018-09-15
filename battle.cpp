#include<iostream>
#include<stdlib.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

struct puzzle
{
    bool avalability;
    char content;    

};

puzzle board_gen(int tam)
{
    puzzle tab_aqua[tam][tam];
    
    for(int i=0; i < tam; i++)
    {
        for(int j=0; i < tam; j++ )
        {
            tab_aqua[i][j].avalability = true;
            tab_aqua[i][j].content = '-';
        }

    }

    return tab_aqua;
}


int main(int argc, char const *argv[])
{
    char *p;
    int tamanho_tabuleiro, numero_tabuleiros;
    tamanho_tabuleiro = strtol(argv[1], &p, 10);
    numero_tabuleiros = strtol(argv[2], &p, 10);

    puzzle tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro];
    
    tabuleiro = board_gen(tamanho_tabuleiro);

    for(int i=0; i < tamanho_tabuleiro; i++)
    {
        for(int j=0; i < tamanho_tabuleiro; j++ )
        {
           std::cout << tabuleiro[i][j].content;
        }

    }

    /*std::cout << tamanho_tabuleiro << "\n";
    std::cout << numero_tabuleiros << "\n";
    std::cout << argc <<"\n";
    */

    return 0;
}
