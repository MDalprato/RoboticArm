//----------------------------------------------------------------------------
#ifndef Unit4H
#define Unit4H
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
#include <jpeg.hpp>
//----------------------------------------------------------------------------
class Tinfo : public TForm
{
__published:
	TPanel *Panel1;
	TImage *ProgramIcon;
	TLabel *ProductName;
	TLabel *Version;
	TLabel *Copyright;
	TLabel *Comments;
	TButton *OKButton;
        TLabel *Label1;
        TTimer *Timer1;
        TTimer *Timer2;
	void __fastcall OKButtonClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
private:
public:
	virtual __fastcall Tinfo(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tinfo *info;
//----------------------------------------------------------------------------
#endif    
