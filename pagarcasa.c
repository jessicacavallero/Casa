#include <stdio.h>
#include <stdlib.h>
// Função para o calculo de juros //
void jurao(float juro, float valo, float mult , float dias,float ju ,float result){
ju=valo*juro/100*dias;
result= mult+valo+ju;
printf("\n O Valor que você irá pagar de juros é %.2f",ju );
printf("\n O valor total é R$ %.2f",result);}

int main (){

//Declaração de variaveis //
int quantidade;
int i;
float valor,soma;
int escolha;
int dia;
float jur , va , multa ,resultado,sim;

// Entrada e Saida de Dados //

printf("Quantas contas você tem para pagar esse mês ? \n");
  scanf("%d",&quantidade);
printf("Qual é a quantidade de dinheiro disponivel que você tem para pagar sua contas desse mês?\n");
  scanf("%f",&valor);
// Declaração dos Vetores //
float valorapagar[quantidade];
float juros[quantidade];


for(i=0;i<quantidade;i++){

 printf("Qual é o valor da sua %dº conta?\n",i+1);
  scanf("%f",&valorapagar[i]);
 printf("Qual é o valor do juros da sua %dº conta? \n",i+1);
  scanf("%f",&juros[i]);
}

for (i=0;i<quantidade;i++){
  soma = soma+valorapagar[i];
}
 printf(" \n O valor do seus gastos nesse mês é R$ %.2f  \n",soma);

// Ponteiros para saber o valor do troco //

float *p;
float *q;
float troco;
p = &soma;
q = &valor;
troco = soma-valor; 



 if (soma>valor){
   printf(" \n Esse mês,infelizmente,você não poderá pagar tudo. \n");
   printf("\n ");}
   
  do{ 
   printf("\n");
   printf("Escolha uma opção\n");
   printf("1 - Informações \n");
   printf("2 - Faça a conta para saber quando você irá pagar depois da data de  vencimento \n");
   printf(" Aperte 00 para sair a qualquer momento\n");
    scanf("%d",&escolha);

   switch(escolha){
     case 1:
     printf("\n Para evitar uma bola de neve, especialistas recomendam quitar as contas com juros maiores, como cartão de crédito, e de serviços essenciais, como água e luz.\n");
     break;

     case 2:
    printf("Qual é o valor da sua fatura ?\n");
      scanf("%f",&va);
    printf("Qual é o valor do juros da sua fatura?\n");
      scanf("%f",&jur);
    printf("Quantos dias sua fatura passou da data de venciemnto? \n");
      scanf("%d",&dia);
  if(dia < 1){
        while(dia<1){
            printf("Infelizmente você não pode escolher um dia menor que 1, digite novamente. \n");
            scanf("%d",&dia);
   jurao( jur, va,  multa , dia,resultado,sim);
    break;}
  }
}
}
    while (escolha!=00);
  if(valor>soma) {
  printf("\n Esse mês você pode pagar todas as suas contas \n");
  printf("\n Seu troco será de R$ %.2f\n",troco);}
 }
