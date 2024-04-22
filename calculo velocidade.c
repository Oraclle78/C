//Tempo Necessário para Percorrer uma Distância
# include <stdio.h>
# include <windows.h>
# define MIN 60
int main ()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //Legenda: vel = velocidade média; hora = hora sem minutos
    // tempom = hora convertida em minutos; tempoh = hora calculada; dist = distância
    
    int vel,hora;
    float tempom,tempoh,dist;

    puts ("=============================================");

    printf ("Qual a distância em Km a ser percorrida: ");
    scanf ("%f", &dist);
    printf ("Qual a velocidade média em Km/h: ");
    scanf("%d", &vel);
     puts ("=============================================");

    //cakculando o tempo total "Tempo = Distância / Velocidade.
    
    tempoh = dist/vel; 

    //Eliminando o número inteiro (hora) e multiplicando a parte decimal por MIN, resultando no total de minutos.
    tempom = (tempoh - (int) tempoh) * MIN; 

    //Hora = eliminando a parte decimal.
    hora = (int)tempoh;

    //Quando a hora for maior que 1 hora o programa informará as horas e minutos, caso seja menor informará somente os minutos.
    if (tempoh >= 1)
    {
        printf ("O tempo nescessário para percorrer a distância  é de %d horas e %0.f minutos\n", hora, tempom);
    }
    else
    {
        printf("O tempo nescessário para percorrer a distância é de %.0f minutos\n", tempom);
    }
     puts ("====================FIM======================");

    return 0;
    SetConsoleOutputCP(CPAGE_DEFAULT);
}