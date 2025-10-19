#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int  populacao1 = 1398531, 
       populacao2 = 2574412, 
       pturisticos1 = 12, 
       pturisticos2 = 18,
       opcao;

  float 
        densidade1 = 0,
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



        // ÁREA PARA A COMPARAÇÃO E PRINT DOS DADOS ENTRE AS CIDADES

  printf("Sua opção: ");                                
  scanf("%d", &opcao);                                  //Recebe o valor digitado pelo usuário
  printf("\n");
  printf("   ##### RESULTADO DA COMPARAÇÃO:#####\n");
  switch (opcao){
  

          // COMPARAÇÃO ENTRE OS VALORES DO ITEM POPULAÇÃO
  
  case 1:
    printf("\n");                             //Mostra os Dados das carta para o usuário
    printf("  *Carta 1*\n");                  //
    printf("Estado: %s\n",estado1);           //
    printf("Código: %s\n", codigo1);          //
    printf("Cidade: %s\n", cidade1);          //
    printf("População: %d\n", populacao1);    //
    printf("\n");                             //
    printf("  *Carta 2*\n");                  //
    printf("Estado: %s\n",estado2);           //
    printf("Código: %s\n", codigo2);          //
    printf("Cidade: %s\n", cidade2);          //
    printf("População: %d\n", populacao2);    //
    printf("\n");                             //

    if (populacao1 >= populacao2) {                                                    //Compara os valores de item População
      if (populacao1 == populacao2){                                                   //Compara os valores se Carta 1 é igual a Carta 2
          printf("População da Carta 1 é igual que População da Carta 2.\n"); 
          printf("EMPATE!\n");                                                         //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("População da Carta 1 é maior que População da Carta 2.\n");          //Mostra o resultado se Carta 1 maior que Carta 2
          printf("Carta 1 Venceu!\n");
      }                                                                               
    }else{
      printf("População da Carta 2 é maior que População da Carta 1.\n");              //Mostra resultado se Carta 2 maior que Carta 1
      printf("Carta 2 Venceu!\n");
    }        
  break;  


          // COMPARAÇÃO ENTRE OS VALORES DO ITEM ÁREA

  case 2:
    printf("\n");
    printf("  *Carta 1*\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Área: %.2f\n", area1);
    printf("\n");
    printf("  *Carta 2*\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Área: %.2f\n", area2);
    printf("\n");
   
    if (area1 >= area2) {                                                           //Compara os valores de item Área
      if (area1 == area2){                                                          //Compara os valores se Carta 1 é igual a Carta 2
          printf("Área da Carta 1 é igual que Área da Carta 2.\n"); 
          printf("EMPATE!\n");                                                      //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("Área da Carta 1 é maior que Área da Carta 2.\n");                 //Mostra o resultado se Carta 1 maior que Carta 2
          printf("Carta 1 Venceu!\n");
      }
    }else{
      printf("Área da Carta 2 é maior que Área da Carta 1.\n");                      //Mostra resultado se Carta 2 maior que Carta 1
      printf("Carta 2 Venceu!\n");    
    }
  break;
  
        // COMPARAÇÃO ENTRE OS VALORES DO ITEM PIB

  case 3:
    printf("\n");
    printf("  *Carta 1*\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("PIB: %.2f\n", pib1);
    printf("\n");
    printf("  *Carta 2*\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("PIB: %.2f\n", pib2);
    printf("\n");
       
    if (pib1 >= pib2) {                                                              //Compara os valores de item PIB
      if (pib1 == pib2){                                                             //Compara os valores se Carta 1 é igual a Carta 2
          printf("PIB da Carta 1 é igual que PIB da Carta 2.\n"); 
          printf("EMPATE!\n");                                                       //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("PIB da Carta 1 é maior que PIB da Carta 2.\n");                    //Mostra o resultado se Carta 1 maior que Carta 2
          printf("Carta 1 Venceu!\n");
      }
    }else{
      printf("PIB da Carta 2 é maior que PIB da Carta 1.\n");                        //Mostra resultado se Carta 2 maior que Carta 1
      printf("Carta 2 Venceu!\n");
    }
  break;

          // COMPARAÇÃO ENTRE OS VALORES DO ITEM PONTOS TURÍSTICOS

  case 4:
    printf("\n");
    printf("  *Carta 1*\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Pontos Turísticos: %d\n", pturisticos1);
    printf("\n");
    printf("  *Carta 2*\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Pontos Turísticos: %d\n", pturisticos2);
    printf("\n");  
    
    if (pturisticos1 >= pturisticos2) {                                                         //Compara os valores de item Pontos Turísticos
      if (pturisticos1 == pturisticos2){                                                        //Compara os valores se Carta 1 é igual a Carta 2
          printf("Pontos Turísticos da Carta 1 é igual que Pontos Turísticos da Carta 2.\n"); 
          printf("EMPATE!\n");                                                                  //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("Pontos Turísticos da Carta 1 é maior que Pontos Turísticos da Carta 2.\n");   //Mostra o resultado se Carta 1 maior que Carta 2
          printf("Carta 1 Venceu!\n");
      }
    }else{
      printf("Pontos Turísticos da Carta 2 é maior que Pontos Turísticos da Carta 1.\n");       //Mostra resultado se Carta 2 maior que Carta 1
      printf("Carta 2 Venceu!\n");
    }
  break;

          // COMPARAÇÃO ENTRE OS VALORES DO ITEM DENSIDADE POPULACIONAL

  case 5:
    printf("\n");
    printf("  *Carta 1*\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("\n");
    printf("  *Carta 2*\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("\n");  

    if (densidade1 <= densidade2) {                                                                       //Compara os valores de item Densidade Populacional
      if (densidade1 == densidade2){                                                                      //Compara os valores se Carta 1 é igual a Carta 2
          printf("Densidade Populacional da Carta 1 é igual que Densidade Populacional da Carta 2.\n"); 
          printf("EMPATE!\n");                                                                            //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("Densidade Populacional da Carta 1 é menor que Densidade Populacional da Carta 2.\n");   //Mostra o resultado se Carta 1 menor que Carta 2
          printf("Carta 1 Venceu!\n");
      }
    }else{
      printf("Densidade Populacional da Carta 2 é menor que Densidade Populacional da Carta 1.\n");       //Mostra resultado se Carta 2 menor que Carta 1
      printf("Carta 2 Venceu!\n");
    }
  break;

          // COMPARAÇÃO ENTRE OS VALORES DO ITEM PIB PER CAPTA

  case 6:
    printf("\n");
    printf("  *Carta 1*\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("PIB Per Capta: %.2f\n", pibpercapta1);
    printf("\n");
    printf("  *Carta 2*\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("PIB Per Capta: %.2f\n", pibpercapta2);
    printf("\n");   
    
    if (pibpercapta1 >= pibpercapta2) {                                                       //Compara os valores de item PIB Per Capta 
      if (pibpercapta1 == pibpercapta2){                                                      //Compara os valores se Carta 1 é igual a Carta 2
          printf("PIB Per Capta  da Carta 1 é igual que PIB Per Capta  da Carta 2.\n"); 
          printf("EMPATE!\n");                                                                //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("PIB Per Capta  da Carta 1 é maior que PIB Per Capta  da Carta 2.\n");       //Mostra o resultado se Carta 1 maior que Carta 2
          printf("Carta 1 Venceu!\n");
      }
    }else{
      printf("PIB Per Capta  da Carta 2 é maior que PIB Per Capta  da Carta 1.\n");           //Mostra resultado se Carta 2 maior que Carta 1
      printf("Carta 2 Venceu!\n");
    }
  break;
  
  
          // COMPARAÇÃO ENTRE OS VALORES DO ITEM SUPER PODER

  case 7:
    printf("\n");
    printf("  *Carta 1*\n");
    printf("Estado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n");
    printf("  *Carta 2*\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");   
    
    if (superpoder1 >= superpoder2) {                                                 //Compara os valores de item Super Poder
      if (superpoder1 == superpoder2){                                                //Compara os valores se Carta 1 é igual a Carta 2
          printf("Super Poder da Carta 1 é igual que Super Poder  da Carta 2.\n"); 
          printf("EMPATE!\n");                                                        //Mostra o resultado se Carta 1 igual Carta 2
      }else{
          printf("Super Poder  da Carta 1 é maior que Super Poder  da Carta 2.\n");   //Mostra o resultado se Carta 1 maior que Carta 2
          printf("Carta 1 Venceu!\n");
      }
    }else{
      printf("Super Poder  da Carta 2 é maior que Super Poder  da Carta 1.\n");       //Mostra resultado se Carta 2 maior que Carta 1
      printf("Carta 2 Venceu!\n");
    }
  break;
  default:
    printf("Opção Inválida!!");
  }
printf("\n");
return 0;
} 