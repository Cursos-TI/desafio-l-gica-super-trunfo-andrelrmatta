#include <stdio.h>
int main(){

int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int ponto1;
int ponto2;

//carta 1 sera Sao Paulo
//carta 2 sera Rio de janeiro

//"Qual cidade a menor densidade populacional?"
    
    populacao1 = 12.300,000;  
    populacao2 = 6.000,000;

if (populacao1 < populacao2){
    printf("Carta 1 (Sao Paulo) tem a menor densidade populacional. 12.300,000 de habitantes, ela venceu!\n");

}else{
    printf("Carta 2 (Rio de janeiro) tem a menor densidade populacional. 6.000,000 de habitantes, ela venceu!\n");
}

    //"Qual cidade tem o maior m²?"

    area1= 5.000,000;
    area2= 4.500,000;

if (area1 > area2){
    printf("Carta 1 (São Paulo) tem a maior area por m². 5.000,000 m², ela venceu!\n");

}else{
    printf("Carta 2 (Rio de Janeiro) tem a maior area por m². 4.500,000 m², Ela venceu!\n");
}
    //"Qual cidade tem o maior PIB?"

    pib1= 2.070;
    pib2= 2.060;

if (pib1 > pib2){
    printf("Carta 1 (São Paulo) tem o maior PIB. 2.070, ela venceu!\n");

}else{
    printf("Carta 2 (Rio de Janeiro) tem o maior PIB. 2.060, ela venceu!\n");
}
    //"Qual cidade tem mais pontos turisticos?"

    ponto1= 59;
    ponto2= 41;

if (ponto1 > ponto2){
    printf("Carta 1 (São Paulo) tem mais pontos turisticos. 59, ela venceu!\n");

}else{
    printf("Carta 2 (Rio de Janeiro) tem mais pontos turisticos. 41, ela venceu!\n");
}

    




}

