#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a[100],iniciar,base_entrada,numero,base_saida,iterador,numero;//Vari�veis globais

int main(){//Fun��o principal
	setlocale(LC_ALL, "Portuguese");//Utilizado para compatibilidade com caract�res especiais
	int iniciar;//Vari�vel utilizada para iniciar o programa
	//a[1] = 1; //?????
	tela_inicial();//Procedimento para mostrar a tela inicial
	printf("\n\n\n   ___________________________________________________________________________________________________________\n");
	printf("\n\n\n\t\t\t\tDIGITE '0' E APERTE 'ENTER' PARA CONTINUAR!");//Comando para iniciar o programa
	scanf("%d",&iniciar);
		if(iniciar==0){//Sele��o da tecla enter
			system("cls");//Limpa a tela
			menu();//Chamando a fun��o menu
		}
	return 0;
}

int tela_inicial(){//Fun��o da tela inicial
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

int menu(){//Fun��o do menu
   int opc;//Vari�vel para a op��o
   printf("\n\t\t\t\tESCOLHA A CONVERS�O QUE DESEJA FAZER:\n\n");
   printf("     ________________________________________________________________________________________________________\n");
   printf("\n\t1 - Decimal para binario");
   printf("\t6 - Binario para decimal");
   printf("\t11 - Bin�rio para hexadecimal");
   printf("\n\t2 - Decimal para base tr�s ");
   printf("\t7 - Base tr�s para decimal");
   printf("\t12 - Bin�rio para octal");
   printf("\n\t3 - Decimal para base cinco ");	
   printf("\t8 - Base cinco para decimal");
   printf("\t13 - Hexadecimal para bin�rio");
   printf("\n\t4 - Decimal para octal");
   printf("\t\t9 - Octal para decimal");
   printf("\t\t14 - Octal para bin�rio");
   printf("\n\t5 - Decimal para hexadecimal");
   printf("\t10 - Hexadecimal para decimal");
   printf("\t15 - Sair\n\n");
   printf("     ________________________________________________________________________________________________________\n");
   printf("\n\n\tDIGITE O N�MERO DA OP��O DESEJADA: ");
   scanf("%d",&opc);//Leitura da op��o 
   switch(opc){//Switch do meunu de op��es
	   case 1://Decimal para bin�rio:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BIN�RIO:\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=2;//Atribui 2 a base de saida
	      printf("\n\tEscreva o n�mero que deseja converter: ");
	      scanf("%d",&numero);//L� o n�mero digitado pelo usu�rio
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BIN�RIO:\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO N�mero escolhido foi: %d",numero);//Mostra o n�mero escolhido pelo usu�rio
	      conversor();//Chama a fun��o do conversor
		  break;
	   case 2://Decimal para base tr�s:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE TR�S\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=3;//Atribui 3 a base de saida
	      printf("\n\tEscreva o n�mero que deseja converter: ");
	      scanf("%d",&numero);//L� o n�mero digitado pelo usu�rio
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE TR�S\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO N�mero escolhido foi: %d",numero);//Mostra o n�mero escolhido pelo usu�rio
	      conversor();//Chama a fun��o do conversor
		  break;
	   case 3://Decimal para base cinco:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE CINCO\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=5;//Atribui 5 a base de saida
	      printf("\n\tEscreva o n�mero que deseja converter: ");
	      scanf("%d",&numero);//L� o n�mero digitado pelo usu�rio
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA BASE CINCO\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO N�mero escolhido foi: %d",numero);//Mostra o n�mero escolhido pelo usu�rio
	      conversor();//Chama a fun��o do conversor
		  break;
	   case 4://Decimal para octal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA OCTAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=8;//Atribui 8 a base de saida
	      printf("\n\tEscreva o n�mero que deseja converter: ");
	      scanf("%d",&numero);//L� o n�mero digitado pelo usu�rio
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA OCTAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO N�mero escolhido foi: %d",numero);//Mostra o n�mero escolhido pelo usu�rio
	      conversor();//Chama a fun��o do conversor
		  break;
	   case 5://Decimal para hexadecimal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA HEXADECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      base_entrada=10;//Atribui 10 a base de entrada
	      base_saida=16;//Atribui 16 a base de saida
	      printf("\n\tEscreva o n�mero que deseja converter: ");
	      scanf("%d",&numero);//L� o n�mero digitado pelo usu�rio
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tDECIMAL PARA HEXADECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      printf("\n\t\tO N�mero escolhido foi: %d",numero);//Mostra o n�mero escolhido pelo usu�rio
	      conversor();//Chama a fun��o do conversor
		  break;
	   case 6: //Bin�rio para decimal (INDISPON�VEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBIN�RIO PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
		  break;
	   case 7://Base tr�s para decimal: (INDISPON�VEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBASE TR�S PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
		  break;
	   case 8://Base cinco para decimal: (INDIPON�VEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBASE CINCO PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
		  break;
	   case 9://Octal para decimal (INDISPON�VEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tOCTAL PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
		  break;
	   case 10://Hexadecimal para decimal (INDISPON�VEL)
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tHEXADECIMAL PARA DECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
	      break;
	   case 11://Bin�rio para hexadecimal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBIN�RIO PARA HEXADECIMAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
	      break;
	   case 12://Bin�rio para octal:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tBIN�RIO PARA OCTAL\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
	      break;
	   case 13://Hexadecimal para bin�rio:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tHEXADECIMAL PARA BIN�RIO\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
	      break;
	   case 14://Octal para bin�rio:
	      system("cls");//Limpa a tela
	      printf("\n\t\t\t\tOCTAL PARA BIN�RIO\n");
	      printf("     ________________________________________________________________________________________________________\n\n\n");
	      printf("\n\t\t\t\tBase indispon�vel, tente outra op��o.\n\n\n\n");
	      printf("     ________________________________________________________________________________________________________\n");
	      voltaMenu();//Chama a fun��o volta menu
		  break;
	   case 15://Op��o de cancelar o programa:
	     system("cls");//Limpa a tela
	     printf("     ________________________________________________________________________________________________________\n\n\n");
	     printf("\n\n\t\t\t\tVOC� SAIU DO CONVERSOR DE BASES!\n\n\n\n");
	     printf("     ________________________________________________________________________________________________________\n");
	     exit;//Finaliza o programa
		 break;
	   default://Se n�o o usu�rio n�o escolher uma op��o poss�vel:
	      system("cls");//Limpa a tela
	      menu();//Chama a fun�a�o do menu
	  	break;
		}
	return 0;
 }
 
int voltaMenu(){ //Procedimento que volta ao menu:
	int op;//Vari�vel de op��o do volta menu
	printf("\n\n\t\t\t\tDeseja voltar ao menu? (1-sim / 2-n�o) ");
	printf("\n\n\t\t\t\tDIGITE O N�MERO DA OP��O DESEJADA: ");
	scanf("%d",&op);//L� a op��o digitada
		if (op == 1) {//Se for 1 
			system("cls");//limpa a tela
			menu();//Chama a fun��o menu
		}else if(op==2){//Se a op��o for 2
			system("cls");//Limpa a tela
			printf("     ________________________________________________________________________________________________________\n\n\n");
			printf("\n\n\t\t\t\tVOC� SAIU DO CONVERSOR DE BASES!\n\n\n\n");
			printf("     ________________________________________________________________________________________________________\n");
			exit;//Finaliza o programa
		}else{//Se for digitado outra coisa
			system("cls");
			voltaMenu();//Chama a fun��o volta menu
		}
	return 0;
}
    
int conversor(){//Fun��o de convers�o
	while(numero > 0){//Enquanto o numero for maior que zero
		a[iterador] = numero % base_saida;//Atribui ao vetor a divisao inteira do numero pela base saida
		numero = (numero / base_saida);//N�mero recebe o resto da divisao de numero com a base saida
		iterador++;//Incrementa o iterador
	}
	printf("\n\n\t\tO resultado �: ");
	iterador--;//Decrementa o iterador
	while(iterador >= 0){//Enquanto o iterador for maior ou igual a zero
		if(base_saida == 16){//Se a base de sa�da for igual a 16
			escreva_basehex(a[iterador]);//Chama a fun��o de convers�o de s�mbolos da base hexadecimal
		} else{//Se n�o
			printf("%d",a[iterador]);//Escreve o resultado
		}
		iterador--;//Decrementa o iterador
		}
	printf("\n\n\n");
	printf("     ________________________________________________________________________________________________________\n");
	iterador = 0;//Atribui 0 ao iterador
	voltaMenu();//Chama a fun��o volta menu
	return 0;
}

int escreva_basehex(numero){//Fun��o de convers�o de simbolos da base hexadcimal
   switch(numero){//Switch do n�mero
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
