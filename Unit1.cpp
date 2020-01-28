//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPal1Timer(TObject *Sender)
{
        pal1 -> Top -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 'A') timerPal1 -> Enabled = true;
        if (Key == 'Z') secondTimerPal1 -> Enabled = true;
        if (Key == VK_DOWN) timerPal2 -> Enabled = true;
        if (Key == VK_UP) secondTimerPal2 -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::secondTimerPal1Timer(TObject *Sender)
{
        pal1 -> Top += 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 'Z') secondTimerPal1 -> Enabled = false;
        if (Key == 'A') timerPal1 -> Enabled = false;
        if (Key == VK_UP) secondTimerPal2 -> Enabled = false;
        if (Key == VK_DOWN) timerPal2 -> Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::timerPal2Timer(TObject *Sender)
{
        pal2 -> Top += 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::secondTimerPal2Timer(TObject *Sender)
{
        pal2 -> Top -= 10;
}
//---------------------------------------------------------------------------
