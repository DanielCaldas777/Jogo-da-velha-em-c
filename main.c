#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;
    int pos = 1;
    char xo = 'a';
    char tabela[9];

    tabela[0] = '1';
    tabela[1] = '2';
    tabela[2] = '3';
    tabela[3] = '4';
    tabela[4] = '5';
    tabela[5] = '6';
    tabela[6] = '7';
    tabela[7] = '8';
    tabela[8] = '9';
while(pos!=0){
    system("cls");
    for (i = 0; i < 3; i++){

        printf("\n\n\t_%c_ |", tabela[i]);
        printf("_%c_  |" , tabela[i+3]);
        printf("_%c_", tabela[i+6]);

    }
    printf("\n\n\n\n\nQual posicao?\n");
    scanf("%i",&pos);
    fflush(stdin);
    printf("\nX ou O ?\n");
    xo = getchar();
    tabela[pos-1] = xo;

if(
    (   tabela[0]==tabela[1] && tabela[1] == tabela[2])
    || (tabela[3]==tabela[4] && tabela[4] == tabela[5])
    || (tabela[6]==tabela[7] && tabela[7] == tabela[8])
    || (tabela[0]==tabela[3] && tabela[3] == tabela[6])
    || (tabela[1]==tabela[4] && tabela[4] == tabela[7])
    || (tabela[2]==tabela[5] && tabela[5] == tabela[8])
    || (tabela[0]==tabela[4] && tabela[4] == tabela[8])
    || (tabela[2]==tabela[4] && tabela[4] == tabela[6]))
    {
    pos = 0;
    }
}
system("cls");
printf("\n\n\n                      TEMOS UM VENCEDOR!!\n\n\n");

for (i = 0; i < 3; i++){

        printf("\n\n\t_%c_ |", tabela[i]);
        printf("_%c_  |" , tabela[i+3]);
        printf("_%c_", tabela[i+6]);

    }
printf("\n\n\n******************************************************************************************************\n\n\n");

    return 0;
}
