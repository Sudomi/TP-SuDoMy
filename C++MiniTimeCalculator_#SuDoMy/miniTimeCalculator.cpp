//---------------------------------------------------------------------------
// Octobre 2020 - SuDOMy
// Projet Calculette manuel pour temps net
// A Utiliser avec le package nomm�e "Package TP SuDoMy"
// Document soumis � "Licence publique g�n�rale GNU, v3.0 - Projet GNU - Free Software Foundation"
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "miniTimeCalculator.h"

//----
#include <iostream>
#include <string>
//#include "libChrono.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMiniTmeCalculator *MiniTmeCalculator;
//---------------------------------------------------------------------------


//--- CONSTRUCTEUR
__fastcall TMiniTmeCalculator::TMiniTmeCalculator(TComponent* Owner)
	: TForm(Owner)
{
SGRanked->Cells[0][0] = "Rang";
SGRanked->Cells[1][0] = "N� dossard";
SGRanked->Cells[2][0] = "H de d�part";
SGRanked->Cells[3][0] = "H d'arriv�e";
SGRanked->Cells[4][0] = "Temps";
SGRanked->Cells[5][0] = "EcartTemps";

/*

bool TSCChrono::IsBetter(int num1, int num2) const
{
	if (mpDbTimeInfos == NULL) return false;
	int time1 = mpDbTimeInfos->GetTime(num1);
	int time2 = mpDbTimeInfos->GetTime(num2);
	time1 += mpDbTimeInfos->GetPenalty(num1);
	time2 += mpDbTimeInfos->GetPenalty(num2);
	time1 -= GetBonusByNum(num1);
	time2 -= GetBonusByNum(num2);
	if (time1 < time2) return true;
	if (time2 < time1) return false;
	return (num1 < num2);
}
*/

}
//---------------------------------------------------------------------------
// Si BDD -> TDBGrid
void __fastcall TMiniTmeCalculator::BtnAddTimeClick(TObject *Sender)
{


AnsiString listeRang = " ";
// L'utilisation du typeDef AnsiString est recommander par Borland.


//--- Compte les Colonnes, pour les nomm�es
int nbOfCol = 0;
nbOfCol = SGRanked->RowCount;

int nbBib = 0;// Verif int + 99 999 value -> Bloquer dans le "EDIT"
// De-plus v�rifier que le N� de dossard, n'est pas d�j� entrez


// Cr�e un RegExp, pour accepter le bon format horraire
// HH:MM:SS.dcm (heures, minutes, secondes, dixi�mes, centi�mes, millli�mes).
__int64 iStartHour = 0;
__int64 iEndHour = 0;
//---------
// Convertir String to int obligatoire pour recuperer les Text entrez par Chronom�treur


//AnsiString __fastcall IntToStr(__int64 Value);
//This function takes an integer as the argument and returns a string.


//------

// Charges les donn�es entr� par le chronom�treur
listeRang =  EditStartHour->Text;

//nbBib = EditNbBib->Text;

//iStartHour = (listeRang.c_str());
//iEndHour = EditEndHour->Text;

// iStartHour = stoi(listeRang);

//for (int i = 0; i > 15; i++)
//{
//	SGRanked->Cells.Insert(listeRang, i);
	nbBib++;
//	SGRanked->Cells[0][1] = "1";
	SGRanked->Cells[0][nbBib] = "1";
//}

//--- M�thode de classement � impl�menter.

//--- Distribuer dans les colonnes les infos au bon endroit

//--- Pour les donn�es, le faire sous forme de liste ?
// Commencer � 1 ou 0 l'index comme vu � nombreux cas? ? ?

//---
//  return 0;
}
//---------------------------------------------------------------------------

//---- Mes Classes M�thodes


