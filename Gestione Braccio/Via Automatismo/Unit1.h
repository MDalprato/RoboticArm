//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include "CSPIN.h"
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TMainMenu *MainMenu1;
        TListBox *lista_azioni;
        TListBox *lista_tempo;
        TGroupBox *GroupBox2;
        TGroupBox *GroupBox3;
        TComboBox *azioni;
        TButton *inserisci;
        TEdit *durata;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TButton *close;
        TGroupBox *GroupBox4;
	TButton *start;
        TGroupBox *GroupBox5;
        TLabel *Label4;
        TLabel *ck1_label;
        TTimer *clock;
        TLabel *azione_label;
        TTimer *timer_avvio;
	TTimer *azione_tmr;
	TLabel *Label5;
	TLabel *timing;
	TGroupBox *GroupBox6;
	TComboBox *coreggi;
	TLabel *Label7;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TEdit *Edit1;
	TLabel *Label8;
	TTimer *avvio;
	TButton *Button4;
	TMenuItem *Opzioni1;
	TMenuItem *Esci1;
	TMenuItem *Progetto1;
	TMenuItem *Caricalistaazioni1;
	TMenuItem *Aprilistatempi1;
	TMenuItem *Salvalistaazioni1;
	TMenuItem *Salvalistaazioni2;
	TOpenDialog *OpenDialog1;
	TOpenDialog *OpenDialog2;
	TSaveDialog *SaveDialog1;
	TSaveDialog *SaveDialog2;
	TStatusBar *StatusBar1;
	TMenuItem *Controlli1;
	TMenuItem *Inserisci1;
	TMenuItem *Fermabraccio1;
	TMenuItem *Liste1;
	TMenuItem *Cancellaliste1;
	TMenuItem *Up1;
	TMenuItem *Down1;
	TMenuItem *Correggi1;
	TMenuItem *Nomeprogetto1;
	TMenuItem *Viewer1;
	TMenuItem *MostraViewer1;
	TMenuItem *SalvaProgetto1;
	TMenuItem *ApriProgetto1;
	TMenuItem *Help1;
	TMenuItem *InformazioniSviluppatore1;
	TMenuItem *InterrompiilProgramma1;
	TMenuItem *Mostrauscite1;
        TLabel *Label9;
        TLabel *Label6;
        TLabel *czx;
        TButton *clear_lists;
        TMenuItem *Help2;
        TTimer *time;
        TTimer *timeinbasso;
        TGroupBox *GroupBox7;
        TCheckBox *autos;
        TMenuItem *Settaa1Minuto1;
        TTimer *autosave;
        TTimer *br;
        TProgressBar *barsave;
        TMenuItem *Elaboracomefileditesto1;
        TLabel *Label10;
        void __fastcall Esci1Click(TObject *Sender);
        void __fastcall closeClick(TObject *Sender);
        void __fastcall clear_listsClick(TObject *Sender);
        void __fastcall lista_azioniClick(TObject *Sender);
        void __fastcall lista_tempoClick(TObject *Sender);
        void __fastcall inserisciClick(TObject *Sender);
        void __fastcall ckTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall clockTimer(TObject *Sender);
        void __fastcall timer_avvioTimer(TObject *Sender);
        void __fastcall startClick(TObject *Sender);
	void __fastcall azione_tmrTimer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall avvioTimer(TObject *Sender);
	void __fastcall azioniChange(TObject *Sender);
	void __fastcall ritorn_BTClick(TObject *Sender);
	void __fastcall ritClick(TObject *Sender);
	void __fastcall ritornoTimer(TObject *Sender);
	void __fastcall timer_ritornoTimer(TObject *Sender);
	void __fastcall Caricalistaazioni1Click(TObject *Sender);
	void __fastcall Aprilistatempi1Click(TObject *Sender);
	void __fastcall Salvalistaazioni1Click(TObject *Sender);
	void __fastcall Salvalistaazioni2Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall brTimer(TObject *Sender);
	void __fastcall Inserisci1Click(TObject *Sender);
	void __fastcall Fermabraccio1Click(TObject *Sender);
	void __fastcall Up1Click(TObject *Sender);
	void __fastcall Cancellaliste1Click(TObject *Sender);
	void __fastcall Down1Click(TObject *Sender);
	void __fastcall Correggi1Click(TObject *Sender);
	void __fastcall Nomeprogetto1Click(TObject *Sender);
	void __fastcall MostraViewer1Click(TObject *Sender);
	void __fastcall SalvaProgetto1Click(TObject *Sender);
	void __fastcall ApriProgetto1Click(TObject *Sender);
	void __fastcall InformazioniSviluppatore1Click(TObject *Sender);
	void __fastcall InterrompiilProgramma1Click(TObject *Sender);
	void __fastcall Mostrauscite1Click(TObject *Sender);
        void __fastcall Help2Click(TObject *Sender);
        void __fastcall timeinbassoTimer(TObject *Sender);
        void __fastcall autosClick(TObject *Sender);
        void __fastcall autosaveTimer(TObject *Sender);
        void __fastcall Settaa20Minuti1Click(TObject *Sender);
        void __fastcall Settaa30Minuti1Click(TObject *Sender);
        void __fastcall Settaa1Minuto1Click(TObject *Sender);
        void __fastcall Elaboracomefileditesto1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
