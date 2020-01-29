//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

 int x = -8, y = -8;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPal1Timer(TObject *Sender)
{
        if (pal1 -> Top > 10) pal1 -> Top -= 10;
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
       if (pal1 -> Top + pal1 -> Height < backg -> Height - 10 ) pal1 -> Top += 10;
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
       if (pal2 -> Top + pal2 -> Height < backg -> Height - 10 ) pal2 -> Top += 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::secondTimerPal2Timer(TObject *Sender)
{
       if (pal2 -> Top > 10) pal2 -> Top -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ballTimerTimer(TObject *Sender)
{
       ball -> Left += x;
       ball -> Top += y;

       if (ball -> Top <= backg -> Top) y = -y;
       if (ball -> Top + ball -> Height >= backg -> Height) y = -y;

       if ((ball -> Left + ball -> Width >= pal2 -> Left) && (pal2 -> Top <= ball -> Top + ball -> Height/2) && (pal2 -> Top + pal2 -> Height >= ball -> Top + ball -> Height/2) )
        {
        if (x >= 0)
                x = -x - 2;
        }    // prawa paletka x -

       if ((pal1 -> Left + pal1 -> Width >= ball -> Left) && (pal1 -> Top <= ball -> Top + ball -> Height/2) && (pal1 -> Top + pal1 -> Height >= ball -> Top + ball -> Height/2) )
       {
        if (x < 0)
                x = -x + 2;
       }    // lewa paletka x +

       if ( (ball -> Left + ball -> Width < pal1 -> Left) || (ball -> Left + ball -> Width/2 > pal2 -> Left + 10) ){ ballTimer -> Enabled = false; ball -> Visible = false; }
}
//---------------------------------------------------------------------------
