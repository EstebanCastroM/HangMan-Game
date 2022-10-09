// Alejandro Esteban Castro Mendoza //
//20110316//
#include<iostream>
#include<windows.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=7;
    int repetido=0,gano=0;
   
    printf("\t\t\t*****************************\n");
	printf("\t\t\t******Juego del Ahorcado*****\n");
	printf("\t\t\t*****************************\n\n\n");
    printf("\t\t\t*********************************\n");
	printf("\t\t\tIntroduzca la palabra a adivinar:\n");
	printf("\t\t\t*********************************\n\n\t\t\t");
    gets(frase);
   
    system("cls");
   
    longitud = 0;
    inicial = 0;
    j = 0;
   
    rep[0] = ' ';
    rep[1] = '\0';
   
    do
{
    system("cls");
    temp=0;
    if(inicial == 0)
{
    for(i=0;i<strlen(frase);i++)
{
    if(frase[i] == ' ') 
{
    temporal[i] = ' ';
    longitud++;
}
    else
{
	temporal[i] = '_';       
    longitud++;
}
}
}
    inicial = 1;
	temporal[longitud] = '\0';
       
    for(i=0;i<strlen(rep);i++)
{
    if(rep[i] == pal)
{
    repetido = 1;
    break;
}
    else
{
    repetido = 0;
}
} 
    if(repetido == 0)
{
    for(i=0;i<strlen(frase);i++)
{
    if(frase[i] == pal)
{
    temporal[i] = pal;
    acertado++;
    temp=1;
}
}
}
	if(repetido == 0)
{
    if(temp == 0) {
    oportunidades = oportunidades - 1;
}
}
    else
{
    printf("\t\t\t**********************************\n");
	printf("\t\t\tYa se ha introducido este caracter\n");
	printf("\t\t\t**********************************\n");
    printf("\n\n");
}
    printf("\n\n\n");
    printf("\t\t\t");
    for(i=0;i<strlen(temporal);i++) 
{
    printf(" %c ",temporal[i]);
}
    printf("\n\n\n\n");
	if(strcmp(frase,temporal) == 0) 
{
    gano = 1;
    break;
}
	if(oportunidades==6)
	{
	printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::\n");
	
	for (int columnas=1;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	 printf("\n\n\n");
	 }
	 else
	 {
	 	if(oportunidades==5)
	 	{
	 		printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t( )              ::\n");
	
	for (int columnas=2;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
		printf("\n\n\n");
		}
	else
{
	if(oportunidades==4)
	{
	printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t( )              ::");
	printf("\n\t\t\t |               ::\n");
	
	for (int columnas=3;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\n\n");
	
	}
		else
	{
		if(oportunidades==3)
		{
				printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t( )              ::");
	printf("\n\t\t\t/|               ::\n");
	
	for (int columnas=3;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\n\n");
		}
		else
		if(oportunidades==2)
		{
				printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t( )              ::");
	printf("\n\t\t\t/|%c              ::\n",92);
	
	for (int columnas=3;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\n\n");
			}
			else
			{
				if(oportunidades==1)
				{
						printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t( )              ::");
	printf("\n\t\t\t/|%c              ::",92);
	printf("\n\t\t\t/                ::\n");
	
	for (int columnas=4;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\n\n");
				}
				}	
	}
	
}
		
	}
    printf("\t\t\t***Aciertos: %d***\n",acertado);
    printf("\n");
    printf("\t\t\t***Oportunidades Restantes: %d***\n",oportunidades);
    printf("\n");

    rep[j] = pal;
    j++;
	if (oportunidades==0)
{
    break;
}
    printf("\t\t\t***INTRODUZCA UNA LETRA:***\n\t\t\t");
    scanf("\n%c",&pal);
}
	while(oportunidades != 0);
    if(gano)
{
    printf("\n\n");
    printf("\t\t\t************************\n");
	printf("\t\t\tEnhorabuena, has ganado.\n");
	printf("\t\t\t************************\n");
}
    else
{
    	printf("\t\t\t");
	for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t::               ::");
	printf("\n\t\t\t( )              ::");
	printf("\n\t\t\t/|%c              ::",92);
	printf("\n\t\t\t/ %c              ::\n,",92);
	
	for (int columnas=4;columnas<=9;columnas++)
	{
		printf("\t\t\t\t\t ");
		printf("::");
		printf("\n");
	}
		printf("\t\t\t");
		for (int filas=1;filas<=9;filas++)
	{
		printf("==");
	}
	printf("\n\n\n");
	printf("\n\n");
	printf("\t\t\t************\n");
	printf("\t\t\tHas perdido.\n");
	printf("\t\t\t************\n");
}
    printf("\n\n");
    system("PAUSE");
    return 0;

}