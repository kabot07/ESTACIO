#include <stdio.h>

int main () {
//CARTA1:
    int  pontosturisticos = 100;
    char estado = 1, codigocarta = 2, cidade = 3;
    float areakm = 100, PIB = 100, DenP = 100, capita = 100, superpoder = 100;
    unsigned long int populacao = 100;
    
    /* printf(" ****** SUPER TRUNFO ******\n");
    printf("\n"); 
    printf(" °°° Adicionar Carta 1 °°°\n");
    printf("\n"); 
    
    printf("Codigo da carta: \n");
    scanf("%s", &codigocarta);
    
    printf("Estado: \n");
    scanf("%s", &estado);

       printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%u", &populacao);

    printf("Area: \n");
    scanf("%f", &areakm);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);

    DenP = (populacao / areakm );
    capita = (PIB / populacao);

    superpoder = populacao + areakm + PIB + capita + pontosturisticos - DenP;

    printf("\n"); 
*/
    //CARTA2:

    int pontosturisticos2 = 200;
    char estado2 = 2 , codigocarta2 = 2 , cidade2 = 2;
    float areakm2 = 200, PIB2 = 200, DenP2 = 200, capita2 = 200, superpoder2 =200;
    unsigned long int populacao2 = 200;

/*
    printf(" °°° Adicionar Carta 2 °°° \n");
    printf("\n"); 
   
    printf("Codigo da carta: \n");
    scanf("%s", &codigocarta2);
    
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%u", &populacao2);

    printf("Area: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);
   
    DenP2 = (populacao2 / areakm2 );
    capita2 = (PIB2 / populacao2);

    superpoder2 = populacao2 + areakm2 + PIB2 + capita2 + pontosturisticos2 - DenP2;

*/
    printf("\n"); 
    printf(" ****** SUPER TRUNFO ******\n");
    printf("     Painel de Cartas:\n");
    printf("\n"); 
   
   
  /*  //EXIBIR CARTA 1
    printf("°°° Carta 1 °°°\n");
    printf("\n"); 
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %s \n", codigocarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %u \n", populacao);
    printf("Area: %.2f km² \n", areakm);
    printf("PIB: %.2f reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n", DenP);
    printf("PIB per Capita: %.2f reais\n", capita );
    printf ("Super Poder: %.2f \n", superpoder);

    //EXBIR CARTA 2
    printf("\n");
    printf("°°° Carta 2 °°° \n");
    printf("\n"); 
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigocarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Area: %.2f km² \n", areakm2);
    printf("PIB: %.2f reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", DenP2);
    printf("Renda per Capita: %.2f reais\n", capita2 );
    printf ("Super Poder: %2.f \n", superpoder2);

    printf("\n");
   */
    //COMPARAR CARTAS

         
    int resultadopop, resultadoarea, resultadopib, resultadopontos, resultadodenp, resultadocapita, resultadosuper;
    int resultadopop2, resultadoarea2, resultadopib2, resultadopontos2, resultadodenp2, resultadocapita2, resultadosuper2;

    resultadopop = populacao > populacao2;
    resultadoarea = areakm > areakm2;
    resultadopib = PIB > PIB2;
    resultadopontos = pontosturisticos > pontosturisticos2;
    resultadodenp = DenP < DenP2;
    resultadocapita = capita > capita2;
    resultadosuper =  superpoder > superpoder2;
    
    printf("\n");
    
//  =========================================================================================
    //Pela escolha do jogadores utilizando o menu, determinar qual carta ira vencer
    
    int escolhajogada, escolhajogada2;
    
    printf("°°° COMPETIÇÃO POR DOIS ATRIBUTOS °°°\n");
    printf("\n");
    printf(" Escolha o primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogada);


    switch (escolhajogada)
    {
        case 1:
        printf("*'*'* Primeiro Atributo: POPULAÇÃO *'*'*:\n");
        resultadopop = populacao > populacao2 ? 1 : 0;
        break;
        
        
        case 2:
        printf("*'*'* Primeiro Atributo:  ÁREA *'*'*:\n");
        resultadoarea = areakm > areakm2 ? 1 : 0;
        break;
    
        case 3:
        printf("*'*'* Primeiro Atributo:  PIB *'*'*:\n");
        resultadopib = PIB > PIB2 ? 1 : 0;
        break;

        case 4:
        printf("*'*'* Primeiro Atributo:  PONTOS TURISTICOS *'*'*:\n");
        resultadopontos = pontosturisticos > pontosturisticos2 ? 1  :0;
        break;
        
        case 5:
        printf("*'*'* Primeiro Atributo:  DENSIDADE POPULACIONAL *'*'*:\n");
        resultadodenp = DenP < DenP2 ? 1 : 0;
        break;

        case 6:
        printf("*'*'* Primeiro Atributo:  RENDA PER CAPITA *'*'*:\n");
        resultadocapita = capita > capita2 ? 1 : 0;
        break;

        case 7:
        printf("*'*'* Primeiro Atributo:  SUPER PODER *'*'*:\n");
        resultadosuper = superpoder > superpoder2 ? 1 : 0;
        break;
            
    default:
        printf("Opção Inválida");
    break;
    }
    
    // segundo menu
    printf(" Escolha o segundo atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogada2);
    
    switch (escolhajogada2)
    {
        case 1:
        printf("*'*'* Segundo Atributo: POPULAÇÃO *'*'*:\n");
        resultadopop2 = populacao > populacao2 ? 1 : 0;
        break;
        
        
        case 2:
        printf("*'*'* Segundo Atributo:  ÁREA *'*'*:\n");
        resultadoarea2 = areakm > areakm2 ? 1 : 0;
        break;
    
        case 3:
        printf("*'*'* Segundo Atributo:  PIB *'*'*:\n");
        resultadopib2 = PIB > PIB2 ? 1 : 0;
        break;
    
        case 4:
        printf("*'*'* Segundo Atributo:  PONTOS TURISTICOS *'*'*:\n");
        resultadopontos2 = pontosturisticos > pontosturisticos2 ? 1  :0;
        break;
        
        case 5:
        printf("*'*'* Segundo Atributo:  DENSIDADE POPULACIONAL *'*'*:\n");
        resultadodenp2 = DenP < DenP2 ? 1 : 0;
        break;

        case 6:
        printf("*'*'* Segundo Atributo:  RENDA PER CAPITA *'*'*:\n");
        resultadocapita2 = capita > capita2 ? 1 : 0;
        break;

        case 7:
        printf("*'*'* Segundo Atributo:  SUPER PODER *'*'*:\n");
        resultadosuper2 = superpoder > superpoder2 ? 1 : 0;
        break;
            
    default:
        printf("Opção Inválida");
    break;
    }
    
    if (escolhajogada == escolhajogada2) {

    printf("Você escolheu o mesmo atributo!\n");
    }
    
    int vc1;
    if (capita > capita2)
    
    // TENTANDO ===================
   
    
    int carta, maior;

    switch (escolhajogada){
    
    case 1: populacao > populacao2 ? (carta = populacao) : (carta = populacao2);
    printf ("A carta vencedora dessa rodada é: %d", carta);

    break;

    case 2: areakm > areakm2 ? (carta = areakm) : (carta = areakm2);
    printf ("A carta vencedora dessa rodada é: %d", carta);

    break;
    
    case 6: capita > capita2 ? (carta = capita) : (carta = capita2);
    printf ("A carta vencedora dessa rodada é: %d", carta);

    break;


    }

    
    /*

        
        // o que precisa fazer : soma das jogadas
        // vencedora da rodada 1 + vencedora da rodada 2 = vencedor
        carta 1 ganhar primeira rodada + carta 1 ganhar segunda rodada = carta 1
        carta 1 ganhar primeira rodada + carta 2 ganhar segunda = empate
        carta 1 perder primeira rodada + carta 2 ganhar segunda rodada = carta 2;

        
    
*/
//Karol Botelho
return 0;
}
