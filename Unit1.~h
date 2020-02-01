//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *ball;
        TImage *pal2;
        TImage *pal1;
        TTimer *timerPal1;
        TTimer *secondTimerPal1;
        TTimer *secondTimerPal2;
        TTimer *timerPal2;
        TTimer *ballTimer;
        TShape *backg;
        TButton *Button1;
        TMediaPlayer *dzwiek;
        TButton *Button3;
        TLabel *Button4;
        TLabel *uderzenia;
        TLabel *Button2;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        void __fastcall timerPal1Timer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall secondTimerPal1Timer(TObject *Sender);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall timerPal2Timer(TObject *Sender);
        void __fastcall secondTimerPal2Timer(TObject *Sender);
        void __fastcall ballTimerTimer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 