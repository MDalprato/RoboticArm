//----------------------------------------------------------------------------
#ifndef Unit3H
#define Unit3H
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
//----------------------------------------------------------------------------
class Tview : public TForm
{
__published:
	TImage *Image1;
	TMainMenu *MainMenu1;
	TMenuItem *Opzioni1;
	TMenuItem *Esci1;
	TShape *Shape1;
	TShape *Shape2;
	TShape *Shape3;
	TShape *Shape4;
	TShape *Shape6;
	TTimer *Timer1;
	void __fastcall Esci1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
private:
public:
	virtual __fastcall Tview(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tview *view;
//----------------------------------------------------------------------------
#endif    
