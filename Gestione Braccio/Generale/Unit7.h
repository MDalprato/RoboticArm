//---------------------------------------------------------------------------
#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class Tviewer : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TBevel *Bevel1;
	TShape *Shape4;
	TShape *Shape2;
	TShape *Shape3;
	TShape *Shape5;
	TMainMenu *MainMenu1;
	TMenuItem *Opzioni1;
	TMenuItem *Esci1;
	TShape *Shape6;
	void __fastcall Esci1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tviewer(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tviewer *viewer;
//---------------------------------------------------------------------------
#endif
