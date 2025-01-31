//----------------------------------------------------------------------------
#ifndef Unit8H
#define Unit8H
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
#include <ComCtrls.hpp>
//----------------------------------------------------------------------------
class Tsaves : public TForm
{
__published:        
	TButton *OKBtn;
        TGroupBox *GroupBox1;
        TCheckBox *CheckBox1;
        TLabel *Label1;
        TTrackBar *TrackBar1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        void __fastcall CancelBtnClick(TObject *Sender);
        void __fastcall OKBtnClick(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
private:
public:
	virtual __fastcall Tsaves(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE Tsaves *saves;
//----------------------------------------------------------------------------
#endif    
