#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
funcaomenu()
{
	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
	printf("**               SEJA BEM-VINDO                **\n");
	printf("**               MENU PRINCIPAL                **\n");
	printf("**                                             **\n");
	printf("** 1-CONSULTAR                                 **\n");
	printf("** 2-EFETUAR RESERVA                           **\n");
	printf("** 3-VOOS POR ORDEM NUMERICA                   **\n");
	printf("** 4-VOOS POR ORDEM ALFABETICA                 **\n");
	printf("** 5-CANCELAR RESERVA                          **\n");
	printf("** 6-SAIR                                      **\n");
	printf("**                                             **\n");
	printf("********************v.0.0.1.3********************\n");
}
funcaoconsulta()
{
	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
	printf("**                                             **\n");
	printf("**                 CONSULTAR                   **\n");
	printf("**                                             **\n");
	printf("** 1-POR NUMERO DE VOO                         **\n");
	printf("** 2-POR ORIGEM                                **\n");
	printf("** 3-POR DESTINO                               **\n");
	printf("** 4-VOLTAR PARA O MENU PRINCIPAL              **\n");
	printf("**                                             **\n");
	printf("******************v.0.0.1.3**********************\n");	
}
funcaoreserva()
{
	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
	printf("**                                             **\n");
	printf("**                 RESERVA                     **\n");
	printf("**                                             **\n");
	printf("** 1-POR NUMERO DE VOO                         **\n");
	printf("** 2-POR ORIGEM DO VOO                         **\n");
	printf("** 3-VOLTAR PARA O MENU PRINCIPAL              **\n");
	printf("**                                             **\n");
	printf("********************v.0.0.1.3********************\n");
}
funcaonvoo(int numerovoo[])
{
	int i;	
	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
	printf("**                                             **\n");
	printf("**              NUMEROS DOS VOOS               **\n");
	printf("**                                             **\n");
	for(i=0;i<6;i++)
	{
	printf("** %d                                        **\n",numerovoo[i]);
	}
	printf("**                                             **\n");
}
main(void)
{
	/*********************************** arquivo aviao 01******************/ 
	char origemvoo1[20],destinovoo1[20];
	int numerovoo[6], fileira1[30],hora1,w,i;
	char fileiraa1[30],fileirab1[30],fileirac1[30],fileirad1[30],fileirae1[30],fileiraf1[30];
	char aeroportonatal[50];
	char aeroportosaopaulo[100];
	char aeroportoriodejaneiro[50];
	char aeroportobelohorizonte[50];
	FILE *aviao1,*PoltronaAviao1;
	aviao1=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo1.txt","r");
	for(i=0;i<1;i++)
	{
		fscanf(aviao1,"%d\n",&numerovoo[0]);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao1,"%[^\n]\n",origemvoo1);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao1,"%[^\n]\n",aeroportonatal);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao1,"%[^\n]\n",destinovoo1);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao1,"%[^\n]\n",aeroportosaopaulo);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao1,"%d\n",&hora1);
	} 
	/**********************************************************************/
	/**********************************arvivo aviao 02********************/
	FILE *aviao2,*PoltronaAviao2;
	char origemvoo2[20],destinovoo2[20];
	int fileira2[30],hora2;
	char fileiraa2[30],fileirab2[30],fileirac2[30],fileirad2[30],fileirae2[30],fileiraf2[30];
	aviao2=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo2.txt","r");
	for(i=0;i<1;i++)
	{
		fscanf(aviao2,"%d\n",&numerovoo[1]);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao2,"%[^\n]\n",origemvoo2);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao2,"%[^\n]\n",aeroportonatal);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao2,"%[^\n]\n",destinovoo2);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao2,"%[^\n]\n",aeroportoriodejaneiro);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao2,"%d\n",&hora2);
	} 
	/************************************************************************/
	/*********************************arquivo aviao 03***********************/
	FILE *aviao3,*PoltronaAviao3;
	char origemvoo3[20],destinovoo3[20];
	int fileira3[30],hora3;
	char fileiraa3[30],fileirab3[30],fileirac3[30],fileirad3[30],fileirae3[30],fileiraf3[30];
	aviao3=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo3.txt","r");
	for(i=0;i<1;i++)
	{
		fscanf(aviao3,"%d\n",&numerovoo[2]);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao3,"%[^\n]\n",origemvoo3);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao3,"%[^\n]\n",aeroportonatal);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao3,"%[^\n]\n",destinovoo3);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao3,"%[^\n]\n",aeroportobelohorizonte);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao3,"%d\n",&hora3);
	} 
	/***********************************************************************/
	/*********************************arquivo aviao 04***********************/
	FILE *aviao4,*PoltronaAviao4;
	char origemvoo4[20],destinovoo4[20];
	int fileira4[30],hora4;
	char fileiraa4[30],fileirab4[30],fileirac4[30],fileirad4[30],fileirae4[30],fileiraf4[30];
	aviao4=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo4.txt","r");
	for(i=0;i<1;i++)
	{
		fscanf(aviao4,"%d\n",&numerovoo[3]);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao4,"%[^\n]\n",origemvoo4);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao4,"%[^\n]\n",aeroportosaopaulo);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao4,"%[^\n]\n",destinovoo4);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao4,"%[^\n]\n",aeroportonatal);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao4,"%d\n",&hora4);
	} 
	/***********************************************************************/
	/*********************************arquivo aviao 05***********************/
	FILE *aviao5,*PoltronaAviao5;
	char origemvoo5[20],destinovoo5[20];
	int fileira5[30],hora5;
	char fileiraa5[30],fileirab5[30],fileirac5[30],fileirad5[30],fileirae5[30],fileiraf5[30];
	aviao5=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo5.txt","r");
	for(i=0;i<1;i++)
	{
		fscanf(aviao5,"%d\n",&numerovoo[4]);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao5,"%[^\n]\n",origemvoo5);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao5,"%[^\n]\n",aeroportoriodejaneiro);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao5,"%[^\n]\n",destinovoo5);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao5,"%[^\n]\n",aeroportonatal);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao5,"%d\n",&hora5);
	} 
	/***********************************************************************/
	/*********************************arquivo aviao 06***********************/
	FILE *aviao6,*PoltronaAviao6;
	char origemvoo6[20],destinovoo6[20];
	int fileira6[30],hora6;
	char fileiraa6[30],fileirab6[30],fileirac6[30],fileirad6[30],fileirae6[30],fileiraf6[30];
	aviao6=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo6.txt","r");
	for(i=0;i<1;i++)
	{
		fscanf(aviao6,"%d\n",&numerovoo[5]);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao6,"%[^\n]\n",origemvoo6);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao6,"%[^\n]\n",aeroportobelohorizonte);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao6,"%[^\n]\n",destinovoo6);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao6,"%[^\n]\n",aeroportonatal);
	}
	for(i=0;i<1;i++)
	{
		fscanf(aviao6,"%d\n",&hora6);
	} 
	/*********CRIAÇÃO DOS ARQUIVOS PARA RESERVA DE CADA CLIENTE***************/
	/**********************AVIAO 01*****************************************/
	FILE *voo1,*voo2,*voo3,*voo4,*voo5,*voo6;
	char voo01[100],voo02[100],voo03[100],voo04[100],voo05[100],voo06[100];
	char nome[100],sobrenome[100];
	char cpf[25];
	int fileiradeseja;
	char assentodeseja;
	/*****************CRIAÇÃO DE VARIAVEIS PARA O CANCELAMENTO*************/
	char nomecancelar[100],sobrenomecancelar[100],cpfcancelar[100],nomeexibir[10];
	int fileiracancelar,numerovoocancelar,comparar1,comparar2,comparar3;
	char assentocancelar,cancelar[100];
	/**************ORDENAÇÃO************************************/
	char nomes[10][100],auxiliar1[100];
	int r=0;
	int j, min,auxiliar,numerovoo1[6],quantidade;
	/***********************************************************************/
	/********************MENU DO SISTEMA***********************************/
	int opcao,opcao2,opcao3,NVOO,k,h;
	i=9;	
	while(i==9)
	{
		PoltronaAviao1=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo1.txt","r");
		for(w=0;w<30;w++)
		{
			fscanf(PoltronaAviao1,"%c %c %c    %c %c %c  %d\n",&fileiraa1[w],&fileirab1[w],&fileirac1[w],&fileirad1[w],&fileirae1[w],&fileiraf1[w],&fileira1[w]);
		}
		close(PoltronaAviao1);
		PoltronaAviao2=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo2.txt","r");
		for(w=0;w<30;w++)
		{
			fscanf(PoltronaAviao2,"%c %c %c    %c %c %c  %d\n",&fileiraa2[w],&fileirab2[w],&fileirac2[w],&fileirad2[w],&fileirae2[w],&fileiraf2[w],&fileira2[w]);
		}
		close(PoltronaAviao2);
		PoltronaAviao3=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo3.txt","r");
		for(w=0;w<30;w++)
		{
			fscanf(PoltronaAviao3,"%c %c %c    %c %c %c  %d\n",&fileiraa3[w],&fileirab3[w],&fileirac3[w],&fileirad3[w],&fileirae3[w],&fileiraf3[w],&fileira3[w]);
		}
		close(PoltronaAviao3);
		PoltronaAviao4=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo4.txt","r");
		for(w=0;w<30;w++)
		{
			fscanf(PoltronaAviao4,"%c %c %c    %c %c %c  %d\n",&fileiraa4[w],&fileirab4[w],&fileirac4[w],&fileirad4[w],&fileirae4[w],&fileiraf4[w],&fileira4[w]);
		}
		close(PoltronaAviao4);
		PoltronaAviao5=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo5.txt","r");
		for(w=0;w<30;w++)
		{
			fscanf(PoltronaAviao5,"%c %c %c    %c %c %c  %d\n",&fileiraa5[w],&fileirab5[w],&fileirac5[w],&fileirad5[w],&fileirae5[w],&fileiraf5[w],&fileira5[w]);
		}
		close(PoltronaAviao5);
		PoltronaAviao6=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo6.txt","r");
		for(w=0;w<30;w++)
		{
			fscanf(PoltronaAviao6,"%c %c %c    %c %c %c  %d\n",&fileiraa6[w],&fileirab6[w],&fileirac6[w],&fileirad6[w],&fileirae6[w],&fileiraf6[w],&fileira6[w]);
		}
		close(PoltronaAviao6);	
		/*ordenação selection*/
		for(i=0;i<6;i++)
		{
			numerovoo1[i]=numerovoo[i];
		}
  		for (i = 0; i < (6-1); i++) 
 		 	{
 				min = i;
  			for (j = (i+1); j < 6; j++)
			  	 {
    				if(numerovoo1[j] < numerovoo1[min]) 
       				min = j;
     			}
    		if (i != min)
			 	{
    				auxiliar = numerovoo1[i];
    				numerovoo1[i] = numerovoo1[min];
    				numerovoo1[min] = auxiliar;
   			 	 }
  			}
  		/*ordenação string origem*/
  		quantidade=4;
  		strcpy(nomes[0],origemvoo1);
  		strcpy(nomes[1],origemvoo4);
  		strcpy(nomes[2],origemvoo5);
  		strcpy(nomes[3],origemvoo6);
		  
		  for(i=0; i<quantidade; i++) {
	for(j=0; j<quantidade; j++) {
		if(strcmp(nomes[i], nomes[j]) < 0) {
		strcpy(auxiliar1, nomes[i]);
		strcpy(nomes[i], nomes[j]);
		strcpy(nomes[j], auxiliar1);
		}
	}
}
	voltamenuprincipal:
	i=0;
	opcao=0;
	opcao2=0;
	funcaomenu();	
	scanf("%d",&opcao);
	system("cls");
	switch(opcao)
	{
		case 1 : funcaoconsulta();
				scanf("%d",&opcao2);
				system("cls");
						switch(opcao2)
						{
							case 1 :voltaconsulta: 
									funcaonvoo(numerovoo);
								   	printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									printf("**                                             **\n");
									printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
									system("cls");
									if(i==numerovoo[0] || i==numerovoo[1] || i==numerovoo[2] || i==numerovoo[3] || i==numerovoo[4] || i==numerovoo[5])
									{
										if(i==numerovoo[0])
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[0]);
												printf("** ORIGEM : %s                              **\n",origemvoo1);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                         **\n",destinovoo1);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** HORARIO : %d:00                             **\n",hora1);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==numerovoo[1])
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[1]);
												printf("** ORIGEM : %s                              **\n",origemvoo2);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo2);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** HORARIO : %d:00                             **\n",hora2);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==numerovoo[2])
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[2]);
												printf("** ORIGEM : %s                              **\n",origemvoo3);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo3);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** HORARIO : %d:00                             **\n",hora3);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
											if(i==numerovoo[3])
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[3]);
												printf("** ORIGEM : %s                          **\n",origemvoo4);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** DESTINO : %s                             **\n",destinovoo4);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora4);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==numerovoo[4])
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[4]);
												printf("** ORIGEM : %s                     **\n",origemvoo5);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** DESTINO : %s                             **\n",destinovoo5);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora5);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");			
										}
										if(i==numerovoo[5])
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[5]);
												printf("** ORIGEM : %s                     **\n",origemvoo6);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** DESTINO : %s                             **\n",destinovoo6);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora6);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n**DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL**\n");scanf("%d",&i);
												system("cls");
												
										}		
										}
										if(i!=numerovoo[0] && i!=numerovoo[1] && i!=numerovoo[2] && i!=numerovoo[3] && i!=numerovoo[4] && i!=numerovoo[5] && i!=9)
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
												printf("**                                             **\n");
												printf("** NUMERO INVALIDO                             **\n");
												printf("** VOLTANDO...                                 **\n");
												printf("******************v.0.0.1.3**********************\n");	
												goto voltaconsulta;
										}
									 break;
						    case 2 :voltaconsulta2: 
								   	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							  	     printf("**                                             **\n");
							    	 printf("**          LISTA ORDEM ORIGEM DE VOO          **\n");
							   		 printf("**                                             **\n");
									 printf("** 1- %s                                    **\n",origemvoo1);
									 printf("** 2- %s                                **\n",origemvoo4);
									 printf("** 3- %s                           **\n",origemvoo5);
									 printf("** 4- %s                           **\n",origemvoo6);
									 printf("**                                             **\n");
									 printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									 printf("**                                             **\n");
							    	 printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
							    	 if(i==1 || i==2 || i==3 || i==4)
							    	 {
							    	 	if(i==1)
										{
											system("cls");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[0]);
												printf("** ORIGEM : %s                              **\n",origemvoo1);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                         **\n",destinovoo1);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** HORARIO : %d:00                             **\n",hora1);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[1]);
												printf("** ORIGEM : %s                              **\n",origemvoo2);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo2);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** HORARIO : %d:00                             **\n",hora2);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[2]);
												printf("** ORIGEM : %s                              **\n",origemvoo3);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo3);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** HORARIO : %d:00                             **\n",hora3);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
												system("cls");
										
										if(i==2)
										{system("cls");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[3]);
												printf("** ORIGEM : %s                          **\n",origemvoo4);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** DESTINO : %s                             **\n",destinovoo4);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora4);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==3)
										{system("cls");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[4]);
												printf("** ORIGEM : %s                     **\n",origemvoo5);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** DESTINO : %s                             **\n",destinovoo5);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora5);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");			
										}
										if(i==4)
										{system("cls");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[5]);
												printf("** ORIGEM : %s                     **\n",origemvoo6);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** DESTINO : %s                             **\n",destinovoo6);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora6);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
												
										}		
										
									 }
									 if(i!=1 && i!=2 && i!=3 && i!=4 && i!=9)
									 {system("cls");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** NUMERO INVALIDO                             **\n");
												printf("** VOLTANDO...                                 **\n");
												printf("******************v.0.0.1.3**********************\n");	
												goto voltaconsulta2;
									 }
									 
							    	 system("cls");
							    	 break;
							case 3 : voltadestino:
									 printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							  	     printf("**                                             **\n");
							    	 printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
							   		 printf("**                                             **\n");
									 printf("** 1- %s                                **\n",destinovoo1);
									 printf("** 2- %s                           **\n",destinovoo2);
									 printf("** 3- %s                           **\n",destinovoo3);
									 printf("** 4- %s                                    **\n",destinovoo4);
									 printf("**                                             **\n");
									 printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									 printf("**                                             **\n");
							    	 printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
							    	 system("cls");
							    	 if(i==1 || i==2 || i==3 || i==4 )
							    	 {
							    	 	if(i==1)
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[0]);
												printf("** ORIGEM : %s                              **\n",origemvoo1);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                         **\n",destinovoo1);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** HORARIO : %d:00                             **\n",hora1);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");system("cls");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==2)
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[1]);
												printf("** ORIGEM : %s                              **\n",origemvoo2);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo2);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** HORARIO : %d:00                             **\n",hora2);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==3)
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[2]);
												printf("** ORIGEM : %s                              **\n",origemvoo3);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo3);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** HORARIO : %d:00                             **\n",hora3);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");
										}
										if(i==4)
										{
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[3]);
												printf("** ORIGEM : %s                          **\n",origemvoo4);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** DESTINO : %s                             **\n",destinovoo4);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora4);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[4]);
												printf("** ORIGEM : %s                     **\n",origemvoo5);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** DESTINO : %s                             **\n",destinovoo5);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora5);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[5]);
												printf("** ORIGEM : %s                     **\n",origemvoo6);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** DESTINO : %s                             **\n",destinovoo6);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora6);
												printf("**                                             **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
												printf("                 **********\n");
												printf("                ************\n");
												printf("               **************\n");
												printf("              ****************\n");
												printf("             ******************\n");
												printf("            **                **\n");
												printf("            **                **\n");
												for(w=0;w<30;w++)
												{
												printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
												}
												printf("            **                **\n");
												printf("            **                **\n");
												printf("            ********************\n");
												printf("             ******************\n");
												printf("              ****************\n");
												printf("               **************\n");
												printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
												system("cls");		
										}
									 }
									  if(i!=1 && i!=2 && i!=3 && i!=4 && i!=9)
									 {         system("cls");
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** NUMERO INVALIDO                             **\n");
												printf("** VOLTANDO...                                 **\n");
												printf("******************v.0.0.1.3**********************\n");	
												goto  voltadestino;
									 }
							    	 break;
							case 4 :system ("cls");
									i=9;
									break;					
						}	
		
			break;
		case 2 : funcaoreserva();
				scanf("%d",&opcao3);
				system("cls");
					switch(opcao3)
					{
						case 1 :RESERVAVOLTA :
							    funcaonvoo(numerovoo);
								printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");scanf("%d",&NVOO);
								system("cls");
								switch(NVOO)
								{
									case 9 : goto voltamenuprincipal;
											break;
									case 1207: 	VOO1:
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**                  RESERVA                    **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[0]);
												printf("** ORIGEM : %s                              **\n",origemvoo1);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                         **\n",destinovoo1);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** HORARIO : %d:00                             **\n",hora1);
												printf("**                                             **\n");
												printf("** CONFIRMAR 1 PARA SIM E 0 PARA NAO           **\n");
												printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");		
												for(w=0;w<30;w++)
												{
													if(fileiraa1[w]=='X' && fileirab1[w]=='X' && fileirac1[w]=='X' && fileirad1[w]=='X' && fileirae1[w]=='X' && fileiraf1[w]=='X')
															{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** VOO CHEIO                                   **\n");
																		printf("** ESCOLHA OUTRO VOO...                        **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto RESERVAVOLTA;
															}	
												}
												scanf("%d",&i);
												switch(i)
												{
													case 9: system("cls");
															goto voltamenuprincipal;
															break;
													case 0: system("cls");
															goto RESERVAVOLTA;
															break;
													case 1: system("cls");
															printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
															printf("                                               \n");
															printf("                   RESERVA                    \n");gets(nome);/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("PRIMEIRO NOME(SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(nome);
															printf("\nSOBRENOME (SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(sobrenome);
															printf("\nCPF(SEM PONTO):");scanf("%s",&cpf);
															VOLTAASSENTO:
															printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
											            	printf("                 **********\n");
												            printf("                ************\n");
															printf("               **************\n");
											 				printf("              ****************\n");
											 			    printf("             ******************\n");
															printf("            **                **\n");
															printf("            **                **\n");
															for(w=0;w<30;w++)
																{
																	printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
																}
															printf("            **                **\n");
															printf("            **                **\n");
															printf("            ********************\n");
															printf("             ******************\n");
															printf("              ****************\n");
															printf("               **************\n");
															printf("                ************\n");
															printf("ONDEM CONTEM UM X E PORQUE ESTA OCUPADO\n");
															printf("DIGITE A FILEIRA QUE DESEJA EX:27\n");scanf("%d",&fileiradeseja);
															assentodeseja=getchar();/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("DIGITE O ASSENTO QUE DESEJA EX:B\n");scanf("%c",&assentodeseja);
															if(fileiradeseja>30 && fileiradeseja<1 && assentodeseja!='A' && assentodeseja!='a' && assentodeseja!='B' && assentodeseja!='b' && assentodeseja!='C' && assentodeseja!='c' && assentodeseja!='D' && assentodeseja!='d' && assentodeseja!='E' && assentodeseja!='e' && assentodeseja!='F' && assentodeseja!='f')
																{
																system("cls");
																printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																printf("**                                             **\n");
																printf("**                  RESERVA                    **\n");
																printf("**                                             **\n");
																printf("** NUMERO INVALIDO                             **\n");
																printf("** VOLTANDO...                                 **\n");
																printf("******************v.0.0.1.3**********************\n");	
																goto VOLTAASSENTO;
																}
															
															if(fileiraa1[fileiradeseja-1]==assentodeseja || fileirab1[fileiradeseja-1]==assentodeseja || fileirac1[fileiradeseja-1]==assentodeseja || fileirad1[fileiradeseja-1]==assentodeseja || fileirae1[fileiradeseja-1]==assentodeseja || fileiraf1[fileiradeseja-1]==assentodeseja)
															{
															sprintf(voo01,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 1\\%d%c.txt",fileiradeseja,assentodeseja);
															voo1=fopen(voo01,"w+");
																	fprintf(voo1,"%s\n",cpf);
																	fprintf(voo1,"NOME %s %s\n",nome,sobrenome);
																	fprintf(voo1,"Assento %d %c\n",fileiradeseja,assentodeseja);
															fclose(voo1);
															switch(assentodeseja)
															{
																case 'A':fileiraa1[fileiradeseja-1]='X';break;
																case 'a':fileiraa1[fileiradeseja-1]='X';break;
																case 'B':fileirab1[fileiradeseja-1]='X';break;
																case 'b':fileirab1[fileiradeseja-1]='X';break;
																case 'C':fileirac1[fileiradeseja-1]='X';break;
																case 'c':fileirac1[fileiradeseja-1]='X';break;
																case 'D':fileirad1[fileiradeseja-1]='X';break;
																case 'd':fileirad1[fileiradeseja-1]='X';break;
																case 'E':fileirae1[fileiradeseja-1]='X';break;
																case 'e':fileirae1[fileiradeseja-1]='X';break;
																case 'F':fileiraf1[fileiradeseja-1]='X';break;
																case 'f':fileiraf1[fileiradeseja-1]='X';break;	
															}
															PoltronaAviao1=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo1.txt","w+");
															for(w=0;w<30;w++)
																{
																	fprintf(PoltronaAviao1,"%c %c %c    %c %c %c  %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
																}
															close(PoltronaAviao1);
															system("cls");
															printf("***************************LINHAS AEREAS VOLARE AIR LTDA**********************\n");
															printf("**                                                                          \n");
															printf("**                                   TICKET                                 \n");
															printf("** NOME :%s %s                        \n",nome,sobrenome);
															printf("** CPF : %s                           \n",cpf);
															printf("** VOO : %d                                  \n",numerovoo[0]);
															printf("** ORIGEM : %s                              \n",origemvoo1);
															printf("** %s      \n",aeroportonatal);
															printf("** DESTINO : %s                    \n",destinovoo1);
															printf("** %s                         \n",aeroportosaopaulo);
															printf("** HORARIO : %d:00                             \n",hora1);
															printf("** ASSENTO : %d %c\n",fileiradeseja,assentodeseja);
															printf("**                                             \n");
															printf("** OBSERVACAO:COMPARECER 2 HORAS ANTES NO AEROPORTO PARA REALIZAR O CHECK-IN  \n                          \n");
															printf("***********************************v.0.0.1.3***********************************\n");
															printf("**DIGITE 9 PARA IR AO MENU PRINCIPAL OU QUALQUER OUTRO PARA SAIR             \n");scanf("%d",&i);
															if(i==9)
															{
															system("cls");
															goto voltamenuprincipal;
															}
															else
															goto SAIR;
															
															break;}
															else
																{
																	system("cls");
																	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																	printf("**                                             **\n");
																	printf("**                  RESERVA                    **\n");
																	printf("**                                             **\n");
																	printf("** ASSENTO JA ESTA OCUPADO                     **\n");
																	printf("** ESCOLHA OUTRO...                            **\n");
																	printf("******************v.0.0.1.3**********************\n");	
																	goto VOLTAASSENTO;
																}
															}
															break;
									case 1247: 	VOO2:
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**                   RESERVA                   **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[1]);
												printf("** ORIGEM : %s                              **\n",origemvoo2);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo2);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** HORARIO : %d:00                             **\n",hora2);
												printf("**                                             **\n");
												printf("** CONFIRMAR 1 PARA SIM E 0 PARA NAO           **\n");
												printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												for(w=0;w<30;w++)
													{
													if(fileiraa2[w]=='X' && fileirab2[w]=='X' && fileirac2[w]=='X' && fileirad2[w]=='X' && fileirae2[w]=='X' && fileiraf2[w]=='X')
															{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** VOO CHEIO                                   **\n");
																		printf("** ESCOLHA OUTRO VOO...                        **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto RESERVAVOLTA;
															}
													}
												scanf("%d",&i);
												switch(i)
												{
													case 9: system("cls");
															goto voltamenuprincipal;
															break;
													case 0: system("cls");
															goto RESERVAVOLTA;
															break;
													case 1: system("cls");
															printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
															printf("                                               \n");
															printf("                   RESERVA                    \n");gets(nome);/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("PRIMEIRO NOME(SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(nome);
															printf("\nSOBRENOME (SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(sobrenome);
															printf("\nCPF(SEM PONTO):");scanf("%s",&cpf);
															VOLTAASSENTO1:
															printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
															printf("                 **********\n");
															printf("                ************\n");
															printf("               **************\n");
															printf("              ****************\n");
															printf("             ******************\n");
															printf("            **                **\n");
															printf("            **                **\n");
															for(w=0;w<30;w++)
																{
																	printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
																}
															printf("            **                **\n");
															printf("            **                **\n");
															printf("            ********************\n");
															printf("             ******************\n");
															printf("              ****************\n");
															printf("               **************\n");
															printf("                ************\n");
															printf("ONDEM CONTEM UM X E PORQUE ESTA OCUPADO\n");
															printf("DIGITE A FILEIRA QUE DESEJA EX:27\n");scanf("%d",&fileiradeseja);
															assentodeseja=getchar();/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("DIGITE O ASSENTO QUE DESEJA EX:B\n");scanf("%c",&assentodeseja);
															if(fileiradeseja>30 && fileiradeseja<1 && assentodeseja!='A' && assentodeseja!='a' && assentodeseja!='B' && assentodeseja!='b' && assentodeseja!='C' && assentodeseja!='c' && assentodeseja!='D' && assentodeseja!='d' && assentodeseja!='E' && assentodeseja!='e' && assentodeseja!='F' && assentodeseja!='f')
																{
																system("cls");
																printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																printf("**                                             **\n");
																printf("**                  RESERVA                    **\n");
																printf("**                                             **\n");
																printf("** NUMERO INVALIDO                             **\n");
																printf("** VOLTANDO...                                 **\n");
																printf("******************v.0.0.1.3**********************\n");	
																goto VOLTAASSENTO1;
																}
															if(fileiraa2[fileiradeseja-1]==assentodeseja || fileirab2[fileiradeseja-1]==assentodeseja || fileirac2[fileiradeseja-1]==assentodeseja || fileirad2[fileiradeseja-1]==assentodeseja || fileirae2[fileiradeseja-1]==assentodeseja || fileiraf2[fileiradeseja-1]==assentodeseja)
															{
															sprintf(voo02,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 2\\%d%c.txt",fileiradeseja,assentodeseja);
															voo2=fopen(voo02,"w+");
																	fprintf(voo2,"%s\n",cpf);
																	fprintf(voo2,"NOME %s %s\n",nome,sobrenome);
																	fprintf(voo2,"Assento %d %c\n",fileiradeseja,assentodeseja);
															fclose(voo2);
															switch(assentodeseja)
															{
																case 'A':fileiraa2[fileiradeseja-1]='X';break;
																case 'a':fileiraa2[fileiradeseja-1]='X';break;
																case 'B':fileirab2[fileiradeseja-1]='X';break;
																case 'b':fileirab2[fileiradeseja-1]='X';break;
																case 'C':fileirac2[fileiradeseja-1]='X';break;
																case 'c':fileirac2[fileiradeseja-1]='X';break;
																case 'D':fileirad2[fileiradeseja-1]='X';break;
																case 'd':fileirad2[fileiradeseja-1]='X';break;
																case 'E':fileirae2[fileiradeseja-1]='X';break;
																case 'e':fileirae2[fileiradeseja-1]='X';break;
																case 'F':fileiraf2[fileiradeseja-1]='X';break;
																case 'f':fileiraf2[fileiradeseja-1]='X';break;	
															}
															PoltronaAviao2=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo2.txt","w+");
															for(w=0;w<30;w++)
																{
																	fprintf(PoltronaAviao2,"%c %c %c    %c %c %c  %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
																}
															close(PoltronaAviao2);
															system("cls");
															printf("***************************LINHAS AEREAS VOLARE AIR LTDA**********************\n");
															printf("**                                                                          \n");
															printf("**                                   TICKET                                 \n");
															printf("** NOME :%s %s                        \n",nome,sobrenome);
															printf("** CPF : %s                           \n",cpf);
															printf("** VOO : %d                                  \n",numerovoo[1]);
															printf("** ORIGEM : %s                              \n",origemvoo2);
															printf("** %s      \n",aeroportonatal);
															printf("** DESTINO : %s                    \n",destinovoo2);
															printf("** %s                         \n",aeroportoriodejaneiro);
															printf("** HORARIO : %d:00                             \n",hora2);
															printf("** ASSENTO : %d %c\n",fileiradeseja,assentodeseja);
															printf("**                                             \n");
															printf("** OBSERVACAO:COMPARECER 2 HORAS ANTES NO AEROPORTO PARA REALIZAR O CHECK-IN  \n                          \n");
															printf("***********************************v.0.0.1.3***********************************\n");
															printf("**DIGITE 9 PARA IR AO MENU PRINCIPAL OU QUALQUER OUTRO PARA SAIR             \n");scanf("%d",&i);
															if(i==9)
															{
															system("cls");
															goto voltamenuprincipal;
															}
															else
															goto SAIR;
															}		if(fileiraa2[fileiradeseja-1]=='X' || fileirab2[fileiradeseja-1]=='X' || fileirac2[fileiradeseja-1]=='X' || fileirad2[fileiradeseja-1]=='X' || fileirae2[fileiradeseja-1]=='X' || fileiraf2[fileiradeseja-1]=='X')
																	{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** ASSENTO JA ESTA OCUPADO                     **\n");
																		printf("** ESCOLHA OUTRO...                            **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto VOLTAASSENTO1;
																	}
															break;
															}
															break;
									case 1287: 	VOO3:
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**                   RESERVA                   **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[2]);
												printf("** ORIGEM : %s                              **\n",origemvoo3);
												printf("** %s      **\n",aeroportonatal);
												printf("** DESTINO : %s                    **\n",destinovoo3);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** HORARIO : %d:00                             **\n",hora3);
												printf("**                                             **\n");
												printf("** CONFIRMAR 1 PARA SIM E 0 PARA NAO           **\n");
												printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");	
												for(w=0;w<30;w++)
													{
													if(fileiraa3[w]=='X' && fileirab3[w]=='X' && fileirac3[w]=='X' && fileirad3[w]=='X' && fileirae3[w]=='X' && fileiraf3[w]=='X')
															{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** VOO CHEIO                                   **\n");
																		printf("** ESCOLHA OUTRO VOO...                        **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto RESERVAVOLTA;
															}
													}
												scanf("%d",&i);
												switch(i)
												{
													case 9: system("cls");
															goto voltamenuprincipal;
															break;
													case 0: system("cls");
															goto RESERVAVOLTA;
															break;
													case 1: system("cls");
															printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
															printf("                                               \n");
															printf("                   RESERVA                    \n");gets(nome);/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("PRIMEIRO NOME(SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(nome);
															printf("\nSOBRENOME (SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(sobrenome);
															printf("\nCPF(SEM PONTO):");scanf("%s",&cpf);
															VOLTAASSENTO2:
															printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
															printf("                 **********\n");
															printf("                ************\n");
															printf("               **************\n");
															printf("              ****************\n");
															printf("             ******************\n");
															printf("            **                **\n");
															printf("            **                **\n");
															for(w=0;w<30;w++)
																{
																	printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
																}
															printf("            **                **\n");
															printf("            **                **\n");
															printf("            ********************\n");
															printf("             ******************\n");
															printf("              ****************\n");
															printf("               **************\n");
															printf("                ************\n");
															printf("ONDEM CONTEM UM X E PORQUE ESTA OCUPADO\n");
															printf("DIGITE A FILEIRA QUE DESEJA EX:27\n");scanf("%d",&fileiradeseja);
															assentodeseja=getchar();/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("DIGITE O ASSENTO QUE DESEJA EX:B\n");scanf("%c",&assentodeseja);
															if(fileiradeseja>30 && fileiradeseja<1 && assentodeseja!='A' && assentodeseja!='a' && assentodeseja!='B' && assentodeseja!='b' && assentodeseja!='C' && assentodeseja!='c' && assentodeseja!='D' && assentodeseja!='d' && assentodeseja!='E' && assentodeseja!='e' && assentodeseja!='F' && assentodeseja!='f')
																{
																system("cls");
																printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																printf("**                                             **\n");
																printf("**                  RESERVA                    **\n");
																printf("**                                             **\n");
																printf("** NUMERO INVALIDO                             **\n");
																printf("** VOLTANDO...                                 **\n");
																printf("******************v.0.0.1.3**********************\n");	
																goto VOLTAASSENTO2;
																}
															if(fileiraa3[fileiradeseja-1]==assentodeseja || fileirab3[fileiradeseja-1]==assentodeseja || fileirac3[fileiradeseja-1]==assentodeseja || fileirad3[fileiradeseja-1]==assentodeseja || fileirae3[fileiradeseja-1]==assentodeseja || fileiraf3[fileiradeseja-1]==assentodeseja)
															{
															sprintf(voo03,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 3\\%d%c.txt",fileiradeseja,assentodeseja);
															voo3=fopen(voo03,"w+");
																	fprintf(voo3,"%s\n",cpf);
																	fprintf(voo3,"NOME %s %s\n",nome,sobrenome);
																	fprintf(voo3,"Assento %d %c\n",fileiradeseja,assentodeseja);
															fclose(voo3);
															switch(assentodeseja)
															{
																case 'A':fileiraa3[fileiradeseja-1]='X';break;
																case 'a':fileiraa3[fileiradeseja-1]='X';break;
																case 'B':fileirab3[fileiradeseja-1]='X';break;
																case 'b':fileirab3[fileiradeseja-1]='X';break;
																case 'C':fileirac3[fileiradeseja-1]='X';break;
																case 'c':fileirac3[fileiradeseja-1]='X';break;
																case 'D':fileirad3[fileiradeseja-1]='X';break;
																case 'd':fileirad3[fileiradeseja-1]='X';break;
																case 'E':fileirae3[fileiradeseja-1]='X';break;
																case 'e':fileirae3[fileiradeseja-1]='X';break;
																case 'F':fileiraf3[fileiradeseja-1]='X';break;
																case 'f':fileiraf3[fileiradeseja-1]='X';break;	
															}
															PoltronaAviao3=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo3.txt","w+");
															for(w=0;w<30;w++)
																{
																	fprintf(PoltronaAviao3,"%c %c %c    %c %c %c  %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
																}
															close(PoltronaAviao3);
															system("cls");
															printf("***************************LINHAS AEREAS VOLARE AIR LTDA**********************\n");
															printf("**                                                                          \n");
															printf("**                                   TICKET                                 \n");
															printf("** NOME :%s %s                        \n",nome,sobrenome);
															printf("** CPF : %s                           \n",cpf);
															printf("** VOO : %d                                  \n",numerovoo[2]);
															printf("** ORIGEM : %s                              \n",origemvoo3);
															printf("** %s      \n",aeroportonatal);
															printf("** DESTINO : %s                    \n",destinovoo3);
															printf("** %s                         \n",aeroportobelohorizonte);
															printf("** HORARIO : %d:00                             \n",hora3);
															printf("** ASSENTO : %d %c\n",fileiradeseja,assentodeseja);
															printf("**                                             \n");
															printf("** OBSERVACAO:COMPARECER 2 HORAS ANTES NO AEROPORTO PARA REALIZAR O CHECK-IN  \n                          \n");
															printf("***********************************v.0.0.1.3***********************************\n");
															printf("**DIGITE 9 PARA IR AO MENU PRINCIPAL OU QUALQUER OUTRO PARA SAIR             \n");scanf("%d",&i);
															if(i==9)
															{
															system("cls");
															goto voltamenuprincipal;
															}
															else
															goto SAIR;
															}								if(fileiraa3[fileiradeseja-1]=='X' || fileirab3[fileiradeseja-1]=='X' || fileirac3[fileiradeseja-1]=='X' || fileirad3[fileiradeseja-1]=='X' || fileirae3[fileiradeseja-1]=='X' || fileiraf3[fileiradeseja-1]=='X')
																	{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** ASSENTO JA ESTA OCUPADO                     **\n");
																		printf("** ESCOLHA OUTRO...                            **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto VOLTAASSENTO2;
																	}
															break;
															}
															break;	
														
									case 1248: 	VOO5:
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[4]);
												printf("** ORIGEM : %s                     **\n",origemvoo5);
												printf("** %s                         **\n",aeroportoriodejaneiro);
												printf("** DESTINO : %s                             **\n",destinovoo5);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora5);
												printf("**                                             **\n");
												printf("** CONFIRMAR 1 PARA SIM E 0 PARA NAO           **\n");
												printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												for(w=0;w<30;w++)
													{
													if(fileiraa5[w]=='X' && fileirab5[w]=='X' && fileirac5[w]=='X' && fileirad5[w]=='X' && fileirae5[w]=='X' && fileiraf5[w]=='X')
															{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** VOO CHEIO                                   **\n");
																		printf("** ESCOLHA OUTRO VOO...                        **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto RESERVAVOLTA;
															}
													}
												scanf("%d",&i);
												switch(i)
												{
													case 9: system("cls");
															goto voltamenuprincipal;
															break;
													case 0: system("cls");
															goto RESERVAVOLTA;
															break;
													case 1: system("cls");
															printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
															printf("                                               \n");
															printf("                   RESERVA                    \n");gets(nome);/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("PRIMEIRO NOME(SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(nome);
															printf("\nSOBRENOME (SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(sobrenome);
															printf("\nCPF(SEM PONTO):");scanf("%s",&cpf);
															VOLTAASSENTO5:
															printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
															printf("                 **********\n");
															printf("                ************\n");
															printf("               **************\n");
															printf("              ****************\n");
															printf("             ******************\n");
															printf("            **                **\n");
															printf("            **                **\n");
															for(w=0;w<30;w++)
																{
																	printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
																}
															printf("            **                **\n");
															printf("            **                **\n");
															printf("            ********************\n");
															printf("             ******************\n");
															printf("              ****************\n");
															printf("               **************\n");
															printf("                ************\n");
															printf("ONDEM CONTEM UM X E PORQUE ESTA OCUPADO\n");
															printf("DIGITE A FILEIRA QUE DESEJA EX:27\n");scanf("%d",&fileiradeseja);
															assentodeseja=getchar();/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("DIGITE O ASSENTO QUE DESEJA EX:B\n");scanf("%c",&assentodeseja);
															if(fileiradeseja>30 && fileiradeseja<1 && assentodeseja!='A' && assentodeseja!='a' && assentodeseja!='B' && assentodeseja!='b' && assentodeseja!='C' && assentodeseja!='c' && assentodeseja!='D' && assentodeseja!='d' && assentodeseja!='E' && assentodeseja!='e' && assentodeseja!='F' && assentodeseja!='f')
																{
																system("cls");
																printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																printf("**                                             **\n");
																printf("**                  RESERVA                    **\n");
																printf("**                                             **\n");
																printf("** NUMERO INVALIDO                             **\n");
																printf("** VOLTANDO...                                 **\n");
																printf("******************v.0.0.1.3**********************\n");	
																goto VOLTAASSENTO5;
																}
															if(fileiraa5[fileiradeseja-1]==assentodeseja || fileirab5[fileiradeseja-1]==assentodeseja || fileirac5[fileiradeseja-1]==assentodeseja || fileirad5[fileiradeseja-1]==assentodeseja || fileirae5[fileiradeseja-1]==assentodeseja || fileiraf5[fileiradeseja-1]==assentodeseja)
															{
															sprintf(voo05,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 5\\%d%c.txt",fileiradeseja,assentodeseja);
															voo5=fopen(voo05,"w+");
																	fprintf(voo5,"%s\n",cpf);
																	fprintf(voo5,"NOME %s %s\n",nome,sobrenome);
																	fprintf(voo5,"Assento %d %c\n",fileiradeseja,assentodeseja);
															fclose(voo5);
															switch(assentodeseja)
															{
																case 'A':fileiraa5[fileiradeseja-1]='X';break;
																case 'a':fileiraa5[fileiradeseja-1]='X';break;
																case 'B':fileirab5[fileiradeseja-1]='X';break;
																case 'b':fileirab5[fileiradeseja-1]='X';break;
																case 'C':fileirac5[fileiradeseja-1]='X';break;
																case 'c':fileirac5[fileiradeseja-1]='X';break;
																case 'D':fileirad5[fileiradeseja-1]='X';break;
																case 'd':fileirad5[fileiradeseja-1]='X';break;
																case 'E':fileirae5[fileiradeseja-1]='X';break;
																case 'e':fileirae5[fileiradeseja-1]='X';break;
																case 'F':fileiraf5[fileiradeseja-1]='X';break;
																case 'f':fileiraf5[fileiradeseja-1]='X';break;	
															}
															PoltronaAviao5=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo5.txt","w+");
															for(w=0;w<30;w++)
																{
																	fprintf(PoltronaAviao5,"%c %c %c    %c %c %c  %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
																}
															close(PoltronaAviao5);
															system("cls");
															printf("***************************LINHAS AEREAS VOLARE AIR LTDA**********************\n");
															printf("**                                                                          \n");
															printf("**                                   TICKET                                 \n");
															printf("** NOME :%s %s                        \n",nome,sobrenome);
															printf("** CPF : %s                           \n",cpf);
															printf("** VOO : %d                                  \n",numerovoo[4]);
															printf("** ORIGEM : %s                              \n",origemvoo5);
															printf("** %s      \n",aeroportoriodejaneiro);
															printf("** DESTINO : %s                    \n",destinovoo5);
															printf("** %s                         \n",aeroportonatal);
															printf("** HORARIO : %d:00                             \n",hora5);
															printf("** ASSENTO : %d %c\n",fileiradeseja,assentodeseja);
															printf("**                                             \n");
															printf("** OBSERVACAO:COMPARECER 2 HORAS ANTES NO AEROPORTO PARA REALIZAR O CHECK-IN  \n                          \n");
															printf("***********************************v.0.0.1.3***********************************\n");
															printf("**DIGITE 9 PARA IR AO MENU PRINCIPAL OU QUALQUER OUTRO PARA SAIR             \n");scanf("%d",&i);
															if(i==9)
															{
															system("cls");
															goto voltamenuprincipal;
															}
															else
															goto SAIR;
															}
															if(fileiraa5[fileiradeseja-1]=='X' || fileirab5[fileiradeseja-1]=='X' || fileirac5[fileiradeseja-1]=='X' || fileirad5[fileiradeseja-1]=='X' || fileirae5[fileiradeseja-1]=='X' || fileiraf5[fileiradeseja-1]=='X')
																	{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** ASSENTO JA ESTA OCUPADO                     **\n");
																		printf("** ESCOLHA OUTRO...                            **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto VOLTAASSENTO5;
																	}
															break;
															}
															break;	
									case 1288: 	VOO6:
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**            CONSULTAR  POR ORIGEM            **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[5]);
												printf("** ORIGEM : %s                     **\n",origemvoo6);
												printf("** %s                        **\n",aeroportobelohorizonte);
												printf("** DESTINO : %s                             **\n",destinovoo6);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora6);
												printf("**                                             **\n");
												printf("** CONFIRMAR 1 PARA SIM E 0 PARA NAO           **\n");
												printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");	
												for(w=0;w<30;w++)
													{
													if(fileiraa6[w]=='X' && fileirab6[w]=='X' && fileirac6[w]=='X' && fileirad6[w]=='X' && fileirae6[w]=='X' && fileiraf6[w]=='X')
															{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** VOO CHEIO                                   **\n");
																		printf("** ESCOLHA OUTRO VOO...                        **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto RESERVAVOLTA;
															}
													}
												scanf("%d",&i);
												switch(i)
												{
													case 9: system("cls");
															goto voltamenuprincipal;
															break;
													case 0: system("cls");
															goto RESERVAVOLTA;
															break;
													case 1: system("cls");
															printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
															printf("                                               \n");
															printf("                   RESERVA                    \n");gets(nome);/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("PRIMEIRO NOME(SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(nome);
															printf("\nSOBRENOME (SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(sobrenome);
															printf("\nCPF(SEM PONTO):");scanf("%s",&cpf);
															VOLTAASSENTO6:
															printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
															printf("                 **********\n");
															printf("                ************\n");
															printf("               **************\n");
															printf("              ****************\n");
															printf("             ******************\n");
															printf("            **                **\n");
															printf("            **                **\n");
															for(w=0;w<30;w++)
																{
																	printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
																}
															printf("            **                **\n");
															printf("            **                **\n");
															printf("            ********************\n");
															printf("             ******************\n");
															printf("              ****************\n");
															printf("               **************\n");
															printf("                ************\n");
															printf("ONDEM CONTEM UM X E PORQUE ESTA OCUPADO\n");
															printf("DIGITE A FILEIRA QUE DESEJA EX:27\n");scanf("%d",&fileiradeseja);
															assentodeseja=getchar();/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("DIGITE O ASSENTO QUE DESEJA EX:B\n");scanf("%c",&assentodeseja);
															if(fileiradeseja>30 && fileiradeseja<1 && assentodeseja!='A' && assentodeseja!='a' && assentodeseja!='B' && assentodeseja!='b' && assentodeseja!='C' && assentodeseja!='c' && assentodeseja!='D' && assentodeseja!='d' && assentodeseja!='E' && assentodeseja!='e' && assentodeseja!='F' && assentodeseja!='f')
																{
																system("cls");
																printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																printf("**                                             **\n");
																printf("**                  RESERVA                    **\n");
																printf("**                                             **\n");
																printf("** NUMERO INVALIDO                             **\n");
																printf("** VOLTANDO...                                 **\n");
																printf("******************v.0.0.1.3**********************\n");	
																goto VOLTAASSENTO6;
																}
															if(fileiraa6[fileiradeseja-1]==assentodeseja || fileirab6[fileiradeseja-1]==assentodeseja || fileirac6[fileiradeseja-1]==assentodeseja || fileirad6[fileiradeseja-1]==assentodeseja || fileirae6[fileiradeseja-1]==assentodeseja || fileiraf6[fileiradeseja-1]==assentodeseja)
															{
															sprintf(voo06,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 6\\%d%c.txt",fileiradeseja,assentodeseja);
															voo6=fopen(voo06,"w+");
																fprintf(voo6,"%s\n",cpf);	
																fprintf(voo6,"NOME %s %s\n",nome,sobrenome);
																fprintf(voo6,"Assento %d %c\n",fileiradeseja,assentodeseja);
															fclose(voo6);
															switch(assentodeseja)
															{
																case 'A':fileiraa6[fileiradeseja-1]='X';break;
																case 'a':fileiraa6[fileiradeseja-1]='X';break;
																case 'B':fileirab6[fileiradeseja-1]='X';break;
																case 'b':fileirab6[fileiradeseja-1]='X';break;
																case 'C':fileirac6[fileiradeseja-1]='X';break;
																case 'c':fileirac6[fileiradeseja-1]='X';break;
																case 'D':fileirad6[fileiradeseja-1]='X';break;
																case 'd':fileirad6[fileiradeseja-1]='X';break;
																case 'E':fileirae6[fileiradeseja-1]='X';break;
																case 'e':fileirae6[fileiradeseja-1]='X';break;
																case 'F':fileiraf6[fileiradeseja-1]='X';break;
																case 'f':fileiraf6[fileiradeseja-1]='X';break;	
															}
															PoltronaAviao6=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo6.txt","w+");
															for(w=0;w<30;w++)
																{
																	fprintf(PoltronaAviao6,"%c %c %c    %c %c %c  %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
																}
															close(PoltronaAviao6);
															system("cls");
															printf("***************************LINHAS AEREAS VOLARE AIR LTDA**********************\n");
															printf("**                                                                          \n");
															printf("**                                   TICKET                                 \n");
															printf("** NOME :%s %s                        \n",nome,sobrenome);
															printf("** CPF : %s                           \n",cpf);
															printf("** VOO : %d                                  \n",numerovoo[5]);
															printf("** ORIGEM : %s                              \n",origemvoo6);
															printf("** %s      \n",aeroportobelohorizonte);
															printf("** DESTINO : %s                    \n",destinovoo6);
															printf("** %s                         \n",aeroportonatal);
															printf("** HORARIO : %d:00                             \n",hora6);
															printf("** ASSENTO : %d %c\n",fileiradeseja,assentodeseja);
															printf("**                                             \n");
															printf("** OBSERVACAO:COMPARECER 2 HORAS ANTES NO AEROPORTO PARA REALIZAR O CHECK-IN  \n                          \n");
															printf("***********************************v.0.0.1.3***********************************\n");
															printf("**DIGITE 9 PARA IR AO MENU PRINCIPAL OU QUALQUER OUTRO PARA SAIR             \n");scanf("%d",&i);
															if(i==9)
															{
															system("cls");
															goto voltamenuprincipal;
															}
															else
															goto SAIR;
															}
															if(fileiraa6[fileiradeseja-1]=='X' || fileirab6[fileiradeseja-1]=='X' || fileirac6[fileiradeseja-1]=='X' || fileirad6[fileiradeseja-1]=='X' || fileirae6[fileiradeseja-1]=='X' || fileiraf6[fileiradeseja-1]=='X')
																	{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** ASSENTO JA ESTA OCUPADO                     **\n");
																		printf("** ESCOLHA OUTRO...                            **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto VOLTAASSENTO6;
																	}break;}
															break;
									case 1208: 	VOO4:
												printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
												printf("**                                             **\n");
												printf("**                   RESERVA                   **\n");
												printf("**                                             **\n");
												printf("** VOO : %d                                  **\n",numerovoo[3]);
												printf("** ORIGEM : %s                          **\n",origemvoo4);
												printf("** %s        **\n",aeroportosaopaulo);
												printf("** DESTINO : %s                             **\n",destinovoo4);
												printf("** %s      **\n",aeroportonatal);
												printf("** HORARIO : %d:00                             **\n",hora4);
												printf("**                                             **\n");
												printf("** CONFIRMAR 1 PARA SIM E 0 PARA NAO           **\n");
												printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
												printf("******************v.0.0.1.3**********************\n\n\n\n\n");
												for(w=0;w<30;w++)
													{
													if(fileiraa4[w]=='X' && fileirab4[w]=='X' && fileirac4[w]=='X' && fileirad4[w]=='X' && fileirae4[w]=='X' && fileiraf4[w]=='X')
															{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** VOO CHEIO                                   **\n");
																		printf("** ESCOLHA OUTRO VOO...                        **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto RESERVAVOLTA;
															}
													}
												scanf("%d",&i);
												switch(i)
												{
													case 9: system("cls");
															goto voltamenuprincipal;
															break;
													case 0: system("cls");
															goto RESERVAVOLTA;
															break;
													case 1: system("cls");
															printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
															printf("                                               \n");
															printf("                   RESERVA                    \n");gets(nome);/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("PRIMEIRO NOME(SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(nome);
															printf("\nSOBRENOME (SEM ACENTO E EM LETRAS MAIUSCULAS):");gets(sobrenome);
															printf("\nCPF(SEM PONTO):");scanf("%s",&cpf);
															VOLTAASSENTO4:
															printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
															printf("                 **********\n");
															printf("                ************\n");
															printf("               **************\n");
															printf("              ****************\n");
															printf("             ******************\n");
															printf("            **                **\n");
															printf("            **                **\n");
															for(w=0;w<30;w++)
																{
																	printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
																}
															printf("            **                **\n");
															printf("            **                **\n");
															printf("            ********************\n");
															printf("             ******************\n");
															printf("              ****************\n");
															printf("               **************\n");
															printf("                ************\n");
															printf("ONDEM CONTEM UM X E PORQUE ESTA OCUPADO\n");
															printf("DIGITE A FILEIRA QUE DESEJA EX:27\n");scanf("%d",&fileiradeseja);
															assentodeseja=getchar();/*FOI O MODO DE AJEITAR O ERRO QUE ESTAVA DANDO */
															printf("DIGITE O ASSENTO QUE DESEJA EX:B\n");scanf("%c",&assentodeseja);
															if(fileiradeseja>30 && fileiradeseja<1 && assentodeseja!='A' && assentodeseja!='a' && assentodeseja!='B' && assentodeseja!='b' && assentodeseja!='C' && assentodeseja!='c' && assentodeseja!='D' && assentodeseja!='d' && assentodeseja!='E' && assentodeseja!='e' && assentodeseja!='F' && assentodeseja!='f')
																{
																system("cls");
																printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																printf("**                                             **\n");
																printf("**                  RESERVA                    **\n");
																printf("**                                             **\n");
																printf("** NUMERO INVALIDO                             **\n");
																printf("** VOLTANDO...                                 **\n");
																printf("******************v.0.0.1.3**********************\n");	
																goto VOLTAASSENTO4;
																}
															if(fileiraa4[fileiradeseja-1]==assentodeseja || fileirab4[fileiradeseja-1]==assentodeseja || fileirac4[fileiradeseja-1]==assentodeseja || fileirad4[fileiradeseja-1]==assentodeseja || fileirae4[fileiradeseja-1]==assentodeseja || fileiraf4[fileiradeseja-1]==assentodeseja)
															{
															sprintf(voo04,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 4\\%d%c.txt",fileiradeseja,assentodeseja);
															voo4=fopen(voo04,"w+");
																	fprintf(voo4,"%s\n",cpf);
																	fprintf(voo4,"NOME %s %s\n",nome,sobrenome);			
																	fprintf(voo4,"Assento %d %c\n",fileiradeseja,assentodeseja);
															fclose(voo4);
															switch(assentodeseja)
															{
																case 'A':fileiraa4[fileiradeseja-1]='X';break;
																case 'a':fileiraa4[fileiradeseja-1]='X';break;
																case 'B':fileirab4[fileiradeseja-1]='X';break;
																case 'b':fileirab4[fileiradeseja-1]='X';break;
																case 'C':fileirac4[fileiradeseja-1]='X';break;
																case 'c':fileirac4[fileiradeseja-1]='X';break;
																case 'D':fileirad4[fileiradeseja-1]='X';break;
																case 'd':fileirad4[fileiradeseja-1]='X';break;
																case 'E':fileirae4[fileiradeseja-1]='X';break;
																case 'e':fileirae4[fileiradeseja-1]='X';break;
																case 'F':fileiraf4[fileiradeseja-1]='X';break;
																case 'f':fileiraf4[fileiradeseja-1]='X';break;	
															}
															PoltronaAviao4=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo4.txt","w+");
															for(w=0;w<30;w++)
																{
																	fprintf(PoltronaAviao4,"%c %c %c    %c %c %c  %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
																}
															close(PoltronaAviao4);
															system("cls");
															printf("***************************LINHAS AEREAS VOLARE AIR LTDA**********************\n");
															printf("**                                                                          \n");
															printf("**                                   TICKET                                 \n");
															printf("** NOME :%s %s                        \n",nome,sobrenome);
															printf("** CPF : %s                           \n",cpf);
															printf("** VOO : %d                                  \n",numerovoo[3]);
															printf("** ORIGEM : %s                              \n",origemvoo4);
															printf("** %s      \n",aeroportosaopaulo);
															printf("** DESTINO : %s                    \n",destinovoo4);
															printf("** %s                         \n",aeroportonatal);
															printf("** HORARIO : %d:00                             \n",hora4);
															printf("** ASSENTO : %d %c\n",fileiradeseja,assentodeseja);
															printf("**                                             \n");
															printf("** OBSERVACAO:COMPARECER 2 HORAS ANTES NO AEROPORTO PARA REALIZAR O CHECK-IN  \n                          \n");
															printf("***********************************v.0.0.1.3***********************************\n");
															printf("**DIGITE 9 PARA IR AO MENU PRINCIPAL OU QUALQUER OUTRO PARA SAIR             \n");scanf("%d",&i);
															if(i==9)
															{
															system("cls");
															goto voltamenuprincipal;
															}
															else
															goto SAIR;
															}
															if(fileiraa4[fileiradeseja-1]=='X' || fileirab4[fileiradeseja-1]=='X' || fileirac4[fileiradeseja-1]=='X' || fileirad4[fileiradeseja-1]=='X' || fileirae4[fileiradeseja-1]=='X' || fileiraf4[fileiradeseja-1]=='X')
																	{
																		system("cls");
																		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
																		printf("**                                             **\n");
																		printf("**                  RESERVA                    **\n");
																		printf("**                                             **\n");
																		printf("** ASSENTO JA ESTA OCUPADO                     **\n");
																		printf("** ESCOLHA OUTRO...                            **\n");
																		printf("******************v.0.0.1.3**********************\n");	
																		goto VOLTAASSENTO4;
																	}
															break;
															}
															break;								
					}
					case 2 :system("cls");	
							printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							printf("**                                             **\n");
							printf("**                   RESERVA                   **\n");
							printf("**  (DIGITE O NUMERO CORRESPONDENTE A ORIGEM)  **\n");
							printf("** 1- %s                                    **\n",origemvoo1);
							printf("** 2- %s                                **\n",origemvoo4);
							printf("** 3- %s                           **\n",origemvoo5);
							printf("** 4- %s                           **\n",origemvoo6);
							printf("**                                             **\n");
							printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
							printf("**                                             **\n");
							printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
							switch(i)
							{
								case 1 :system("cls");
										printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							  	     	printf("**                                             **\n");
							    	 	printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
							   		 	printf("**                                             **\n");
									 	printf("** 1- %s                                **\n",destinovoo1);
									 	printf("** 2- %s                           **\n",destinovoo2);
									 	printf("** 3- %s                           **\n",destinovoo3);
									 	printf("**                                             **\n");
									 	printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									 	printf("**                                             **\n");
							    	 	printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
							    	 	switch(i)
							    	 	{
							    	 		case 1:	system("cls");
											 		goto VOO1;
											 		break;
											case 2:system("cls");
											 		goto VOO2;
											 		break;
											case 3:system("cls");
											 		goto VOO3;
											 		break;
											case 9:system("cls");
													printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
													printf("**                                             **\n");
													printf("**                  RESERVA                    **\n");
													printf("**                                             **\n");
													printf("** VOLTANDO AO MENU PRINCIPAL...               **\n");
													printf("**                                             **\n");
													printf("******************v.0.0.1.3**********************\n");	
												   goto voltamenuprincipal;
												   break;
										}break;
							    case 2:system("cls");
										printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							  	     	printf("**                                             **\n");
							    	 	printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
							   		 	printf("**                                             **\n");
									 	printf("** 1- %s                                    **\n",destinovoo4);
									 	printf("**                                             **\n");
									 	printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									 	printf("**                                             **\n");
							    	 	printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
										switch(i)
							    	 	{
							    	 		case 1:	system("cls");
											 		goto VOO4;
											 		break;
											case 9:system("cls");
													printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
													printf("**                                             **\n");
													printf("**                  RESERVA                    **\n");
													printf("**                                             **\n");
													printf("** VOLTANDO AO MENU PRINCIPAL...               **\n");
													printf("**                                             **\n");
													printf("******************v.0.0.1.3**********************\n");	
												   goto voltamenuprincipal;
												   break;
										}
										break;
										
								case 3:
										system("cls");
										printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							  	     	printf("**                                             **\n");
							    	 	printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
							   		 	printf("**                                             **\n");
									 	printf("** 1- %s                                    **\n",destinovoo5);
									 	printf("**                                             **\n");
									 	printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									 	printf("**                                             **\n");
							    	 	printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
										switch(i)
							    	 	{
							    	 		case 1:	system("cls");
											 		goto VOO5;
											 		break;
											case 9:system("cls");
													printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
													printf("**                                             **\n");
													printf("**                  RESERVA                    **\n");
													printf("**                                             **\n");
													printf("** VOLTANDO AO MENU PRINCIPAL...               **\n");
													printf("**                                             **\n");
													printf("******************v.0.0.1.3**********************\n");	
												   goto voltamenuprincipal;
												   break;
										}break;
								case 4:
										system("cls");
										printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							  	     	printf("**                                             **\n");
							    	 	printf("**          LISTA ORDEM DESTINO DE VOO         **\n");
							   		 	printf("**                                             **\n");
									 	printf("** 1- %s                                    **\n",destinovoo6);
									 	printf("**                                             **\n");
									 	printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
									 	printf("**                                             **\n");
							    	 	printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
										switch(i)
							    	 	{
							    	 		case 1:	system("cls");
											 		goto VOO6;
											 		break;
											case 9:system("cls");
													printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
													printf("**                                             **\n");
													printf("**                  RESERVA                    **\n");
													printf("**                                             **\n");
													printf("** VOLTANDO AO MENU PRINCIPAL...               **\n");
													printf("**                                             **\n");
													printf("******************v.0.0.1.3**********************\n");	
												   goto voltamenuprincipal;
												   break;
										}break;	 	
							}
					break;
					case 3:system("cls");
							printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
							printf("**                                             **\n");
							printf("**                  RESERVA                    **\n");
							printf("**                                             **\n");
							printf("** VOLTANDO AO MENU PRINCIPAL...               **\n");
							printf("**                                             **\n");
							printf("******************v.0.0.1.3**********************\n");	
							goto voltamenuprincipal;
							break;
					}
		
				break;
		case 3:	voltaconsultanvoo:
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo1[0]);
				printf("** ORIGEM : %s                              **\n",origemvoo1);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                         **\n",destinovoo1);
				printf("** %s        **\n",aeroportosaopaulo);
				printf("** HORARIO : %d:00                             **\n",hora1);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo1[1]);
				printf("** ORIGEM : %s                          **\n",origemvoo4);
				printf("** %s        **\n",aeroportosaopaulo);
				printf("** DESTINO : %s                             **\n",destinovoo4);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora4);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}		
				if(i==0)
				{system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo1[2]);
				printf("** ORIGEM : %s                              **\n",origemvoo2);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                    **\n",destinovoo2);
				printf("** %s                         **\n",aeroportoriodejaneiro);
				printf("** HORARIO : %d:00                             **\n",hora2);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo1[3]);
				printf("** ORIGEM : %s                     **\n",origemvoo5);
				printf("** %s                         **\n",aeroportoriodejaneiro);
				printf("** DESTINO : %s                             **\n",destinovoo5);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora5);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo1[4]);
				printf("** ORIGEM : %s                              **\n",origemvoo3);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                    **\n",destinovoo3);
				printf("** %s                        **\n",aeroportobelohorizonte);
				printf("** HORARIO : %d:00                             **\n",hora3);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				
				if(i==0)
				{system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo1[5]);
				printf("** ORIGEM : %s                     **\n",origemvoo6);
				printf("** %s                        **\n",aeroportobelohorizonte);
				printf("** DESTINO : %s                             **\n",destinovoo6);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora6);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 9 PARA MENU PRINCIPAL   **\n");
				printf("** OU QUALQUER NUMERO PARA VOLTAR DO INICIO    **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");}
			}}}}}			
				if(i!=1 && i!=9)
				{	system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("** VOLTANDO PARA CONSULTA POR NUMERO DO VOO... **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");
					goto voltaconsultanvoo;
				}
				if(i==9)
				{	
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**         CONSULTAR  POR NUMERO DE VOO        **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("** VOLTANDO PARA O MENU PRINCIPAL...           **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");
					goto voltamenuprincipal;
				}	
				break;
				
		case 4 :voltardestino: 
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**           LISTA ORDEM ALFABETICA            **\n");
				printf("**                                             **\n");
				printf("** 1- POR ORIGEM DO VOO                        **\n");
				printf("** 2- POR DESTINO DO VOO                       **\n");
				printf("**                                             **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("********************v.0.0.1.3********************\n");scanf("%d",&i);
				system("cls");
				if(i==1)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[5]);
				printf("** ORIGEM : %s                     **\n",nomes[0]);
				printf("** %s                        **\n",aeroportobelohorizonte);
				printf("** DESTINO : %s                             **\n",destinovoo6);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora6);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[0]);
				printf("** ORIGEM : %s                              **\n",nomes[1]);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                         **\n",destinovoo1);
				printf("** %s        **\n",aeroportosaopaulo);
				printf("** HORARIO : %d:00                             **\n",hora1);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[1]);
				printf("** ORIGEM : %s                              **\n",nomes[1]);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                    **\n",destinovoo2);
				printf("** %s                         **\n",aeroportoriodejaneiro);
				printf("** HORARIO : %d:00                             **\n",hora2);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[2]);
				printf("** ORIGEM : %s                              **\n",nomes[1]);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                    **\n",destinovoo3);
				printf("** %s                        **\n",aeroportobelohorizonte);
				printf("** HORARIO : %d:00                             **\n",hora3);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[4]);
				printf("** ORIGEM : %s                     **\n",nomes[2]);
				printf("** %s                         **\n",aeroportoriodejaneiro);
				printf("** DESTINO : %s                             **\n",destinovoo5);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora5);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[3]);
				printf("** ORIGEM : %s                          **\n",nomes[3]);
				printf("** %s        **\n",aeroportosaopaulo);
				printf("** DESTINO : %s                             **\n",destinovoo4);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora4);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 9 PARA MENU PRINCIPAL   **\n");
				printf("** OU QUALQUER NUMERO PARA VOLTAR DO INICIO    **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}	
				}
				}
				}
				}
				}
				if(i!=1 && i!=9)
				{
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**      LISTA ORDEM ALFABETICA  POR ORIGEM     **\n");
					printf("**                                             **\n");
					printf("** NUMERO INVALIDO                             **\n");
					printf("** VOLTANDO...                                 **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");
					goto voltardestino;
				}
				if(i==9)
				{
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**         CONSULTAR  POR ORIGEM DE VOO        **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("** VOLTANDO PARA CONSULTA POR NUMERO DO VOO... **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");	
					goto voltamenuprincipal;
				}
				}
				if(i==2)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[2]);
				printf("** ORIGEM : %s                              **\n",origemvoo3);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                    **\n",nomes[0]);
				printf("** %s                        **\n",aeroportobelohorizonte);
				printf("** HORARIO : %d:00                             **\n",hora3);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[3]);
				printf("** ORIGEM : %s                          **\n",origemvoo4);
				printf("** %s        **\n",aeroportosaopaulo);
				printf("** DESTINO : %s                             **\n",nomes[1]);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora4);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}	
				if(i==0)
				{
					system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[4]);
				printf("** ORIGEM : %s                     **\n",origemvoo5);
				printf("** %s                         **\n",aeroportoriodejaneiro);
				printf("** DESTINO : %s                             **\n",nomes[1]);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora5);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[5]);
				printf("** ORIGEM : %s                     **\n",origemvoo6);
				printf("** %s                        **\n",aeroportobelohorizonte);
				printf("** DESTINO : %s                             **\n",nomes[1]);
				printf("** %s      **\n",aeroportonatal);
				printf("** HORARIO : %d:00                             **\n",hora6);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa6[w],fileirab6[w],fileirac6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");}
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[1]);
				printf("** ORIGEM : %s                              **\n",origemvoo2);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                    **\n",nomes[2]);
				printf("** %s                         **\n",aeroportoriodejaneiro);
				printf("** HORARIO : %d:00                             **\n",hora2);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 0 PARA CONTINUAR        **\n");
				printf("** DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL      **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}
				if(i==0)
				{
				system("cls");
				printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
				printf("**                                             **\n");
				printf("** VOO : %d                                  **\n",numerovoo[0]);
				printf("** ORIGEM : %s                              **\n",origemvoo1);
				printf("** %s      **\n",aeroportonatal);
				printf("** DESTINO : %s                         **\n",nomes[3]);
				printf("** %s        **\n",aeroportosaopaulo);
				printf("** HORARIO : %d:00                             **\n",hora1);
				printf("**                                             **\n");
				printf("** DESEJA VER OS LUGARES DISPONIVES?           **\n");
				printf("** DIGITE 1 PARA SIM E 9 PARA MENU PRINCIPAL   **\n");
				printf("** OU QUALQUER NUMERO PARA VOLTAR DO INICIO    **\n");
				printf("**                                             **\n");
				printf("**                                             **\n");
				printf("******************v.0.0.1.3**********************\n\n\n\n\n");scanf("%d",&i);system("cls");
				if(i==1)
				{
				printf("***************POLTRONAS DISPONIVEIS*************\n\n\n");
				printf("                 **********\n");
				printf("                ************\n");
				printf("               **************\n");
				printf("              ****************\n");
				printf("             ******************\n");
				printf("            **                **\n");
				printf("            **                **\n");
				for(w=0;w<30;w++)
				{
				printf("            ** %c %c %c    %c %c %c ** %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
				}
				printf("            **                **\n");
				printf("            **                **\n");
				printf("            ********************\n");
				printf("             ******************\n");
				printf("              ****************\n");
				printf("               **************\n");
				printf("                ************\n\n\n\n DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL\n");scanf("%d",&i);
				system("cls");
				}	
				}
				}
				}	
				}
				if(i!=1 && i!=9)
				{
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**      LISTA ORDEM ALFABETICA  POR DESTINO    **\n");
					printf("**                                             **\n");
					printf("** NUMERO INVALIDO                             **\n");
					printf("** VOLTANDO...                                 **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");
					goto voltardestino;
				}
				}
				if(i!=1 && i!=9)
				{
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**          LISTA POR ORDEM ALFABETICA         **\n");
					printf("**                                             **\n");
					printf("** NUMERO INVALIDO                             **\n");
					printf("** VOLTANDO...                                 **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");
					goto voltardestino;
				}
				if(i==9)
				{
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**         CONSULTAR  POR ORIGEM DE VOO        **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("** VOLTANDO PARA CONSULTA POR NUMERO DO VOO... **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");	
					goto voltamenuprincipal;
				}
				break;
		case 5 :/******************************/
				 	printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("                                             \n");
					printf("                  CANCELAMENTO                 \n");
					printf("                                             \n");
					printf(" CASO O PROGRAMA TRAVAR E PORQUE OS DADOS ESTAO ERRADOS\n");
					printf("NUMERO DO VOO :");scanf("%d",&numerovoocancelar);gets(nomecancelar);/*para corrigir o erro na leitura*/
					printf("\nPRIMEIRO NOME(LETRA MAIUSCULA E SEM ACENTO) : ");gets(nomecancelar);
					printf("\nSOBRENOME : ");gets(sobrenomecancelar);
					printf("\nCPF : ");gets(cpfcancelar);
					printf("\nFILEIRA EX:20 ");scanf("%d",&fileiracancelar);
					printf("\nASSENTO EX:B");assentodeseja=getchar();assentodeseja=getchar();/*para corrigir outro erro na leitura*/
					if(numerovoocancelar!=1207 && numerovoocancelar!=1208 && numerovoocancelar!=1248 && numerovoocancelar!=1287 && numerovoocancelar!=1288 && numerovoocancelar!=1247)
					{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** VOO NAO EXISTE                              **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
					}
					if(numerovoocancelar==1207)
						{
						sprintf(cancelar,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 1\\%d%c.txt",fileiracancelar,assentodeseja);
						voo1=fopen(cancelar,"r");
						if(voo2 == NULL){
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** POLTRONA OU ASSENTO ERRADO                  **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;}
						else{
						for(w=0;w<1;w++)
							{
							fscanf(voo1,"%s",cpf);		
							}
						for(w=0;w<1;w++)
						{
							fscanf(voo1,"%s %s %[^\n]\n",nomeexibir,nome,sobrenome);
						}
						fclose(voo1);
						comparar1=strncmp(cpf,cpfcancelar,100);
						comparar2=strncmp(nome,nomecancelar,100);
						comparar3=strncmp(sobrenome,sobrenomecancelar,100);
						if(comparar1>0 || comparar1<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}			
						if(comparar2>0 || comparar2<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}	
						if(comparar3>0 || comparar3<0)
						{
															system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}
					if(comparar1==0 && comparar2==0 &&comparar3==0)	
							{
							remove(cancelar);		
							switch (assentodeseja)
							{
								case 'A':fileiraa1[fileiracancelar-1]='A';break;
								case 'a':fileiraa1[fileiracancelar-1]='A';break;
								case 'B':fileirab1[fileiracancelar-1]='B';break;
								case 'b':fileirab1[fileiracancelar-1]='B';break;
								case 'C':fileirac1[fileiracancelar-1]='C';break;
								case 'c':fileirac1[fileiracancelar-1]='C';break;
								case 'D':fileirad1[fileiracancelar-1]='D';break;
								case 'd':fileirad1[fileiracancelar-1]='D';break;
								case 'E':fileirae1[fileiracancelar-1]='E';break;
								case 'e':fileirae1[fileiracancelar-1]='E';break;
								case 'F':fileiraf1[fileiracancelar-1]='F';break;
								case 'f':fileiraf1[fileiracancelar-1]='F';break;
							}
								PoltronaAviao1=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo1.txt","w+");
									for(w=0;w<30;w++)
									{
										fprintf(PoltronaAviao1,"%c %c %c    %c %c %c  %d\n",fileiraa1[w],fileirab1[w],fileirac1[w],fileirad1[w],fileirae1[w],fileiraf1[w],fileira1[w]);
									}
								close(PoltronaAviao1);
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** CANCELAMENTO COMPLETO                       **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
								}}		
						}
						if(numerovoocancelar==1247)
						{
						sprintf(cancelar,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 2\\%d%c.txt",fileiracancelar,assentodeseja);
						voo2=fopen(cancelar,"r");
						if(voo2 == NULL){
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** POLTRONA OU ASSENTO ERRADO                  **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;}
						else{
						for(w=0;w<1;w++)
							{
							fscanf(voo2,"%s",cpf);		
							}
						for(w=0;w<1;w++)
						{
							fscanf(voo2,"%s %s %[^\n]\n",nomeexibir,nome,sobrenome);
						}
						fclose(voo2);
						comparar1=strncmp(cpf,cpfcancelar,100);
						comparar2=strncmp(nome,nomecancelar,100);
						comparar3=strncmp(sobrenome,sobrenomecancelar,100);
						if(comparar1>0 || comparar1<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}			
						if(comparar2>0 || comparar2<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}	
						if(comparar3>0 || comparar3<0)
						{
															system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}
					if(comparar1==0 && comparar2==0 &&comparar3==0)	
							{
							remove(cancelar);		
							switch (assentodeseja)
							{
								case 'A':fileiraa2[fileiracancelar-1]='A';break;
								case 'a':fileiraa2[fileiracancelar-1]='A';break;
								case 'B':fileirab2[fileiracancelar-1]='B';break;
								case 'b':fileirab2[fileiracancelar-1]='B';break;
								case 'C':fileirac2[fileiracancelar-1]='C';break;
								case 'c':fileirac2[fileiracancelar-1]='C';break;
								case 'D':fileirad2[fileiracancelar-1]='D';break;
								case 'd':fileirad2[fileiracancelar-1]='D';break;
								case 'E':fileirae2[fileiracancelar-1]='E';break;
								case 'e':fileirae2[fileiracancelar-1]='E';break;
								case 'F':fileiraf2[fileiracancelar-1]='F';break;
								case 'f':fileiraf2[fileiracancelar-1]='F';break;
							}
								PoltronaAviao2=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo2.txt","w+");
									for(w=0;w<30;w++)
									{
										fprintf(PoltronaAviao2,"%c %c %c    %c %c %c  %d\n",fileiraa2[w],fileirab2[w],fileirac2[w],fileirad2[w],fileirae2[w],fileiraf2[w],fileira2[w]);
									}
								close(PoltronaAviao2);
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** CANCELAMENTO COMPLETO                       **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
								}}		
						}
						if(numerovoocancelar==1287)
						{
						sprintf(cancelar,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 3\\%d%c.txt",fileiracancelar,assentodeseja);
						voo3=fopen(cancelar,"r");
						if(voo3 == NULL){
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** POLTRONA OU ASSENTO ERRADO                  **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;}
						else{
						for(w=0;w<1;w++)
							{
							fscanf(voo3,"%s",cpf);		
							}
						for(w=0;w<1;w++)
						{
							fscanf(voo3,"%s %s %[^\n]\n",nomeexibir,nome,sobrenome);
						}
						fclose(voo3);
						comparar1=strncmp(cpf,cpfcancelar,100);
						comparar2=strncmp(nome,nomecancelar,100);
						comparar3=strncmp(sobrenome,sobrenomecancelar,100);
						if(comparar1>0 || comparar1<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}			
						if(comparar2>0 || comparar2<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}	
						if(comparar3>0 || comparar3<0)
						{
															system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}
					if(comparar1==0 && comparar2==0 &&comparar3==0)	
							{
							remove(cancelar);		
							switch (assentodeseja)
							{
								case 'A':fileiraa3[fileiracancelar-1]='A';break;
								case 'a':fileiraa3[fileiracancelar-1]='A';break;
								case 'B':fileirab3[fileiracancelar-1]='B';break;
								case 'b':fileirab3[fileiracancelar-1]='B';break;
								case 'C':fileirac3[fileiracancelar-1]='C';break;
								case 'c':fileirac3[fileiracancelar-1]='C';break;
								case 'D':fileirad3[fileiracancelar-1]='D';break;
								case 'd':fileirad3[fileiracancelar-1]='D';break;
								case 'E':fileirae3[fileiracancelar-1]='E';break;
								case 'e':fileirae3[fileiracancelar-1]='E';break;
								case 'F':fileiraf3[fileiracancelar-1]='F';break;
								case 'f':fileiraf3[fileiracancelar-1]='F';break;
							}
								PoltronaAviao3=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo3.txt","w+");
									for(w=0;w<30;w++)
									{
										fprintf(PoltronaAviao3,"%c %c %c    %c %c %c  %d\n",fileiraa3[w],fileirab3[w],fileirac3[w],fileirad3[w],fileirae3[w],fileiraf3[w],fileira3[w]);
									}
								close(PoltronaAviao3);
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** CANCELAMENTO COMPLETO                       **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
								}}		
						}
						if(numerovoocancelar==1208)
						{
						sprintf(cancelar,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 4\\%d%c.txt",fileiracancelar,assentodeseja);
						voo4=fopen(cancelar,"r");
						if(voo4 == NULL){
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** POLTRONA OU ASSENTO ERRADO                  **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;}
						else{
						for(w=0;w<1;w++)
							{
							fscanf(voo4,"%s",cpf);		
							}
						for(w=0;w<1;w++)
						{
							fscanf(voo4,"%s %s %[^\n]\n",nomeexibir,nome,sobrenome);
						}
						fclose(voo4);
						comparar1=strncmp(cpf,cpfcancelar,100);
						comparar2=strncmp(nome,nomecancelar,100);
						comparar3=strncmp(sobrenome,sobrenomecancelar,100);
						if(comparar1>0 || comparar1<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}			
						if(comparar2>0 || comparar2<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}	
						if(comparar3>0 || comparar3<0)
						{
															system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}
					if(comparar1==0 && comparar2==0 &&comparar3==0)	
							{
							remove(cancelar);		
							switch (assentodeseja)
							{
								case 'A':fileiraa4[fileiracancelar-1]='A';break;
								case 'a':fileiraa4[fileiracancelar-1]='A';break;
								case 'B':fileirab4[fileiracancelar-1]='B';break;
								case 'b':fileirab4[fileiracancelar-1]='B';break;
								case 'C':fileirac4[fileiracancelar-1]='C';break;
								case 'c':fileirac4[fileiracancelar-1]='C';break;
								case 'D':fileirad4[fileiracancelar-1]='D';break;
								case 'd':fileirad4[fileiracancelar-1]='D';break;
								case 'E':fileirae4[fileiracancelar-1]='E';break;
								case 'e':fileirae4[fileiracancelar-1]='E';break;
								case 'F':fileiraf4[fileiracancelar-1]='F';break;
								case 'f':fileiraf4[fileiracancelar-1]='F';break;
							}
								PoltronaAviao4=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo4.txt","w+");
									for(w=0;w<30;w++)
									{
										fprintf(PoltronaAviao4,"%c %c %c    %c %c %c  %d\n",fileiraa4[w],fileirab4[w],fileirac4[w],fileirad4[w],fileirae4[w],fileiraf4[w],fileira4[w]);
									}
								close(PoltronaAviao4);
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** CANCELAMENTO COMPLETO                       **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
								}}		
						}
						if(numerovoocancelar==1248)
						{
						sprintf(cancelar,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 5\\%d%c.txt",fileiracancelar,assentodeseja);
						voo5=fopen(cancelar,"r");
						if(voo5 == NULL){
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** POLTRONA OU ASSENTO ERRADO                  **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;}
						else{
						for(w=0;w<1;w++)
							{
							fscanf(voo5,"%s",cpf);		
							}
						for(w=0;w<1;w++)
						{
							fscanf(voo5,"%s %s %[^\n]\n",nomeexibir,nome,sobrenome);
						}
						fclose(voo5);
						comparar1=strncmp(cpf,cpfcancelar,100);
						comparar2=strncmp(nome,nomecancelar,100);
						comparar3=strncmp(sobrenome,sobrenomecancelar,100);
						if(comparar1>0 || comparar1<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}			
						if(comparar2>0 || comparar2<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}	
						if(comparar3>0 || comparar3<0)
						{
															system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}
					if(comparar1==0 && comparar2==0 &&comparar3==0)	
							{
							remove(cancelar);		
							switch (assentodeseja)
							{
								case 'A':fileiraa5[fileiracancelar-1]='A';break;
								case 'a':fileiraa5[fileiracancelar-1]='A';break;
								case 'B':fileirab5[fileiracancelar-1]='B';break;
								case 'b':fileirab5[fileiracancelar-1]='B';break;
								case 'C':fileirac5[fileiracancelar-1]='C';break;
								case 'c':fileirac5[fileiracancelar-1]='C';break;
								case 'D':fileirad5[fileiracancelar-1]='D';break;
								case 'd':fileirad5[fileiracancelar-1]='D';break;
								case 'E':fileirae5[fileiracancelar-1]='E';break;
								case 'e':fileirae5[fileiracancelar-1]='E';break;
								case 'F':fileiraf5[fileiracancelar-1]='F';break;
								case 'f':fileiraf5[fileiracancelar-1]='F';break;
							}
								PoltronaAviao5=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo5.txt","w+");
									for(w=0;w<30;w++)
									{
										fprintf(PoltronaAviao5,"%c %c %c    %c %c %c  %d\n",fileiraa5[w],fileirab5[w],fileirac5[w],fileirad5[w],fileirae5[w],fileiraf5[w],fileira5[w]);
									}
								close(PoltronaAviao5);
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** CANCELAMENTO COMPLETO                       **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
								}}		
						}
						if(numerovoocancelar==1288)
						{
						sprintf(cancelar,"C:\\Users\\JVAD\\Documents\\sistema voo\\passageiros\\aviao 6\\%d%c.txt",fileiracancelar,assentodeseja);
						voo6=fopen(cancelar,"r");
						if(voo6 == NULL){
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** POLTRONA OU ASSENTO ERRADO                  **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;}
						else{
						for(w=0;w<1;w++)
							{
							fscanf(voo6,"%s",cpf);		
							}
						for(w=0;w<1;w++)
						{
							fscanf(voo6,"%s %s %[^\n]\n",nomeexibir,nome,sobrenome);
						}
						fclose(voo6);
						comparar1=strncmp(cpf,cpfcancelar,100);
						comparar2=strncmp(nome,nomecancelar,100);
						comparar3=strncmp(sobrenome,sobrenomecancelar,100);
						if(comparar1>0 || comparar1<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}			
						if(comparar2>0 || comparar2<0)
						{
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}	
						if(comparar3>0 || comparar3<0)
						{
															system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** DADOS ERRADOS                               **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
						}
					if(comparar1==0 && comparar2==0 &&comparar3==0)	
							{
										remove(cancelar);		
							switch (assentodeseja)
							{
								case 'A':fileiraa6[fileiracancelar-1]='A';break;
								case 'a':fileiraa6[fileiracancelar-1]='A';break;
								case 'B':fileirab6[fileiracancelar-1]='B';break;
								case 'b':fileirab6[fileiracancelar-1]='B';break;
								case 'C':fileirac6[fileiracancelar-1]='C';break;
								case 'c':fileirac6[fileiracancelar-1]='C';break;
								case 'D':fileirad6[fileiracancelar-1]='D';break;
								case 'd':fileirad6[fileiracancelar-1]='D';break;
								case 'E':fileirae6[fileiracancelar-1]='E';break;
								case 'e':fileirae6[fileiracancelar-1]='E';break;
								case 'F':fileiraf6[fileiracancelar-1]='F';break;
								case 'f':fileiraf6[fileiracancelar-1]='F';break;
							}
								PoltronaAviao6=fopen("C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo6.txt","w+");
									for(w=0;w<30;w++)
									{
										fprintf(PoltronaAviao6,"%c %c %c    %c %c %c  %d\n",fileiraa6[w],fileirab6[w],fileira6[w],fileirad6[w],fileirae6[w],fileiraf6[w],fileira6[w]);
									}
								close(PoltronaAviao6);
								system("cls");
								printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
								printf("**                                             **\n");
								printf("**                  CANCELAR                   **\n");
								printf("**                                             **\n");
								printf("** CANCELAMENTO COMPLETO                       **\n");
								printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
								printf("**                                             **\n");
								printf("**                                             **\n");
								printf("********************v.0.0.1.3********************\n");
								goto voltamenuprincipal;
								}}		
						}
				 break;
		case 6 :SAIR:
				system("cls");
		 		printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
				printf("**                                             **\n");
				printf("**        AGRADECEMOS SUA PREFERENCIA          **\n");
				printf("**                                             **\n");
				printf("**                VOLTE SEMPRE...              **\n");
				printf("**                                             **\n");
				printf("**                                             **\n");
				printf("**                                             **\n");
				printf("********************v.0.0.1.3********************\n");
		
				return 0;
	}
	if(opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4 && opcao!=5 && opcao!=6)
	{
					system("cls");
					printf("**********LINHAS AEREAS VOLARE AIR LTDA**********\n");
					printf("**                                             **\n");
					printf("**              MENU PRINCIPAL                 **\n");
					printf("**                                             **\n");
					printf("** NUMERO INVALIDO                             **\n");
					printf("** VOLTANDO PARA PARA O MENU PRINCIPAL...      **\n");
					printf("**                                             **\n");
					printf("**                                             **\n");
					printf("********************v.0.0.1.3********************\n");
					i=9;
	}
}


}

