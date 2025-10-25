#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int  populacao1 = 1398531, 
       populacao2 = 2574412, 
       pturisticos1 = 12, 
       pturisticos2 = 12,
       opcao1,
       opcao2,
       resultado1,
       resultado2,
       resultado_final;

  float densidade1 = 0,
        densidade2 = 0,
        pibpercapta1 = 0,
        pibpercapta2 = 0,
        area1 = 1059, 
        area2 = 313.8, 
        pib1 = 33400000, 
        pib2 = 73400000;

  double superpoder1 = 0,
         superpoder2 = 0;

  char estado1[50] = "Pará", 
       estado2[50] = "Ceará",
       codigo1[4] = "P91", 
       codigo2[4] = "C85", 
       cidade1[50] = "Belém", 
       cidade2[50] = "Fortaleza";


/*
          // ÁREA PARA ENTRADA DE DADOS

  printf("* Digite os dados da Carta 1: \n");
  printf("Estado: ");
  scanf("%c", &estado1);                                         //Armazena o valor digitado na variável "estado1" da Carta 1
  printf("Código: ");
  scanf("%s", codigo1);                                          //Armazena o valor digitado na variável "codigo1" da Carta 1
  printf("Nome da Cidade: ");
  scanf("%s", cidade1);                                          //Armazena o valor digitado na variável "cidade1" da Carta 1
  printf("População: ");                                         
  scanf("%d", &populacao1);                                      //Armazena o valor digitado na variável "populacao1" da Carta 1
  printf("Área: ");
  scanf("%f", &area1);                                           //Armazena o valor digitado na variável "area1" da Carta 1
  printf("PIB: ");
  scanf("%f", &pib1);                                            //Armazena o valor digitado na variável "pib1" da Carta 1
  printf("Números de Pontos Turísticos: ");
  scanf("%d", &pturisticos1);                                    //Armazena o valor digitado na variável "pturisticos1" da Carta 1

  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("* Digite os dados da Carta 2: \n");
  printf("Estado: ");
  scanf(" %c", &estado2);                                        //Armazena o valor digitado na variável "estado2" da Carta 2
  printf("Código: ");
  scanf("%s", codigo2);                                          //Armazena o valor digitado na variável "codigo2" da Carta 2
  printf("Nome da Cidade: ");
  scanf("%s", cidade2);                                          //Armazena o valor digitado na variável "cidade2" da Carta 2
  printf("População: ");                                         
  scanf("%d", &populacao2);                                      //Armazena o valor digitado na variável "populacao2" da Carta 2
  printf("Área: ");
  scanf("%f", &area2);                                           //Armazena o valor digitado na variável "area2" da Carta 2
  printf("PIB: ");
  scanf("%f", &pib2);                                            //Armazena o valor digitado na variável "pib2" da Carta 2
  printf("Números de Pontos Turísticos: ");
  scanf("%d", &pturisticos2);                                    //Armazena o valor digitado na variável "pturisticos2" da Carta 2
*/  


          // ÁREA PARA OS CÁLCULOS DOS DADOS DAS CIDADES

  densidade1 = (float)populacao1 / area1;                        //Cálculo da densidade populacional da Carta 1
  pibpercapta1 = pib1 / (float)populacao1;                       //Cálculo do Pib per Capta da Carta 1
  superpoder1 = (float)populacao1 + area1 + pib1 +               //Cálculo do Super Poder da Carta 1
                (float)pturisticos1 - densidade1 +
                pibpercapta1;

  densidade2 = (float)populacao2 / area2;                        //Cálculo da densidade populacional da Carta 2
  pibpercapta2 = pib2 / (float)populacao2;                       //Cálculo do Pib per Capta da Carta 2
  superpoder2 = (float)populacao2 + area2 + pib2 +               //Cálculo do Super Poder da Carta 2
                (float)pturisticos2 - densidade2 +
                pibpercapta2;                                   


          // ÁREA PARA A EXIBIÇÃO DE DADOS DAS CIDADES
  
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("   * Carta 1\n");                                      
  printf("Estado: %s\n", estado1);                               //Mostra o valor do item "Estado" da Carta 1
  printf("Código: %s\n", codigo1);                               //Mostra o valor do item "Código" da Carta 1
  printf("Nome da Cidade: %s\n", cidade1);                       //Mostra o valor do item "Cidade" da Carta 1
  printf("População: %d\n", populacao1);                         //Mostra o valor do item "População" da Carta 1
  printf("Área: %.2f\n", area1);                                 //Mostra o valor do item "Área" da Carta 1
  printf("Pib: %.2f\n", pib1);                                   //Mostra o valor do item "PIB" da Carta 1
  printf("Números de Pontos Turísicos: %d\n", pturisticos1);     //Mostra o valor do item "Nº de Pontos Turísticos" da Carta 1
  printf("Densidade Populacional: %.2f\n", densidade1);          //Mostra o valor do item "Densidade Populacional" da Carta 1
  printf("Pib per Capta: %.2f\n", pibpercapta1);                 //Mostra o valot do item "Pib per Capta" da Carta 1
  printf("Super Poder: %.2f\n", superpoder1);                    //Mostra o valot do item "Super Poder" da Carta 1
  
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados
  printf("\n");                                                  //Espaço para formatação da apresentação dos dados

  printf("   * Carta 2\n");                                      
  printf("Estado: %s\n", estado2);                               //Mostra o valor do item "Estado" da Carta 2
  printf("Código: %s\n", codigo2);                               //Mostra o valor do item "Código" da Carta 2
  printf("Nome da Cidade: %s\n", cidade2);                       //Mostra o valor do item "Cidade" da Carta 2
  printf("População: %d\n", populacao2);                         //Mostra o valor do item "População" da Carta 2
  printf("Área: %.2f\n", area2);                                 //Mostra o valor do item "Área" da Carta 2
  printf("Pib: %.2f\n", pib2);                                   //Mostra o valor do item "PIB" da Carta 2
  printf("Números de Pontos Turísicos: %d\n", pturisticos2);     //Mostra o valor do item "Nº de Pontos Turísticos" da Carta 2
  printf("Densidade Populacional: %.2f\n", densidade2);          //Mostra o valor do item "Densidade Populacional" da Carta 2
  printf("Pib per Capta: %.2f\n", pibpercapta2);                 //Mostra o valot do item "Pib per Capta" da Carta 2
  printf("Super Poder: %.2f\n", superpoder2);                    //Mostra o valot do item "Super Poder" da Carta 2

  printf("\n");
  printf("\n");


        // ÁREA PARA A CRIAÇÃO DO MENU
  
  printf("-----JOGO SUPER TRUNFO-----\n"),
  printf("\n");
  printf("Selecione um atributo:\n");
  printf("  1 - População\n");
  printf("  2 - Área\n");
  printf("  3 - PIB\n");
  printf("  4 - Pontos Turísticos\n");
  printf("  5 - Densidade Populacional\n");
  printf("  6 - PIB Per Capta\n");
  printf("  7 - Super Poder\n");
  printf("\n");


          // ÁREA PARA RECEBER DADOS DO USUÁRIO

  printf("Escolha sua primeira opção: ");                                
  scanf("%d", &opcao1);                                  //Recebe a primeira opção digitado pelo usuário
  printf("Escolha sua segunda opção: ");                 
  scanf("%d", &opcao2);                                  //Recebe a segunda opção digitado pelo usuário
  printf("\n");


          // ÁREA PARA O TRATAMENTO DOS DADOS

  if ((opcao1 != opcao2)){                                               //Verifica se as opções digitadas pelo usuário são as iguais
    if ((opcao1 >=1) && (opcao1 <=7) && (opcao2 >=1) && (opcao2 <=7)){   //Verifica se as opções digitadas pelo usuário são válidas
      switch (opcao1){                                                   //Comparação entre os Dados das Cartas da primeira opção
        case 1:                                                        
          resultado1 = (populacao1 >= populacao2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (populacao1 > populacao2 ? 2 : 1);
          }
          break;
        case 2:
          resultado1 = (area1 >= area2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (area1 > area2 ? 2 : 1);
          }
          break;
        case 3:
          resultado1 = (pib1 >= pib2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (pib1 > pib2 ? 2 : 1);
          }
          break;
        case 4:
          resultado1 = (pturisticos1 >= pturisticos2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (pturisticos1 > pturisticos2 ? 2 : 1);
          }
          break;
        case 5:
          resultado1 = (densidade1 <= densidade2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (densidade1 < densidade2 ? 2 : 1);
          }
          break;
        case 6:
          resultado1 = (pibpercapta1 >= pibpercapta2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (pibpercapta1 > pibpercapta2 ? 2 : 1);
          }
          break;
        case 7:
          resultado1 = (superpoder1 >= superpoder2) ? 2 : 0;
          if (resultado1 == 2){
            resultado1 = (superpoder1 > superpoder2 ? 2 : 1);
          }
          break;
      }
      switch (opcao2){                                                    //Comparação entre os Dados das Cartas da segunda opção
        case 1:                                                            
          resultado2 = (populacao1 >= populacao2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (populacao1 > populacao2 ? 2 : 1);
          }
          break;
        case 2:
          resultado2 = (area1 >= area2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (area1 > area2 ? 2 : 1);
          }
          break;
        case 3:
          resultado2 = (pib1 >= pib2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (pib1 > pib2 ? 2 : 1);
          }
          break;
        case 4:
          resultado2 = (pturisticos1 >= pturisticos2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (pturisticos1 > pturisticos2 ? 2 : 1);
          }
          break;
        case 5:
          resultado2 = (densidade1 <= densidade2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (densidade1 < densidade2 ? 2 : 1);
          }
          break;
        case 6:
          resultado2 = (pibpercapta1 >= pibpercapta2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (pibpercapta1 > pibpercapta2 ? 2 : 1);
          }
          break;
        case 7:
          resultado2 = (superpoder1 >= superpoder2) ? 2 : 0;
          if (resultado2 == 2){
            resultado2 = (superpoder1 > superpoder2 ? 2 : 1);
          }
          break;
      }


            // ÁREA PARA VERIFICAÇÃO DE QUEM VENCEU
      
      if (((resultado1 == 2) && (resultado2 == 2)) || 
          ((resultado1 == 2) && (resultado2 == 1)) || 
          ((resultado1 == 1) && (resultado2 == 2))){
        resultado_final = 2;
      }else if (((resultado1 == 0) && (resultado2 == 0)) || 
                ((resultado1 == 0) && (resultado2 == 1)) || 
                ((resultado1 == 1) && (resultado2 == 0))){
        resultado_final = 0;
      }else{
        resultado_final = 1;
      }


            // ÁREA PARA MOSTRAR O RESULTADO

      printf("   ##### RESULTADO DA COMPARAÇÃO:#####\n");

      printf("\n");                             //Mostra os Dados das carta para o usuário
      printf("  *Carta 1*\n");                  //
      printf("Estado: %s\n",estado1);           //
      printf("Código: %s\n", codigo1);          //
      printf("Cidade: %s\n", cidade1);

      switch (opcao1){                                           //Mostra o valor da primeira opção da Carta1
        case 1:
          printf("População: %d\n", populacao1);
          break;
        case 2:
          printf("Área: %.2f\n", area1);
          break;  
        case 3:
          printf("PIB: %.2f\n", pib1);
          break;
        case 4:
          printf("Pontos Turísticos: %d\n", pturisticos1);
          break;
        case 5:
          printf("Densidade Populacional: %.2f\n", densidade1);
          break;
        case 6:
          printf("PIB Per Capta: %.2f\n", pibpercapta1);
          break;
        case 7:
          printf("Super Poder: %.2f\n", superpoder1);
          break;
      }   
      
      switch (opcao2){                                                //Mostra o valor da segunda opção da Carta1
        case 1:
          printf("População: %d\n", populacao1);
          break;
        case 2:
          printf("Área: %.2f\n", area1);
          break;  
        case 3:
          printf("PIB: %.2f\n", pib1);
          break;
        case 4:
          printf("Pontos Turísticos: %d\n", pturisticos1);
          break;
        case 5:
          printf("Densidade Populacional: %.2f\n", densidade1);
          break;
        case 6:
          printf("PIB Per Capta: %.2f\n", pibpercapta1);
          break;
        case 7:
          printf("Super Poder: %.2f\n", superpoder1);
          break;
      }

      printf("\n");                             //
      printf("  *Carta 2*\n");                  //
      printf("Estado: %s\n",estado2);           //
      printf("Código: %s\n", codigo2);          //
      printf("Cidade: %s\n", cidade2);          //

      switch (opcao1){                                                    //Mostra o valor da primeira opção da Carta2
        case 1:
          printf("População: %d\n", populacao2);
          break;
        case 2:
          printf("Área: %.2f\n", area2);
          break;  
        case 3:
          printf("PIB: %.2f\n", pib2);
          break;
        case 4:
          printf("Pontos Turísticos: %d\n", pturisticos2);
          break;
        case 5:
          printf("Densidade Populacional: %.2f\n", densidade2);
          break;
        case 6:
          printf("PIB Per Capta: %.2f\n", pibpercapta2);
          break;
        case 7:
          printf("Super Poder: %.2f\n", superpoder2);
          break;
      }          

      switch (opcao2){                                                //Mostra o valor da segunda opção da Carta2
        case 1:
          printf("População: %d\n", populacao2);
          break;
        case 2:
          printf("Área: %.2f\n", area2);
          break;  
        case 3:
          printf("PIB: %.2f\n", pib2);
          break;
        case 4:
          printf("Pontos Turísticos: %d\n", pturisticos2);
          break;
        case 5:
          printf("Densidade Populacional: %.2f\n", densidade2);
          break;
        case 6:
          printf("PIB Per Capta: %.2f\n", pibpercapta2);
          break;
        case 7:
          printf("Super Poder: %.2f\n", superpoder2);
          break;
      }          
      printf("\n");
      switch (opcao1){                                                                //Mostra o resultado da comparação da opção 1
        case 1:
          if (resultado1 == 2){
            printf("A População da Carta1 é maior do que a População da Carta2\n");
          }else if (resultado1 == 0){
            printf("A População da Carta1 é menor do que a População da Carta2\n");
          }else{
            printf("A População da Carta1 é igual à População da Carta2\n");
          }
          break;
        case 2:
          if (resultado1 == 2){
            printf("A Àrea da Carta1 é maior do que a Àrea da Carta2\n");
          }else if (resultado1 == 0){
            printf("A Àrea da Carta1 é menor do que a Àrea da Carta2\n");
          }else{
            printf("A Àrea da Carta1 é igual à Àrea da Carta2\n");
          }
          break;  
        case 3:
          if (resultado1 == 2){
            printf("O PIB da Carta1 é maior do que o PIB da Carta2\n");
          }else if (resultado1 == 0){
            printf("O PIB da Carta1 é menor do que o PIB da Carta2\n");
          }else{
            printf("O PIB da Carta1 é igual ao PIB da Carta2\n");
          }
          break;
        case 4:
          if (resultado1 == 2){
            printf("Os Pontos Turísticos da Carta1 é maior do que os Pontos Turísticos da Carta2\n");
          }else if (resultado1 == 0){
            printf("Os Pontos Turísticos da Carta1 é menor do que os Pontos Turísticos da Carta2\n");
          }else{
            printf("Os Pontos Turísticos da Carta1 é igual aos Pontos Turísticos da Carta2\n");
          }
          break;
        case 5:
          if (resultado1 == 2){
            printf("A Densidade Populacional da Carta1 é maior do que a Densidade Populacional da Carta2\n");
          }else if (resultado1 == 0){
            printf("A Densidade Populacional da Carta1 é menor do que a Densidade Populacional da Carta2\n");
          }else{
            printf("A Densidade Populacional da Carta1 é igual à Densidade Populacional da Carta2\n");
          }
          break;
        case 6:
          if (resultado1 == 2){
            printf("O PIB per Capta da Carta1 é maior do que o PIB per Capta da Carta2\n");
          }else if (resultado1 == 0){
            printf("O PIB per Capta da Carta1 é menor do que o PIB per Capta da Carta2\n");
          }else{
            printf("O PIB per Capta da Carta1 é igual ao PIB per Capta da Carta2\n");
          }
          break;
        case 7:
          if (resultado1 == 2){
            printf("O Super Poder da Carta1 é maior do que o Super Poder da Carta2\n");
          }else if (resultado1 == 0){
            printf("O Super Poder da Carta1 é menor do que o Super Poder da Carta2\n");
          }else{
            printf("O Super Poder da Carta1 é igual ao Super Poder da Carta2\n");
          }
          break;
      }

      switch (opcao2){                                                              //Mostra o resultado da comparação da opção 2
        case 1:
          if (resultado2 == 2){
            printf("A População da Carta1 é maior do que a População da Carta2\n");
          }else if (resultado2 == 0){
            printf("A População da Carta1 é menor do que a População da Carta2\n");
          }else{
            printf("A População da Carta1 é igual à População da Carta2\n");
          }
          break;
        case 2:
          if (resultado2 == 2){
            printf("A Àrea da Carta1 é maior do que a Àrea da Carta2\n");
          }else if (resultado2 == 0){
            printf("A Àrea da Carta1 é menor do que a Àrea da Carta2\n");
          }else{
            printf("A Àrea da Carta1 é igual à Àrea da Carta2\n");
          }
          break;  
        case 3:
          if (resultado2 == 2){
            printf("O PIB da Carta1 é maior do que o PIB da Carta2\n");
          }else if (resultado2 == 0){
            printf("O PIB da Carta1 é menor do que o PIB da Carta2\n");
          }else{
            printf("O PIB da Carta1 é igual ao PIB da Carta2\n");
          }
          break;
        case 4:
          if (resultado2 == 2){
            printf("Os Pontos Turísticos da Carta1 é maior do que os Pontos Turísticos da Carta2\n");
          }else if (resultado2 == 0){
            printf("Os Pontos Turísticos da Carta1 é menor do que os Pontos Turísticos da Carta2\n");
          }else{
            printf("Os Pontos Turísticos da Carta1 é igual aos Pontos Turísticos da Carta2\n");
          }
          break;
        case 5:
          if (resultado2 == 2){
            printf("A Densidade Populacional da Carta1 é maior do que a Densidade Populacional da Carta2\n");
          }else if (resultado2 == 0){
            printf("A Densidade Populacional da Carta1 é menor do que a Densidade Populacional da Carta2\n");
          }else{
            printf("A Densidade Populacional da Carta1 é igual à Densidade Populacional da Carta2\n");
          }
          break;
        case 6:
          printf("Valor resultado2: %d", resultado2);
          if (resultado2 == 2){
            printf("O PIB per Capta da Carta1 é maior do que o PIB per Capta da Carta2\n");
          }else if (resultado2 == 0){
            printf("O PIB per Capta da Carta1 é menor do que o PIB per Capta da Carta2\n");
          }else{
            printf("O PIB per Capta da Carta1 é igual ao PIB per Capta da Carta2\n");
          }
          break;
        case 7:
          if (resultado2 == 2){
            printf("O Super Poder da Carta1 é maior do que o Super Poder da Carta2\n");
          }else if (resultado2 == 0){
            printf("O Super Poder da Carta1 é menor do que o Super Poder da Carta2\n");
          }else{
            printf("O Super Poder da Carta1 é igual ao Super Poder da Carta2\n");
          }
          break;
      } 
      printf("\n");
      switch (resultado_final){                                                   //Mostra o resultado final
        case 0:
          printf("Você Perdeu!!! Tente novamente!\n");
          break;
        case 1:
          printf("Empate! Tente novamente!\n");
          break;
        default:
          printf("Parabéns!!! Você ganhou!!!\n");
          break;
      }

      printf("\n");                             
    }else{
      printf("Uma das opções é inválida!\n");
      printf("\n");
      printf("FIM DO PROGRAMA!\n");
      return 0;
    }
  }else{
    printf("Opção Inválida! (Pirmeira opção é igual à segunda opção)\n");
    printf("\n");
    printf("FIM DO PROGRAMA!\n");
    return 0; 
  }



printf("\n");
return 0;
}