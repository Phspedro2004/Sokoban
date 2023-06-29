#include <iostream>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

#define a 0
#define p 1
#define s 2
#define c 3
#define o 4
#define t 5
#define M1 6
#define M2 7
#define M3 8
#define M4 9
#define M5 10
#define M6 11
#define Comp 12


using namespace std;


int main()
{

 int tudoRodando = 1;
    while (tudoRodando == 1) {

    ///RODA OS NIVEIS MULTIPLAS VEZES
    int jogoRodando = 1;

    ///CHECK LVL COMPLETO
    int Nivel1 = 0;
    int Nivel2 = 0;
    int Nivel3 = 0;
    int Nivel4 = 0;
    int Nivel5 = 0;
    int Nivel6 = 0;

    ///MENU INICIAL
    int menuAtivo = 1;
    if (menuAtivo == 1){
            system("cls");
    cout << "1] JOGAR \n";
    cout << "2] INSTRUCOES \n";
    cout << "3] CREDITOS\n";
    cout << "4] SAIR \n";
    }

    while (jogoRodando == 1) {
    ///CONTROLE DE JOGO
    int R_apertado = 0;

    ///nivel 1
    int gameLoop1 = 0;

    ///nivel 2
    int gameLoop2 = 0;

    ///nivel 3
    int gameLoop3 = 0;

    ///nivel 4
    int gameLoop4 = 0;

    ///nivel 5
    int gameLoop5 = 0;

    ///nivel 6
    int gameLoop6 = 0;

    ///seleção niveis
    int LVLSelect = 0;
    int LVLEscolha = 0;

    ///FINALIZAR JOGO
    int endGame = 0;

    int TeclaTake;
    TeclaTake=getch();
    if(TeclaTake=='1'){
        LVLSelect = 1;
        ///SELEÇÃO DE MAPAS
        int niveis[9][9] {
        1,1,1,1,1,1,1,1,1,
        1,0,0,0,0,0,0,0,1,
        1,0,6,0,7,0,8,0,1,
        1,0,0,0,0,0,0,0,1,
        1,0,9,0,10,0,11,0,1,
        1,0,0,0,0,0,0,0,1,
        1,1,1,1,1,1,1,1,1,
        };

        ///INICIO SELEÇÃO NIVEIS
        while (LVLSelect == 1) {
                system("cls");
        cout << "ESCOLHA UM NIVEL\n" << endl;

        int linH,colH;
        int linhaH = 1, colunaH = 1;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (linH=0;linH<9;linH++) {
            for (colH=0;colH<9;colH++) {
                    if(niveis[linH][colH]==a) cout << "  ";
                    if(niveis[linH][colH]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(niveis[linH][colH]==M1) {
                        if (Nivel1 == 0) {
                            cout << " 1";
                        }
                        else{
                            SetConsoleTextAttribute(r,3);
                            cout << " 1";
                            SetConsoleTextAttribute(r,10);
                        }
                    }

                    if(niveis[linH][colH]==M2) {
                        if (Nivel2 == 0) {
                            cout << " 2";
                        }
                        else{
                            SetConsoleTextAttribute(r,3);
                            cout << " 2";
                            SetConsoleTextAttribute(r,10);
                        }
                    }
                    if(niveis[linH][colH]==M3) {
                        if (Nivel3 == 0) {
                            cout << " 3";
                        }
                        else{
                            SetConsoleTextAttribute(r,3);
                            cout << " 3";
                            SetConsoleTextAttribute(r,10);
                        }
                    }
                    if(niveis[linH][colH]==M4) {
                    if (Nivel4 == 0) {
                            cout << " 4";
                        }
                        else{
                            SetConsoleTextAttribute(r,3);
                            cout << " 4";
                            SetConsoleTextAttribute(r,10);
                        }
                    }
                    if(niveis[linH][colH]==M5) {
                    if (Nivel5 == 0) {
                            cout << " 5";
                        }
                        else{
                            SetConsoleTextAttribute(r,3);
                            cout << " 5";
                            SetConsoleTextAttribute(r,10);
                        }
                    }
                    if(niveis[linH][colH]==M6) {
                        if (Nivel6 == 0) {
                            cout << " 6";
                        }
                        else{
                            SetConsoleTextAttribute(r,3);
                            cout << " 6";
                            SetConsoleTextAttribute(r,10);
                        }
                    }
                    SetConsoleTextAttribute(r,8);
                    if(niveis[linH][colH]==t) cout << "[]";
                    if(niveis[linH][colH]==Comp) cout << "[]";
                    SetConsoleTextAttribute(r,7);


                }
                printf("\n");
        }
            LVLSelect = 0;

    }
        printf("\n");
        cout << "Nivel: ";
        cin >> LVLEscolha;

            }
    switch (LVLEscolha) {
        ///INICIO NIVEL 1
        case 1:
        system("cls");
        gameLoop1 = 1;

        ///MAPA 1
        while (gameLoop1 == 1) {
        int linha = 6, coluna = 2;

        int mapa[21][21] {
        0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,3,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,1,0,0,4,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,


    };

        int TeclaPress,Saida=0;
        int lin,col;
        int pontos = 0;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++) {
              if(lin==linha && col==coluna) {
                    cout << char(219) << char (219);
              }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);


                }
        }
            printf("\n");

    }
        printf("\n\n");

        while (Saida == 0) {
            TeclaPress=getch();
            if(TeclaPress=='r' || TeclaPress=='R'){
            gameLoop1 = 0;
            Saida = 0;
            R_apertado = 1;
            break;

            }
            if(TeclaPress=='w' || TeclaPress=='W'){
                linha--;
                ///se tiver caixa x parede PARAR
                if(mapa[linha][coluna]==c && mapa[linha-2][coluna]==p) linha+2;

                ///SITUAÇÕES COM CAIXA
                if(mapa[linha][coluna]==c) {
                    ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                    if (mapa[linha-1][coluna]==p || mapa[linha-1][coluna]==t || mapa[linha-1][coluna]==c) {
                        linha++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha-1][coluna] == 0 ) {
                        mapa[linha-1][coluna] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha-1][coluna]==o) {
                        mapa[linha-1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha++;

            }
            if(TeclaPress=='a' || TeclaPress=='A'){
                coluna--;

                ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna-1]==p || mapa[linha][coluna-1]==t || mapa[linha][coluna-1]==c) {
                        coluna++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha][coluna-1] == 0 ) {
                        mapa[linha][coluna-1] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha][coluna-1]==o) {
                        mapa[linha][coluna-1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) coluna++;
            }
            if(TeclaPress=='s' || TeclaPress=='S'){
                linha++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha+1][coluna]==p || mapa[linha+1][coluna]==t || mapa[linha+1][coluna]==c) {
                        linha--;
                    }
                    if (mapa[linha+1][coluna] == 0 ) {
                        mapa[linha+1][coluna] = 3;
                    }

                    if (mapa[linha+1][coluna]==o) {
                        mapa[linha+1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha--;
            }
            if(TeclaPress=='d' || TeclaPress=='D'){
                coluna++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna+1]==p || mapa[linha][coluna+1]==t || mapa[linha][coluna+1]==c) {
                        coluna--;
                    }
                    if (mapa[linha][coluna+1] == 0 ) {
                        mapa[linha][coluna+1] = 3;
                    }

                    if (mapa[linha][coluna+1]==o) {
                        mapa[linha][coluna+1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t)
                {
                        coluna--;
                }
            }
            if(pontos >= 1) Saida++;
            system("cls");

        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++)
                {
              if(lin==linha && col==coluna)
                {
                    cout << char(219) << char (219);
                }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                   SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);



                    }
                }
            printf("\n");

        }
        printf("\n\n");

        }


        gameLoop1 = 0;
        system("cls");
        if (R_apertado != 1) {
            Nivel1 = 1;
            cout << ("####################\n");
            cout << ("#! Voce conseguiu !#\n");
            cout << ("####################\n\n");
        }

            cout << "1] JOGAR \n";
            cout << "2] INSTRUCOES \n";
            cout << "3] CREDITOS\n";
            cout << "4] SAIR \n";
        }
        break;

        ///INICIO NIVEL 2
        case 2:
        system("cls");
        gameLoop2 = 1;
        ///MAPA 2
        while (gameLoop2 == 1) {
        int linha = 6, coluna = 3;

        int mapa[21][21] {
        1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,3,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,1,3,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,1,3,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,
        0,1,0,0,0,1,1,1,1,4,4,4,1,0,0,0,0,0,0,0,0,
        0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
        0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,


    };

        int TeclaPress,Saida=0;
        int lin,col;
        int pontos = 0;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++) {
              if(lin==linha && col==coluna) {
                    cout << char(219) << char (219);
              }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);


                }
        }
            printf("\n");

    }
        printf("\n\n");

        while (Saida == 0) {
            TeclaPress=getch();
            if(TeclaPress=='r' || TeclaPress=='R'){
            gameLoop1 = 0;
            Saida = 0;
            R_apertado = 1;
            break;

            }
            if(TeclaPress=='w' || TeclaPress=='W'){
                linha--;
                ///se tiver caixa x parede PARAR
                if(mapa[linha][coluna]==c && mapa[linha-2][coluna]==p) linha+2;

                ///SITUAÇÕES COM CAIXA
                if(mapa[linha][coluna]==c) {
                    ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                    if (mapa[linha-1][coluna]==p || mapa[linha-1][coluna]==t || mapa[linha-1][coluna]==c) {
                        linha++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha-1][coluna] == 0 ) {
                        mapa[linha-1][coluna] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha-1][coluna]==o) {
                        mapa[linha-1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha++;

            }
            if(TeclaPress=='a' || TeclaPress=='A'){
                coluna--;

                ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna-1]==p || mapa[linha][coluna-1]==t || mapa[linha][coluna-1]==c) {
                        coluna++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha][coluna-1] == 0 ) {
                        mapa[linha][coluna-1] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha][coluna-1]==o) {
                        mapa[linha][coluna-1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) coluna++;
            }
            if(TeclaPress=='s' || TeclaPress=='S'){
                linha++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha+1][coluna]==p || mapa[linha+1][coluna]==t || mapa[linha+1][coluna]==c) {
                        linha--;
                    }
                    if (mapa[linha+1][coluna] == 0 ) {
                        mapa[linha+1][coluna] = 3;
                    }

                    if (mapa[linha+1][coluna]==o) {
                        mapa[linha+1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha--;
            }
            if(TeclaPress=='d' || TeclaPress=='D'){
                coluna++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna+1]==p || mapa[linha][coluna+1]==t || mapa[linha][coluna+1]==c) {
                        coluna--;
                    }
                    if (mapa[linha][coluna+1] == 0 ) {
                        mapa[linha][coluna+1] = 3;
                    }

                    if (mapa[linha][coluna+1]==o) {
                        mapa[linha][coluna+1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t)
                {
                        coluna--;
                }
            }
            if(pontos >= 3) Saida++;
            system("cls");

        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++)
                {
              if(lin==linha && col==coluna)
                {
                    cout << char(219) << char(219);
                }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                   SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);



                    }
                }
            printf("\n");

        }
        printf("\n\n");

        }

         system("cls");
        gameLoop2 = 0;
        if (R_apertado != 1) {
            Nivel2 = 1;
            cout << ("####################\n");
            cout << ("#! Voce conseguiu !#\n");
            cout << ("####################\n\n");
        }
        cout << "1] JOGAR \n";
            cout << "2] INSTRUCOES \n";
            cout << "3] CREDITOS\n";
            cout << "4] SAIR \n";
        }
        break;

        ///NIVEL 3
        case 3:
        system("cls");
        gameLoop3 = 1;
        ///MAPA 3
        while (gameLoop3 == 1) {
        int linha = 4, coluna = 3;

        int mapa[21][21] {
        0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,1,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,3,3,0,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,1,4,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

    };

        int TeclaPress,Saida=0;
        int lin,col;
        int pontos = 0;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++) {
              if(lin==linha && col==coluna) {
                    cout << char(219) << char (219);
              }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);


                }
        }
            printf("\n");

    }
        printf("\n\n");

        while (Saida == 0) {
            TeclaPress=getch();
            if(TeclaPress=='r' || TeclaPress=='R'){
            gameLoop1 = 0;
            Saida = 0;
            R_apertado = 1;
            break;

            }
            if(TeclaPress=='w' || TeclaPress=='W'){
                linha--;
                ///se tiver caixa x parede PARAR
                if(mapa[linha][coluna]==c && mapa[linha-2][coluna]==p) linha+2;

                ///SITUAÇÕES COM CAIXA
                if(mapa[linha][coluna]==c) {
                    ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                    if (mapa[linha-1][coluna]==p || mapa[linha-1][coluna]==t || mapa[linha-1][coluna]==c) {
                        linha++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha-1][coluna] == 0 ) {
                        mapa[linha-1][coluna] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha-1][coluna]==o) {
                        mapa[linha-1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha++;

            }
            if(TeclaPress=='a' || TeclaPress=='A'){
                coluna--;

                ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna-1]==p || mapa[linha][coluna-1]==t || mapa[linha][coluna-1]==c) {
                        coluna++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha][coluna-1] == 0 ) {
                        mapa[linha][coluna-1] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha][coluna-1]==o) {
                        mapa[linha][coluna-1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) coluna++;
            }
            if(TeclaPress=='s' || TeclaPress=='S'){
                linha++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha+1][coluna]==p || mapa[linha+1][coluna]==t || mapa[linha+1][coluna]==c) {
                        linha--;
                    }
                    if (mapa[linha+1][coluna] == 0 ) {
                        mapa[linha+1][coluna] = 3;
                    }

                    if (mapa[linha+1][coluna]==o) {
                        mapa[linha+1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha--;
            }
            if(TeclaPress=='d' || TeclaPress=='D'){
                coluna++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna+1]==p || mapa[linha][coluna+1]==t || mapa[linha][coluna+1]==c) {
                        coluna--;
                    }
                    if (mapa[linha][coluna+1] == 0 ) {
                        mapa[linha][coluna+1] = 3;
                    }

                    if (mapa[linha][coluna+1]==o) {
                        mapa[linha][coluna+1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t)
                {
                        coluna--;
                }
            }
            if(pontos >= 3) Saida++;
            system("cls");

        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++)
                {
              if(lin==linha && col==coluna)
                {
                    cout << char(219) << char(219);
                }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                   SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);



                    }
                }
            printf("\n");

        }
        printf("\n\n");

        }

         system("cls");
        gameLoop3 = 0;
        if (R_apertado != 1) {
            Nivel3 = 1;
            cout << ("####################\n");
            cout << ("#! Voce conseguiu !#\n");
            cout << ("####################\n\n");
        }
            cout << "1] JOGAR \n";
            cout << "2] INSTRUCOES \n";
            cout << "3] CREDITOS\n";
            cout << "4] SAIR \n";
        }
        break;

        case 4:
        system("cls");
        gameLoop4 = 1;
        ///MAPA 4
        while (gameLoop4 == 1) {
        int linha = 6, coluna = 3;

        int mapa[21][21] {
        0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,1,3,1,0,0,1,0,1,1,1,1,1,0,0,0,0,0,
        1,0,0,0,0,3,0,1,0,1,1,1,4,4,4,1,0,0,0,0,0,
        1,1,3,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
        1,0,0,1,0,0,0,1,1,1,1,0,0,0,0,1,0,0,0,0,0,
        1,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,0,0,0,0,0,
        1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,


    };

        int TeclaPress,Saida=0;
        int lin,col;
        int pontos = 0;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++) {
              if(lin==linha && col==coluna) {
                    cout << char(219) << char (219);
              }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);


                }
        }
            printf("\n");

    }
        printf("\n\n");

        while (Saida == 0) {
            TeclaPress=getch();
            if(TeclaPress=='r' || TeclaPress=='R'){
            gameLoop1 = 0;
            Saida = 0;
            R_apertado = 1;
            break;

            }
            if(TeclaPress=='w' || TeclaPress=='W'){
                linha--;
                ///se tiver caixa x parede PARAR
                if(mapa[linha][coluna]==c && mapa[linha-2][coluna]==p) linha+2;

                ///SITUAÇÕES COM CAIXA
                if(mapa[linha][coluna]==c) {
                    ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                    if (mapa[linha-1][coluna]==p || mapa[linha-1][coluna]==t || mapa[linha-1][coluna]==c) {
                        linha++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha-1][coluna] == 0 ) {
                        mapa[linha-1][coluna] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha-1][coluna]==o) {
                        mapa[linha-1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha++;

            }
            if(TeclaPress=='a' || TeclaPress=='A'){
                coluna--;

                ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna-1]==p || mapa[linha][coluna-1]==t || mapa[linha][coluna-1]==c) {
                        coluna++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha][coluna-1] == 0 ) {
                        mapa[linha][coluna-1] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha][coluna-1]==o) {
                        mapa[linha][coluna-1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) coluna++;
            }
            if(TeclaPress=='s' || TeclaPress=='S'){
                linha++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha+1][coluna]==p || mapa[linha+1][coluna]==t || mapa[linha+1][coluna]==c) {
                        linha--;
                    }
                    if (mapa[linha+1][coluna] == 0 ) {
                        mapa[linha+1][coluna] = 3;
                    }

                    if (mapa[linha+1][coluna]==o) {
                        mapa[linha+1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha--;
            }
            if(TeclaPress=='d' || TeclaPress=='D'){
                coluna++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna+1]==p || mapa[linha][coluna+1]==t || mapa[linha][coluna+1]==c) {
                        coluna--;
                    }
                    if (mapa[linha][coluna+1] == 0 ) {
                        mapa[linha][coluna+1] = 3;
                    }

                    if (mapa[linha][coluna+1]==o) {
                        mapa[linha][coluna+1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t)
                {
                        coluna--;
                }
            }
            if(pontos >= 3) Saida++;
            system("cls");

        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++)
                {
              if(lin==linha && col==coluna)
                {
                    cout << char(219) << char(219);
                }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                   SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);



                    }
                }
            printf("\n");

        }
        printf("\n\n");

        }

         system("cls");
        gameLoop4 = 0;
        if (R_apertado != 1) {
            Nivel4 = 1;
            cout << ("####################\n");
            cout << ("#! Voce conseguiu !#\n");
            cout << ("####################\n\n");
        }
        cout << "1] JOGAR \n";
            cout << "2] INSTRUCOES \n";
            cout << "3] CREDITOS\n";
            cout << "4] SAIR \n";
        }
        break;

        case 5:
        system("cls");
        gameLoop5 = 1;
        ///MAPA 5
        while (gameLoop5 == 1) {
        int linha = 6, coluna = 3;

        int mapa[21][21] {
        0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,1,3,1,0,0,1,0,1,1,1,1,1,1,0,0,0,0,
        1,0,0,0,0,3,0,1,0,1,1,1,4,4,4,4,1,0,0,0,0,
        1,1,3,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
        1,0,0,1,0,0,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,
        1,0,0,0,0,3,0,1,0,0,1,1,1,1,1,1,1,0,0,0,0,
        1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,


    };

        int TeclaPress,Saida=0;
        int lin,col;
        int pontos = 0;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++) {
              if(lin==linha && col==coluna) {
                    cout << char(219) << char (219);
              }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);


                }
        }
            printf("\n");

    }
        printf("\n\n");

        while (Saida == 0) {
            TeclaPress=getch();
            if(TeclaPress=='r' || TeclaPress=='R'){
            gameLoop1 = 0;
            Saida = 0;
            R_apertado = 1;
            break;

            }
            if(TeclaPress=='w' || TeclaPress=='W'){
                linha--;
                ///se tiver caixa x parede PARAR
                if(mapa[linha][coluna]==c && mapa[linha-2][coluna]==p) linha+2;

                ///SITUAÇÕES COM CAIXA
                if(mapa[linha][coluna]==c) {
                    ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                    if (mapa[linha-1][coluna]==p || mapa[linha-1][coluna]==t || mapa[linha-1][coluna]==c) {
                        linha++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha-1][coluna] == 0 ) {
                        mapa[linha-1][coluna] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha-1][coluna]==o) {
                        mapa[linha-1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha++;

            }
            if(TeclaPress=='a' || TeclaPress=='A'){
                coluna--;

                ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna-1]==p || mapa[linha][coluna-1]==t || mapa[linha][coluna-1]==c) {
                        coluna++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha][coluna-1] == 0 ) {
                        mapa[linha][coluna-1] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha][coluna-1]==o) {
                        mapa[linha][coluna-1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) coluna++;
            }
            if(TeclaPress=='s' || TeclaPress=='S'){
                linha++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha+1][coluna]==p || mapa[linha+1][coluna]==t || mapa[linha+1][coluna]==c) {
                        linha--;
                    }
                    if (mapa[linha+1][coluna] == 0 ) {
                        mapa[linha+1][coluna] = 3;
                    }

                    if (mapa[linha+1][coluna]==o) {
                        mapa[linha+1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha--;
            }
            if(TeclaPress=='d' || TeclaPress=='D'){
                coluna++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna+1]==p || mapa[linha][coluna+1]==t || mapa[linha][coluna+1]==c) {
                        coluna--;
                    }
                    if (mapa[linha][coluna+1] == 0 ) {
                        mapa[linha][coluna+1] = 3;
                    }

                    if (mapa[linha][coluna+1]==o) {
                        mapa[linha][coluna+1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t)
                {
                        coluna--;
                }
            }
            if(pontos >= 4) Saida++;
            system("cls");

        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++)
                {
              if(lin==linha && col==coluna)
                {
                    cout << char(219) << char(219);
                }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                   SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);



                    }
                }
            printf("\n");

        }
        printf("\n\n");

        }

         system("cls");
        gameLoop5 = 0;
        if (R_apertado != 1) {
            Nivel5 = 1;
            cout << ("####################\n");
            cout << ("#! Voce conseguiu !#\n");
            cout << ("####################\n\n");
        }
        cout << "1] JOGAR \n";
            cout << "2] INSTRUCOES \n";
            cout << "3] CREDITOS\n";
            cout << "4] SAIR \n";
        }
        break;

        case 6:
        system("cls");
        gameLoop6 = 1;
        ///MAPA 6
        while (gameLoop6 == 1) {
        int linha = 9, coluna = 2;

        int mapa[21][21] {
        0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,
        1,1,4,4,4,4,4,4,4,4,4,4,1,1,0,0,0,0,0,0,0,
        1,4,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,0,0,0,
        1,4,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,0,0,0,
        1,4,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,0,0,0,
        1,4,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,0,0,0,
        1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,
        0,1,1,0,0,3,0,0,0,0,3,0,3,0,3,0,1,0,0,0,0,
        0,1,0,0,0,0,3,0,1,3,1,0,0,0,1,0,1,0,0,0,0,
        0,1,0,1,3,0,3,0,3,0,0,1,1,0,0,0,1,0,0,0,0,
        0,1,1,1,0,3,1,0,1,0,0,1,1,1,1,0,1,0,0,0,0,
        0,0,0,1,0,0,3,0,3,0,0,1,0,0,0,0,1,0,0,0,0,
        0,0,0,1,0,3,1,0,3,0,1,0,0,3,0,0,1,0,0,0,0,
        0,0,0,1,0,0,0,0,3,0,0,0,3,0,3,0,1,0,0,0,0,
        0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
        0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,


    };

        int TeclaPress,Saida=0;
        int lin,col;
        int pontos = 0;
        HANDLE r= GetStdHandle(STD_OUTPUT_HANDLE);
        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++) {
              if(lin==linha && col==coluna) {
                    cout << char(219) << char (219);
              }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);


                }
        }
            printf("\n");

    }
        printf("\n\n");

        while (Saida == 0) {
            TeclaPress=getch();
            if(TeclaPress=='r' || TeclaPress=='R'){
            gameLoop1 = 0;
            Saida = 0;
            R_apertado = 1;
            break;

            }
            if(TeclaPress=='w' || TeclaPress=='W'){
                linha--;
                ///se tiver caixa x parede PARAR
                if(mapa[linha][coluna]==c && mapa[linha-2][coluna]==p) linha+2;

                ///SITUAÇÕES COM CAIXA
                if(mapa[linha][coluna]==c) {
                    ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                    if (mapa[linha-1][coluna]==p || mapa[linha-1][coluna]==t || mapa[linha-1][coluna]==c) {
                        linha++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha-1][coluna] == 0 ) {
                        mapa[linha-1][coluna] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha-1][coluna]==o) {
                        mapa[linha-1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha++;

            }
            if(TeclaPress=='a' || TeclaPress=='A'){
                coluna--;

                ///se tiver caixa x parede || caixa x caixa posicionada PARAR
                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna-1]==p || mapa[linha][coluna-1]==t || mapa[linha][coluna-1]==c) {
                        coluna++;
                    }
                    ///se tiver caixa nada CRIAR CAIXA NA FRENTE
                    if (mapa[linha][coluna-1] == 0 ) {
                        mapa[linha][coluna-1] = 3;
                    }
                    ///se tiver caixa x objetivo APAGAR CAIXA, CRIAR CAIXA POSICIONADA
                    if (mapa[linha][coluna-1]==o) {
                        mapa[linha][coluna-1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    ///se tiver caixa x nada CRIAR NADA ATRÁS
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                ///se tiver jogador x parede PARAR
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) coluna++;
            }
            if(TeclaPress=='s' || TeclaPress=='S'){
                linha++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha+1][coluna]==p || mapa[linha+1][coluna]==t || mapa[linha+1][coluna]==c) {
                        linha--;
                    }
                    if (mapa[linha+1][coluna] == 0 ) {
                        mapa[linha+1][coluna] = 3;
                    }

                    if (mapa[linha+1][coluna]==o) {
                        mapa[linha+1][coluna] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t) linha--;
            }
            if(TeclaPress=='d' || TeclaPress=='D'){
                coluna++;

                if(mapa[linha][coluna]==c) {
                    if (mapa[linha][coluna+1]==p || mapa[linha][coluna+1]==t || mapa[linha][coluna+1]==c) {
                        coluna--;
                    }
                    if (mapa[linha][coluna+1] == 0 ) {
                        mapa[linha][coluna+1] = 3;
                    }

                    if (mapa[linha][coluna+1]==o) {
                        mapa[linha][coluna+1] = 5;
                        mapa[linha][coluna] = 0;
                        pontos++;
                    }
                    else{
                        mapa[linha][coluna] = 0;
                    }
                }
                if(mapa[linha][coluna]==p || mapa[linha][coluna]==t)
                {
                        coluna--;
                }
            }
            if(pontos >= 18) Saida++;
            system("cls");

        for (lin=0;lin<21;lin++) {
            for (col=0;col<21;col++)
                {
              if(lin==linha && col==coluna)
                {
                    cout << char(219) << char(219);
                }
                else{
                    if(mapa[lin][col]==a) cout << "  ";
                    if(mapa[lin][col]==p) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,10);
                    if(mapa[lin][col]==c) cout << char(177) << char(177);
                   SetConsoleTextAttribute(r,7);
                    if(mapa[lin][col]==s) cout << char(240) << char(175);
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==o) cout << "[]";
                    SetConsoleTextAttribute(r,3);
                    if(mapa[lin][col]==t) cout << char(177) << char(177);
                    SetConsoleTextAttribute(r,7);



                    }
                }
            printf("\n");

        }
        printf("\n\n");

        }

         system("cls");
        gameLoop6 = 0;
        if (R_apertado != 1) {
            Nivel6 = 1;
            cout << ("####################\n");
            cout << ("#! Voce conseguiu !#\n");
            cout << ("####################\n\n");
        }
        cout << "1] JOGAR \n";
            cout << "2] INSTRUCOES \n";
            cout << "3] CREDITOS\n";
            cout << "4] SAIR \n";
        }
        break;

        default:
            system("cls");
            cout << "opcao invalida\n\n";
                    cout << "1] JOGAR \n";
                    cout << "2] INSTRUCOES \n";
                    cout << "3] CREDITOS\n";
                    cout << "4] SAIR \n";
    }
    if(TeclaTake=='2') {
            system("cls");
            HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
            cout << "Para jogar o jogo voce precisa saber de alguns conceitos basicos \n\n";
            cout << "1] "; cout << char(219) << char (219); cout << " esse e voce, voce pode se mover em jogo utilizando W A S D!\n\n";
            cout << "2] "; SetConsoleTextAttribute(z,10); cout << char(177) << char(177);  SetConsoleTextAttribute(z,7);cout << " essas sao as caixas, voce pode empurrar elas!\n\n";
            cout << "3] "; cout << char(240) << char(175); cout << " voce consegue apenas mover uma caixa por vez!\n\n";
            cout << "4] "; SetConsoleTextAttribute(z,3); cout <<"[]"; SetConsoleTextAttribute(z,7);cout << " aqui e onde voce deve levar as caixas!\n\n";
            cout << "5] "; SetConsoleTextAttribute(z,3); cout << char(177) << char(177); SetConsoleTextAttribute(z,7); cout << " as caixas mudam de cor quando estiverem em sua posicao correta, se tornando estaticas!\n\n";
            cout << "6] "; cout << char(240) << char(175); cout << " quando terminar de posicionar as caixas o nivel acaba automaticamente!\n\n";
            cout << "7] "; cout << char(240) << char(175); cout << " caso fique preso em um nivel basta apertar a tecla R para voltar ao menu!\n\n";
            cout << "Para voltar digite 1\n\n";
            int TeclaPressiona;
            menuAtivo = 0;
            int selecao = 1;
            while (selecao == 1) {
                    TeclaPressiona=getch();
            if(TeclaPressiona=='1'){
                    system("cls");
                    selecao = 0;
                    cout << "1] JOGAR \n";
                    cout << "2] INSTRUCOES \n";
                    cout << "3] CREDITOS\n";
                    cout << "4] SAIR \n";
            }
            }
        }
        if(TeclaTake=='3') {
            system("cls");
            HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
            cout << "AUTOR DO TRABALHO: Pedro Henrique Schneider\n";
            cout << "PROFESSORA: Cristina Ono Horita\n";
            cout << "DISCIPLINA: Algoritmos & Programacao\n";
            cout << "DATA DE FINALIZACAO DO TRABALHO: 24/06/2023\n\n";
            cout << "Para voltar digite 1\n\n";
            int TeclaPressiona;
            menuAtivo = 0;
            int selecao = 1;
            while (selecao == 1) {
                    TeclaPressiona=getch();
            if(TeclaPressiona=='1'){
                    system("cls");
                    selecao = 0;
                    cout << "1] JOGAR \n";
                    cout << "2] INSTRUCOES \n";
                    cout << "3] CREDITOS\n";
                    cout << "4] SAIR \n";
            }
            }
        }
        if(TeclaTake=='4') {
            system("cls");
            HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
            cout << "OBRIGADO POR JOGAR!\n";
            return 0;
        }
    }


    }
    }
