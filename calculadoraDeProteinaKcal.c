/**
 ============================================================================
 Nome      : Calculadora de proteina e Kcal
 Autor     : Vito Elias
 Versao    : 3.0
 Copyright : 
 Descricao : Um programa criado para auxiliar na rotina de suplementacao
 ============================================================================
 **/

#define MEU_PESO 77 //meu peso em quilogramas 
#define WHEY_SCOOP 15 //gramas de whey em cada scoop (depende do tamanho do scoop)
#define PROTEINA_30GWHEY 23 //quantidade de proteina a cada 30 gramas do whey (depende do whey)
#define NAO 0
#define VITAMINA_BANANA 1        /*aqui comecam as definicoes da quantidade de proteinas e de Kcals a cada 100*/ 
#define PROTEINA_VITAMINA 37.5   /*gramas, ou a cada porcao de cada alimento*/
#define KCAL_VITAMINA 434.4      /*esses valores foram tirados do google e podem nao ser 100% precisos*/
#define TAPIOCA_OVO 2            /*existem muitas variaveis como o corte da carne por exemplo*/
#define KCAL_TAPIOCA 336         /*entao, os calculos sempre sao aproximados e nao exatos*/
#define PROTEINA_TAPIOCA 2
#define OVO 9
#define KCAL_OVO 155
#define PROTEINA_OVO 13
#define ARROZ 1
#define KCAL_ARROZ 130
#define PROTEINA_ARROZ 2.7
#define FEIJAO 2
#define KCAL_FEIJAO 76.4
#define PROTEINA_FEIJAO 5
#define MACARRAO 3
#define PROTEINA_MACARRAO 13
#define KCAL_MACARRAO 371
#define PURE 4
#define PROTEINA_PURE 4
#define KCAL_PURE 118
#define PURE_MACAXEIRA 5
#define PROTEINA_MACAXEIRA 0.6
#define KCAL_MACAXEIRA 130.5
#define FRANGO 6
#define PROTEINA_FRANGO 27
#define KCAL_FRANGO 170
#define CARNE 7
#define KCAL_CARNE 207
#define PROTEINA_CARNE 28
#define PEIXE 8
#define KCAL_PEIXE 206
#define PROTEINA_PEIXE 22
#define CUSCUZ_OVO 3
#define KCAL_CUSCUZ 112
#define PROTEINA_CUSCUZ 3.8
#define RAP10_OVO 1
#define KCAL_RAP10 113
#define PROTEINA_RAP10 2.7
#define LEITE_TODDY 4
#define KCAL_TODDY 385
#define KCAL_LEITE 63
#define PROTEINA_LEITE 3.4
#define GELATINA 10
#define KCAL_GELATINA 17
#define PROTEINA_GELATINA 1.4

#include <stdio.h>
#include <conio.h>

int main(){
    float gramas, proteinas, kcals; //variavel utilizada para armazenar as quantidades que consumi de cada alimento, seja em gramas ou em porcoes
    float contadorProteina = 0, contadorKcal = 0; //contadores
    float quantidadeWhey, quantidadeProteina; //variaveis usadas no final para calcular as quantidades de proteina e whey necessarias
    int controle = 1, escolha; //controle (usada para finalizar os lacos de repeticao), escolha (usada para armazernar as escolhas)

    printf("Como foi seu cafe da manha?\n"); //cardapio do cafe da manha
    puts("Nao tomei cafe ainda (0)");
    puts("Vitamina de banana (1)");
    puts("Tapioca com ovo (2)");
    puts("Outra comida (3)");

    while(controle){
        scanf("%d", &escolha);

        switch(escolha){ //cada switch case calcula e incrementa nos contadores as quantidades de proteinas e kcals                       
            case VITAMINA_BANANA:
                contadorProteina += PROTEINA_VITAMINA;
                contadorKcal += KCAL_VITAMINA;
                break;
            case TAPIOCA_OVO:
                printf("Quantos gramas de ovo?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_OVO / 100; 
                contadorProteina += gramas*PROTEINA_OVO / 100;
                printf("Quantos gramas de tapioca?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_TAPIOCA / 100;
                contadorProteina += gramas*PROTEINA_TAPIOCA / 100;
                break;
            case 3:
                printf("Qual a quantidade de proteina em 100 gramas desse alimento?: ");
                scanf("%f", &proteinas);
                printf("Quantas kcals a cada 100 gramas desse alimento?: ");
                scanf("%f", &kcals);
                printf("Quantos gramas desse alimento?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*kcals / 100;
                contadorProteina += gramas*proteinas / 100;
                break;
            case NAO:
                controle = 0;
                continue;
            default:
                printf("Digite uma opcao valida!\n"); //tratamento de erro caso ocorra um erro na digitacao da escolha
                continue;
        }

        printf("Mais aluma coisa?\n");
        puts("Vitamina de banana (1)");
        puts("Tapioca com ovo (2)");
        puts("Outra comida (3)");
        puts("Nao (0)");

    }

    controle = 1;

    puts("Como foi seu almoco?"); //cardapio do almoco
    puts("Nao almocei ainda (0)");
    puts("Arroz (1)");
    puts("Feijao (2)");
    puts("Macarrao (3)");
    puts("Pure de batata (4)");
    puts("Pure de macaxeira (5)");
    puts("Frango (6)");
    puts("Carne (7)");
    puts("Peixe (8)");
    puts("Ovo (9)");
    puts("Gelatina (10)");
    puts("Outra comida (11)");

    while(controle){
        scanf("%d", &escolha);

        switch(escolha){
            case ARROZ:
                printf("Quantos gramas de arroz?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_ARROZ / 100;
                contadorProteina += gramas*PROTEINA_ARROZ / 100;
                break;
            case FEIJAO:
                printf("Quantos gramas de feijao?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_FEIJAO / 100;
                contadorProteina += gramas*PROTEINA_FEIJAO / 100;
                break;
            case MACARRAO:
                printf("Quantos gramas de macarrao?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_MACARRAO / 100;
                contadorProteina += gramas*PROTEINA_MACARRAO / 100;
                break;
            case PURE:
                printf("Quantos gramas de pure de batata?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_PURE / 100;
                contadorProteina += gramas*PROTEINA_PURE / 100;
                break;
            case PURE_MACAXEIRA:
                printf("Quantos gramas de pure de macaxeira?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_MACAXEIRA / 100;
                contadorProteina += gramas*PROTEINA_MACAXEIRA / 100;
                break;
            case FRANGO:
                printf("Quantos gramas de frango?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_FRANGO / 100;
                contadorProteina += gramas*PROTEINA_FRANGO / 100;
                break;
            case CARNE:
                printf("Quantos gramas de carne?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_CARNE / 100;
                contadorProteina += gramas*PROTEINA_CARNE / 100;
                break;
            case PEIXE:
                printf("Quantos gramas de peixe?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_PEIXE / 100;
                contadorProteina += gramas*PROTEINA_PEIXE / 100;
                break;
            case OVO:
                printf("Quantos gramas de ovo?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_OVO / 100;
                contadorProteina += gramas*PROTEINA_OVO / 100;
                break;
            case GELATINA:
                printf("Quantas gelatinas?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_GELATINA;
                contadorProteina += gramas*PROTEINA_GELATINA;
                break;
            case 11:
                printf("Qual a quantidade de proteina em 100 gramas desse alimento?: ");
                scanf("%f", &proteinas);
                printf("Quantas kcals a cada 100 gramas desse alimento?: ");
                scanf("%f", &kcals);
                printf("Quantos gramas desse alimento?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*kcals / 100;
                contadorProteina += gramas*proteinas / 100;
                break;
            case NAO:
                controle = 0;
                continue;
            default:
                puts("Digite uma opcao valida!");
                continue;
            }

        puts("mais alguma coisa?");
        puts("Arroz (1)");
        puts("Feijao (2)");
        puts("Macarrao (3)");
        puts("Pure de batata (4)");
        puts("Pure de macaxeira (5)");
        puts("Frango (6)");
        puts("Carne (7)");
        puts("Peixe (8)");
        puts("Ovo (9)");
        puts("Gelatina (10)");
        puts("Outra comida (11)");
        puts("Nao (0)");

    }

    controle = 1;

    puts("Como foi sua janta?"); //caradapio da janta
    puts("Nao jantei ainda (0)");
    puts("Rap10 com ovo (1)");
    puts("Tapioca com ovo (2)");
    puts("Cuscuz com ovo (3)");
    puts("Copo de leite com Toddy (4)");
    puts("Outra comida (5)");

    while(controle){
        scanf("%d", &escolha);
        
        switch(escolha){
            case RAP10_OVO:
                printf("Quantos Rap10?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_RAP10;
                contadorProteina += gramas*PROTEINA_RAP10;
                printf("Quantos gramas de ovo?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_OVO / 100;
                contadorProteina += gramas*PROTEINA_OVO / 100;
                break;
            case TAPIOCA_OVO:
                printf("Quantos gramas de ovo?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_OVO / 100;
                contadorProteina += gramas*PROTEINA_OVO / 100;
                printf("Quantos gramas de tapioca?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_TAPIOCA / 100;
                contadorProteina += gramas*PROTEINA_TAPIOCA / 100;
                break;
            case CUSCUZ_OVO:
                printf("Quantos gramas de ovo?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_OVO / 100;
                contadorProteina += gramas*PROTEINA_OVO / 100;
                printf("Quantos gramas de cuscuz?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_CUSCUZ / 100;
                contadorProteina += gramas*PROTEINA_CUSCUZ / 100;
                break;
            case LEITE_TODDY:
                printf("Quantos gramas de Toddy?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_TODDY / 100;
                contadorProteina += gramas*0 / 100;
                printf("Quantos gramas de leite?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*KCAL_LEITE / 100;
                contadorProteina += gramas*PROTEINA_LEITE / 100;
                break;
            case 5:
                printf("Qual a quantidade de proteina em 100 gramas desse alimento?: ");
                scanf("%f", &proteinas);
                printf("Quantas kcals a cada 100 gramas desse alimento?: ");
                scanf("%f", &kcals);
                printf("Quantos gramas desse alimento?: ");
                scanf("%f", &gramas);
                contadorKcal += gramas*kcals / 100;
                contadorProteina += gramas*proteinas / 100;
                break;
            case NAO:
                controle = 0;
                continue;
            default:
                puts("Digite uma opcao valida!");
                continue;
            }

        puts("Mais alguma coisa?");
        puts("Rap10 com ovo (1)");
        puts("Tapioca com ovo (2)");
        puts("Cuscuz com ovo (3)");
        puts("Copo de leite com Toddy (4)");
        puts("Outra comida (5)");
        puts("Nao (0)");

    }

    quantidadeProteina = 2.0*MEU_PESO - contadorProteina; //calculo da quantidade de proteina necessaria
    quantidadeWhey = 30*quantidadeProteina / PROTEINA_30GWHEY; //calculo da qauntidade de whey com base na quantidade de proteina

    printf("\n%.2f gramas de proteina e %.2f kcal\n", contadorProteina, contadorKcal); //imprime os contadores
    printf("Voce precisa ingerir mais %.2fg de proteina para atingir a meta diaria de %.2fg\n", quantidadeProteina, 2.0*MEU_PESO); //informa quanta proteina falta para a meta diaria
    printf("Mais ou menos %.2f gramas de WHEY ou %.2f scoops.", quantidadeWhey, quantidadeWhey / WHEY_SCOOP); //informa quantos gramas e whey e quantos scoops devo tomar

    getch(); //espera qualquer tecla ser apertada antes de encerrar o programa

    return 0;
}
