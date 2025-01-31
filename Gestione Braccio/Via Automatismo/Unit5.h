//----------------------------------------------------------------------------
#ifndef Unit5H
#define Unit5H
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
//----------------------------------------------------------------------------
class Tdriv : public TForm
{
__published:
	TBevel *Bevel1;
	TShape *Shape1;
	TShape *Shape2;
	TShape *Shape3;
	TShape *Shape4;
	TShape *Shape5;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TTimer *Timer1;
	void __fastcall Timer1Timer(TObject *Sender);
private:
public:
	virtual __fastcall Tdriv(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tdriv *driv;
//----------------------------------------------------------------------------
#endif    
