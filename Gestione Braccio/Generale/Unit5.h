//----------------------------------------------------------------------------
#ifndef Unit5H
#define Unit5H
//----------------------------------------------------------------------------
#include <vcl\ExtCtrls.hpp>
#include <vcl\ComCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Classes.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Windows.hpp>
#include <vcl\System.hpp>
#include <jpeg.hpp>
//----------------------------------------------------------------------------
class TPagesDlg : public TForm
{
__published:
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *OKBtn;
	TButton *CancelBtn;
	TButton *HelpBtn;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TMemo *Memo1;
        TTabSheet *TabSheet3;
        TScrollBar *ScrollBar1;
        TGroupBox *GroupBox1;
        TLabel *Label7;
        TLabel *n_wheel;
        TGroupBox *GroupBox2;
        TGroupBox *GroupBox3;
        TGroupBox *GroupBox4;
        TLabel *Label6;
        TLabel *Label3;
        TLabel *Label2;
        TLabel *Label1;
        TLabel *Usb_status;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *ing_read;
        TGroupBox *GroupBox5;
        TImage *Image3;
        TImage *Image2;
        TImage *Image4;
        TLabel *sand_data;
        TImage *Image1;
        TGroupBox *GroupBox6;
        TRadioButton *w_pinza;
        TRadioButton *w_polso;
        TRadioButton *w_gomito;
        TRadioButton *w_spalla;
        TMemo *Memo2;
        TImage *Image5;
        TImage *Image6;
        TTabSheet *TabSheet4;
        TGroupBox *GroupBox7;
        TMemo *Memo3;
        TCheckBox *CheckBox9;
        TImage *Image8;
	TImage *Image7;
        void __fastcall CancelBtnClick(TObject *Sender);
        void __fastcall HelpBtnClick(TObject *Sender);
        void __fastcall OKBtnClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall ScrollBar1Change(TObject *Sender);
        void __fastcall w_pinzaClick(TObject *Sender);
        void __fastcall w_polsoClick(TObject *Sender);
        void __fastcall w_spallaClick(TObject *Sender);
        void __fastcall w_gomitoClick(TObject *Sender);
        void __fastcall CheckBox9Click(TObject *Sender);
private:
public:
	virtual __fastcall TPagesDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TPagesDlg *PagesDlg;
//----------------------------------------------------------------------------
#endif    
