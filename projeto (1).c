#include<stdio.h>
main()
{
	char fileiraa1[30],fileirab1[30],fileirac1[30],fileirad1[30],fileirae1[30],fileiraf1[30];
	char fileiraa2[30],fileirab2[30],fileirac2[30],fileirad2[30],fileirae2[30],fileiraf2[30];
	char fileiraa3[30],fileirab3[30],fileirac3[30],fileirad3[30],fileirae3[30],fileiraf3[30];
	char fileiraa4[30],fileirab4[30],fileirac4[30],fileirad4[30],fileirae4[30],fileiraf4[30];
	char fileiraa5[30],fileirab5[30],fileirac5[30],fileirad5[30],fileirae5[30],fileiraf5[30];
	char fileiraa6[30],fileirab6[30],fileirac6[30],fileirad6[30],fileirae6[30],fileiraf6[30];
	int fileira1[30],fileira2[30],fileira3[30],fileira4[30],fileira5[30],fileira6[30],w,i;
	FILE *PoltronaAviao1,*PoltronaAviao2,*PoltronaAviao3,*PoltronaAviao4,*PoltronaAviao5,*PoltronaAviao6;
		for(w=0;w<30;w++)
	{
		fileiraa1[w]='A';
		fileirab1[w]='B';
		fileirac1[w]='C';
		fileirad1[w]='D';
		fileirae1[w]='E';
		fileiraf1[w]='F';
	}
		for(w=0;w<30;w++)
	{
		fileiraa2[w]='A';
		fileirab2[w]='B';
		fileirac2[w]='C';
		fileirad2[w]='D';
		fileirae2[w]='E';
		fileiraf2[w]='F';
	}
		for(w=0;w<30;w++)
	{
		fileiraa3[w]='A';
		fileirab3[w]='B';
		fileirac3[w]='C';
		fileirad3[w]='D';
		fileirae3[w]='E';
		fileiraf3[w]='F';
	}
		for(w=0;w<30;w++)
	{
		fileiraa4[w]='A';
		fileirab4[w]='B';
		fileirac4[w]='C';
		fileirad4[w]='D';
		fileirae4[w]='E';
		fileiraf4[w]='F';
	}
		for(w=0;w<30;w++)
	{
		fileiraa5[w]='A';
		fileirab5[w]='B';
		fileirac5[w]='C';
		fileirad5[w]='D';
		fileirae5[w]='E';
		fileiraf5[w]='F';
	}
		for(w=0;w<30;w++)
	{
		fileiraa6[w]='A';
		fileirab6[w]='B';
		fileirac6[w]='C';
		fileirad6[w]='D';
		fileirae6[w]='E';
		fileiraf6[w]='F';
	}
		for(w=0;w<30;w++)
	{
		fileira1[w]=w+1;
		fileira2[w]=w+1;
		fileira3[w]=w+1;
		fileira4[w]=w+1;
		fileira5[w]=w+1;
		fileira6[w]=w+1;
	}
	/* criar um arquivo pela primeira vez com as poltronas todas disponiveis*/
	/*aviao 01*/
	char nomevooarquivo1[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo1.txt";
	PoltronaAviao1=fopen(nomevooarquivo1,"w+");
	for(i=0;i<30;i++)
	fprintf(PoltronaAviao1,"%c %c %c    %c %c %c  %d\n",fileiraa1[i],fileirab1[i],fileirac1[i],fileirad1[i],fileirae1[i],fileiraf1[i],fileira1[i]);
	fclose(PoltronaAviao1);
	/*aviao 02*/
	char nomevooarquivo2[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo2.txt";
	PoltronaAviao2=fopen(nomevooarquivo2,"w+");
	for(i=0;i<30;i++)
	fprintf(PoltronaAviao2,"%c %c %c    %c %c %c  %d\n",fileiraa2[i],fileirab2[i],fileirac2[i],fileirad2[i],fileirae2[i],fileiraf2[i],fileira2[i]);
	fclose(PoltronaAviao2);
	/*aviao 03*/
	char nomevooarquivo3[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo3.txt";
	PoltronaAviao3=fopen(nomevooarquivo3,"w+");
	for(i=0;i<30;i++)
	fprintf(PoltronaAviao3,"%c %c %c    %c %c %c  %d\n",fileiraa3[i],fileirab3[i],fileirac3[i],fileirad3[i],fileirae3[i],fileiraf3[i],fileira3[i]);
	fclose(PoltronaAviao3);
	/*aviao 04*/
	char nomevooarquivo4[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo4.txt";
	PoltronaAviao4=fopen(nomevooarquivo4,"w+");
	for(i=0;i<30;i++)
	fprintf(PoltronaAviao4,"%c %c %c    %c %c %c  %d\n",fileiraa4[i],fileirab4[i],fileirac4[i],fileirad4[i],fileirae4[i],fileiraf4[i],fileira4[i]);
	fclose(PoltronaAviao4);
	/*aviao 05*/
	char nomevooarquivo5[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo5.txt";
	PoltronaAviao5=fopen(nomevooarquivo5,"w+");
	for(i=0;i<30;i++)
	fprintf(PoltronaAviao5,"%c %c %c    %c %c %c  %d\n",fileiraa5[i],fileirab5[i],fileirac5[i],fileirad5[i],fileirae5[i],fileiraf5[i],fileira5[i]);
	fclose(PoltronaAviao1);
	/*aviao 06*/
	char nomevooarquivo6[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\poltrona\\voo6.txt";
	PoltronaAviao6=fopen(nomevooarquivo6,"w+");
	for(i=0;i<30;i++)
	fprintf(PoltronaAviao6,"%c %c %c    %c %c %c  %d\n",fileiraa6[i],fileirab6[i],fileirac6[i],fileirad6[i],fileirae6[i],fileiraf6[i],fileira6[i]);
	fclose(PoltronaAviao6);
	
	
	
	char aeroportonatal[50]="Aeroporto Internacional Augusto Severo";
	/*********************************** arquivo aviao 01******************/ 
	char origemvoo1[20]="Natal",destinovoo1[20]="São Paulo";
	int numerovoo[6],hora1=13;
	char aeroportosaopaulo[50]="Aeroporto internacional de Guarulhos";
	char aeroportoriodejaneiro[50]="Aeroporto do Galeão";
	char aeroportobelohorizonte[50]="Aeroporto de Confins";
	FILE *aviao1;
	char nomevooarquivo01[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo1.txt";
	aviao1=fopen(nomevooarquivo01,"w+");
	numerovoo[0]=1207;
	fprintf(aviao1,"%d\n",numerovoo[0]);
	fprintf(aviao1,"%s\n",origemvoo1);
	fprintf(aviao1,"%s\n",aeroportonatal);
	fprintf(aviao1,"%s\n",destinovoo1);
	fprintf(aviao1,"%s\n",aeroportosaopaulo);
	fprintf(aviao1,"%d:00\n",hora1);
	fprintf(aviao1,"180\n");
	fclose(aviao1);
	/**********************************************************************/
	/**********************************arvivo aviao 02********************/
	FILE *aviao2;
	char origemvoo2[20]="Natal",destinovoo2[20]="Rio de Janeiro";
	int 	hora2=14;
	char nomevooarquivo02[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo2.txt";
	aviao2=fopen(nomevooarquivo02,"w+");
	numerovoo[1]=1247;
	fprintf(aviao2,"%d\n",numerovoo[1]);
	fprintf(aviao2,"%s\n",origemvoo2);
	fprintf(aviao2,"%s\n",aeroportonatal);
	fprintf(aviao2,"%s\n",destinovoo2);
	fprintf(aviao2,"%s\n",aeroportoriodejaneiro);
	fprintf(aviao2,"%d:00\n",hora2);
	fprintf(aviao2,"180\n");
	fclose(aviao2);
	/************************************************************************/
	/*********************************arquivo aviao 03***********************/
	FILE *aviao3;
	char origemvoo3[20]="Natal",destinovoo3[20]="Belo Horizonte";
	int  hora3=15;
	char nomevooarquivo03[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo3.txt";
	aviao3=fopen(nomevooarquivo03,"w+");
	numerovoo[2]=1287;
	fprintf(aviao3,"%d\n",numerovoo[2]);
	fprintf(aviao3,"%s\n",origemvoo3);
	fprintf(aviao3,"%s\n",aeroportonatal);
	fprintf(aviao3,"%s\n",destinovoo3);
	fprintf(aviao3,"%s\n",aeroportobelohorizonte);
	fprintf(aviao3,"%d:00\n",hora3);
	fprintf(aviao3,"180\n");
	fclose(aviao3);
	/***********************************************************************/
	/*********************************arquivo aviao 04***********************/
	FILE *aviao4;
	char origemvoo4[20]="Sâo Paulo",destinovoo4[20]="Natal";
	int hora4=22;
	char nomevooarquivo04[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo4.txt";
	aviao4=fopen(nomevooarquivo04,"w+");
	numerovoo[3]=1208;
	fprintf(aviao4,"%d\n",numerovoo[3]);
	fprintf(aviao4,"%s\n",origemvoo4);
	fprintf(aviao4,"%s\n",aeroportosaopaulo);
	fprintf(aviao4,"%s\n",destinovoo4);
	fprintf(aviao4,"%s\n",aeroportonatal);
	fprintf(aviao4,"%d:00\n",hora4);
	fprintf(aviao4,"180\n");
	fclose(aviao4);
	/***********************************************************************/
	/*********************************arquivo aviao 05***********************/
	FILE *aviao5;
	char origemvoo5[20]="Rio de Janeiro",destinovoo5[20]="Natal";
	int hora5=23;
	char nomevooarquivo05[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo5.txt";
	aviao5=fopen(nomevooarquivo05,"w+");
	numerovoo[4]=1248;
	fprintf(aviao5,"%d\n",numerovoo[4]);
	fprintf(aviao5,"%s\n",origemvoo5);
	fprintf(aviao5,"%s\n",aeroportoriodejaneiro);
	fprintf(aviao5,"%s\n",destinovoo5);
	fprintf(aviao5,"%s\n",aeroportonatal);
	fprintf(aviao5,"%d:00\n",hora5);
	fprintf(aviao5,"180\n");
	fclose(aviao5);
	/***********************************************************************/
	/*********************************arquivo aviao 06***********************/
	FILE *aviao6;
	char origemvoo6[20]="Belo Horizonte",destinovoo6[20]="Natal";
	int  hora6=22;
	char nomevooarquivo06[100]="C:\\Users\\JVAD\\Documents\\sistema voo\\voo\\voo6.txt";
	aviao6=fopen(nomevooarquivo06,"w+");
	numerovoo[5]=1288;
	fprintf(aviao6,"%d\n",numerovoo[5]);
	fprintf(aviao6,"%s\n",origemvoo6);
	fprintf(aviao6,"%s\n",aeroportobelohorizonte);
	fprintf(aviao6,"%s\n",destinovoo6);
	fprintf(aviao6,"%s\n",aeroportonatal);
	fprintf(aviao6,"%d:00\n",hora6);
	fprintf(aviao6,"180\n");
	fclose(aviao6);
	
}
