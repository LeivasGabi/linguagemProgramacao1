#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a[100],iniciar,base_entrada,numero,base_saida,iterador,numero;//Variáveis globais

int main(){//Função principal
	setlocale(LC_ALL, "Portuguese");//Utilizado para compatibilidade com caractéres especiais
	int iniciar;//Variável utilizada para iniciar o programa
	//a[1] = 1; //?????
	tela_inicial();//Procedimento para mostrar a tela inicial
	printf("\n\n\n   ___________________________________________________________________________________________________________\n");
	printf("\n\n\n\t\t\t\tDIGITE '0' E APERTE 'ENTER' PARA CONTINUAR!");//Comando para iniciar o programa
	scanf("%d",&iniciar);
		if(iniciar==0){//Seleção da tecla enter
			system("cls");//Limpa a tela
			menu();//Chamando a função menu
		}
	return 0;
}

int tela_inicial(){//Função da tela inicial
	printf("\n\t\t\t  e88'Y88                                                                   ");
	printf("\n\t\t\t  d888  'Y  e88 88e  888 8e  Y8b Y888P  ,e e,  888,8,  dP'Y  e88 88e  8888,  ");
	printf("\n\t\t\t C8888     d888 888b 888 88b  Y8b Y8P  d88 88b 888 ''  C88b  d888 888b 888 ' ");
	printf("\n\t\t\t  Y888  ,d Y888 888P 888 888   Y8b '   888   , 888     Y88D Y888 888P 888    ");
	printf("\n\t\t\t    88,d88  '88 88'  888 888    Y8P     'YeeP' 888    d,dP   '88 88''  888    ");
	printf("\n\n\n");
	printf("\n \t\t\t\t\t\t     888         ");
	printf("\n\t\t\t\t\t\t  e88 888  ,e e,  ");
	printf("\n\t\t\t\t\t\td888 888 d88 88b ");
	printf("\n\t\t\t\t\t\t Y888 888 888   , ");
	printf("\n\t\t\t\t\t\t  '88 888  YeeP'");
	printf("\n\n\n");
	printf("\n\t\t\t\t\t 888 88b,                             ");
	printf("\n\t\t\t\t\t 888 88P'  ,'Y88b  dP'Y  ,e e,   dP'Y ");
	printf("\n\t\t\t\t\t 888 8K   '8' 888 C88b  d88 88b C88b  ");
	printf("\n\t\t\t\t\t 888 88b, ,ee 888  Y88D 888   ,  Y88D ");
	printf("\n\t\t\t\t\t 888 88P' '88 888 d,dP   'YeeP' d,dP  ");
	return 0;                                
}

int menu(){//Função do menu
   int opc;//Variável para a opção
   printf("\n\t\t\t\tESCOLHA A CONVERSÃO QUE DESEJA FAZER:\n\n");
   printf("     ________________________________________________________________________________________________________\n");
   printf("\n\t1 - Decimal para binario");
   printf("\t6 - Binario para decimal");
   printf("\t11 - Binário para hexadecimal");
   printf("\n\t2 - Decimal para base três ");
   printf("\t7 - Base três para decimal");
   printf("\t12 - Binário para octal");
   printf("\n\t3 - Decimal para base cinco ");	
   printf("\t8 - Base cinco para decimal");
   printf("\t13 - Hexadecimal para binário");
   printf("\n\t4 - Decimal para octal");
   printf("\t\t9 - Octal para decimal");
   printf("\t\t14 - Octal para binário");
   printf("\n\t5 - Decimal para hexadecimal");
   printf("\t10 - Hexadecimal para decimal");
   printf("\t15 - Sair\n\n");
   printf("     ________________________________________________________________________________________________________\n");
   printf("\n\n\tDIGITE O NÚMERO DA OPÇÃO DESEJADA: ");
   scanf("%d",&opc);//Leitura da opção 
   switch(opc){//Switch do meunu de opções
	   case 1://Decimal para binário:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BINÁRIO:\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=2;//Atribui 2 a base de saida
	      printf("\n\tEscreva o número que deseja converter: ");
	      scanf("%d",&numero);//Lê o número digitado pelo usuário
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BINÁRIO:\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO Número escolhido foi: %d",numero);//Mostra o número escolhido pelo usuário
	      conversor();//Chama a função do conversor
		  break;
	   case 2://Decimal para base três:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE TRÊS\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=3;//Atribui 3 a base de saida
	      printf("\n\tEscreva o número que deseja converter: ");
	      scanf("%d",&numero);//Lê o número digitado pelo usuário
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE TRÊS\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO Número escolhido foi: %d",numero);//Mostra o número escolhido pelo usuário
	      conversor();//Chama a função do conversor
		  break;
	   case 3://Decimal para base cinco:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE CINCO\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=5;//Atribui 5 a base de saida
	      printf("\n\tEscreva o número que deseja converter: ");
	      scanf("%d",&numero);//Lê o número digitado pelo usuário
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE CINCO\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO Número escolhido foi: %d",numero);//Mostra o número escolhido pelo usuário
	      conversor();//Chama a função do conversor
		  break;
	   case 4://Decimal para octal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA OCTAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=8;//Atribui 8 a base de saida
	      printf("\n\tEscreva o número que deseja converter: ");
	      scanf("%d",&numero);//Lê o número digitado pelo usuário
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA OCTAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO Número escolhido foi: %d",numero);//Mostra o número escolhido pelo usuário
	      conversor();//Chama a função do conversor
		  break;
	   case 5://Decimal para hexadecimal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA HEXADECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=16;//Atribui 16 a base de saida
	      printf("\n\tEscreva o número que deseja converter: ");
	      scanf("%d",&numero);//Lê o número digitado pelo usuário
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA HEXADECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO Número escolhido foi: %d",numero);//Mostra o número escolhido pelo usuário
	      conversor();//Chama a função do conversor
		  break;
	   case 6: //Binário para decimal (INDISPONÍVEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBINÁRIO PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
		  break;
	   case 7://Base três para decimal: (INDISPONÍVEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBASE TRÊS PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
		  break;
	   case 8://Base cinco para decimal: (INDIPONÍVEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBASE CINCO PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
		  break;
	   case 9://Octal para decimal (INDISPONÍVEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tOCTAL PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
		  break;
	   case 10://Hexadecimal para decimal (INDISPONÍVEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tHEXADECIMAL PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
	      break;
	   case 11://Binário para hexadecimal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBINÁRIO PARA HEXADECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
	      break;
	   case 12://Binário para octal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBINÁRIO PARA OCTAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
	      break;
	   case 13://Hexadecimal para binário:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tHEXADECIMAL PARA BINÁRIO\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
	      break;
	   case 14://Octal para binário:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tOCTAL PARA BINÁRIO\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indisponível, tente outra opção.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a função volta menu
		  break;
	   case 15://Opção de cancelar o programa:
	     system("cls");//Limpa a tela
	     printf("     ________________________________________________________________________________________________________\n\n\n");
	     printf("\n\n\t\t\t\tVOCÊ SAIU DO CONVERSOR DE BASES!\n\n\n\n");
	     printf("     ________________________________________________________________________________________________________\n");
	     exit;//Finaliza o programa
		 break;
	   default://Se não o usuário não escolher uma opção possível:
	      system("cls");//Limpa a tela
	      menu();//Chama a funçaõo do menu
	  	break;
		}
	return 0;
 }
 
int voltaMenu(){ //Procedimento que volta ao menu:
	int op;//Variável de opção do volta menu
	printf("\n\n\t\t\t\tDeseja voltar ao menu? (1-sim / 2-não) ");
	printf("\n\n\t\t\t\tDIGITE O NÚMERO DA OPÇÃO DESEJADA: ");
	scanf("%d",&op);//Lê a opção digitada
		if (op == 1) {//Se for 1 
			system("cls");//limpa a tela
			menu();//Chama a função menu
		}else if(op==2){//Se a opção for 2
			system("cls");//Limpa a tela
			printf("     ________________________________________________________________________________________________________\n\n\n");
			printf("\n\n\t\t\t\tVOCÊ SAIU DO CONVERSOR DE BASES!\n\n\n\n");
			printf("     ________________________________________________________________________________________________________\n");
			exit;//Finaliza o programa
		}else{//Se for digitado outra coisa
			system("cls");
			voltaMenu();//Chama a função volta menu
		}
	return 0;
}
    
int conversor(){//Função de conversão
	while(numero > 0){//Enquanto o numero for maior que zero
		a[iterador] = numero % base_saida;//Atribui ao vetor a divisao inteira do numero pela base saida
		numero = (numero / base_saida);//Número recebe o resto da divisao de numero com a base saida
		iterador++;//Incrementa o iterador
	}
	printf("\n\n\t\tO resultado é: ");
	iterador--;//Decrementa o iterador
	while(iterador >= 0){//Enquanto o iterador for maior ou igual a zero
		if(base_saida == 16){//Se a base de saída for igual a 16
			escreva_basehex(a[iterador]);//Chama a função de conversão de símbolos da base hexadecimal
		} else{//Se não
			printf("%d",a[iterador]);//Escreve o resultado
		}
		iterador--;//Decrementa o iterador
		}
	printf("\n\n\n");
	printf("     ________________________________________________________________________________________________________\n");
	iterador = 0;//Atribui 0 ao iterador
	voltaMenu();//Chama a função volta menu
	return 0;
}

int escreva_basehex(numero){//Função de conversão de simbolos da base hexadcimal
   switch(numero){//Switch do número
	   case 10:
	      printf("A");
	      break;
	   case 11:
	      printf("B");
	      break;
	   case 12:
	      printf("C");
	      break;
	   case 13:
	      printf("D");
	      break;
	   case 14:
	      printf("E");
	      break;
	   case 15:
	      printf("F");
	      break;
	   default:
	      printf("%d",numero);
	      break;
	}
	return 0;
}
