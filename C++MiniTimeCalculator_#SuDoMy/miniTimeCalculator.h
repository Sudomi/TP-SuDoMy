//---------------------------------------------------------------------------

#ifndef miniTimeCalculatorH
#define miniTimeCalculatorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>

//#include "sclibchrono.h"
//---------------------------------------------------------------------------
class TMiniTmeCalculator : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TGroupBox *GBtimeKeeping;
	TEdit *EditNbBib;
	TEdit *EditStartHour;
	TEdit *EditEndHour;
	TLabel *LabelBib;
	TLabel *LabelStartHour;
	TLabel *LabelFinishLineHour;
	TButton *BtnAddTime;
	TStringGrid *SGRanked;
	void __fastcall BtnAddTimeClick(TObject *Sender);
private:	// D�clarations utilisateur
public:		// D�clarations utilisateur
	__fastcall TMiniTmeCalculator(TComponent* Owner);
//--- Template
template <class T>
T SCabs(T x)
{
    return x<0 ? -x : x;
}
// --- M�thodes
    AnsiString SCscanRecordA(const AnsiString &src, int field, AnsiString separator, AnsiString delimitor = "", bool remove_right_space = true);
	double SCstringToDouble(AnsiString src, bool isSoftControlVersion = false);
	void SCremoveRightSpaceDirectA(AnsiString &src);
};
//---------------------------------------------------------------------------
extern PACKAGE TMiniTmeCalculator *MiniTmeCalculator;
//---------------------------------------------------------------------------
#endif
