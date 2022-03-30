#include<stdio.h>
//exemplo 1 - entrada e saida
/*
Sal= salario
Imp= imposto
grat= gratificacao
ns= Novo salario 
*/
int main(void)
{
int sal, imp, grat, ns; //declaração de variável inteir0
float SAL, IMP, GRAT; //declaração de variável real
printf("\nInsira a salario\n");//informação para o usuário
scanf("%d",&sal);//entrada de dados
printf("\nInsira a imposto\n");
scanf("%d",&imp);//entrada de dados
printf("\nInsira a gratificação\n");
scanf("%d",&grat); //entrada de dados
ns=sal+grat-imp; //processo de cálculo
printf("\nNovo salario e: %d",ns); //saída de dados
return 0;
}
