//----------------------------------------------------------------------------
#ifndef Unit9H
#define Unit9H
//----------------------------------------------------------------------------
#include <OKCANCL1.h>
#include <vcl\ExtCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Classes.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Windows.hpp>
#include <vcl\System.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
//----------------------------------------------------------------------------
class Tfltxt : public TOKBottomDlg
{
__published:
        TRichEdit *Azioni;
        TRichEdit *Tempi;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TGroupBox *GroupBox2;
	void __fastcall HelpBtnClick(TObject *Sender);
        void __fastcall CancelBtnClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall OKBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall Tfltxt(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tfltxt *fltxt;
//----------------------------------------------------------------------------
#endif    
