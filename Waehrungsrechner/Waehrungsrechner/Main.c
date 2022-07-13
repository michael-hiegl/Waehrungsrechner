//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Waehrungsrechner	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 30.11.2021 18:00:43
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float f_BetragDollar = 0;
	float f_BetragEuro = 0;
	float f_KursEuro = 0.89; //Euro pro Dollar
	int i_Wahl = 0;



	//Code
	printf("Auswahl: [1] Euro->Dollar\n[2] Dollar->Euro\n");
	scanf("%i", &i_Wahl);

	//für Auswahl 1
	if (i_Wahl == 1)
	{
		printf("Bitte Betrag in Euro eingeben\n");
		scanf("%f", &f_BetragEuro);
		f_BetragDollar = f_BetragEuro * f_KursEuro;
		printf("%0.2f Euro entsprechen %0.2f Dollar", f_BetragEuro, f_BetragDollar);
	}

	//für Auswahl 2
	else if (i_Wahl == 2)
	{
		printf("Bitte Betrag in Dollar eingeben\n");
		scanf("%f", &f_BetragDollar);
		f_BetragEuro = f_BetragDollar / f_KursEuro;
		printf("%0.2f Dollar entsprechen %0.2f Euro", f_BetragDollar, f_BetragEuro);
	}

	else
	{
		printf("Ungueltige Eingabe");
	}



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}