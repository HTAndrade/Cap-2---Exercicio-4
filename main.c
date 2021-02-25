#include <stdio.h>
#include<math.h>
#include<locale.h>

/*
4 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os 
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em 
    horas, minutos e segundo e determina o intervalo de tempo 
    (em horas, minutos e segundos) decorrido entre eles.
*/

int main(){

int hora, minuto, segundo, valorsegundos1, valorsegundos2, diferenca, resto;

setlocale(LC_ALL,"");

printf("Digite o tempo em horas, minutos e segundos da chamada iniciada: \n");
scanf("%i %i %i", &hora, &minuto, &segundo);

valorsegundos1=(hora*3600)+(minuto*60)+segundo;

/*printf("Total de segundos: %i \n", valorsegundos1);*/

do{

printf("Digite o tempo em horas, minutos e segundos da chamada finalizada: \n");
scanf("%i %i %i", &hora, &minuto, &segundo);

valorsegundos2=(hora*3600)+(minuto*60)+segundo;

if(valorsegundos2<valorsegundos1){

    printf("Valor inválido. Digite valor maior do que horário da chamada iniciada: \n");

}

}while(valorsegundos2<valorsegundos1);


/*printf("Total de segundos: %i \n", valorsegundos2);*/


diferenca=valorsegundos2-valorsegundos1;

hora=diferenca/3600;
resto=diferenca%3600;
minuto=resto/60;
segundo=resto%60;

printf("\nDuração total da chamada: %i horas %i minutos %i segundos \n", hora, minuto, segundo);

}