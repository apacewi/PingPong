//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

 int x = -8, y = -8, punktLewy = 0, punktPrawy = 0, temporary = 0, trybGry = 0;
 int liczbaUderzen = 0;

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
       if (trybGry == 1){
                if ((ball -> Left + ball -> Width < pal1 -> Left) || (ball -> Left + ball -> Width/2 > pal2 -> Left + 10))
                {
                        ballTimer -> Enabled = false;
                        ball -> Visible = false;
                        Button1 -> Visible = true;
                        uderzenia -> Caption = " Liczba uderzen: " + IntToStr(liczbaUderzen);
                        uderzenia -> Visible = true;
                        temporary = x;
                        if (x < 0) x = -x;
                        Button2 -> Caption = " Predkosc pilki: " + IntToStr(x);
                        Button2 -> Visible = true;
                        if (ball -> Left < pal1 -> Left){
                        Button4 -> Caption = " Punkt dla gracza prawego!";
                        punktPrawy += 1;
                        }
                        else{
                        punktLewy += 1;
                        Button4 -> Caption = " Punkt dla gracza lewego!";
                        }
                        Button4 -> Visible = true;
                        Label2 -> Caption = IntToStr(punktLewy) + " : " + IntToStr(punktPrawy);
                        Label2 -> Visible = true;
                        Button5 -> Visible = true;
                        }
                        else if ((ball -> Left + ball -> Width > pal2 -> Left) && (pal2 -> Top < ball -> Top + ball -> Height/2) && (pal2 -> Top + pal2 -> Height > ball -> Top + ball -> Height/2) )
                        {
                        if (x >= 30){
                        //  dzwiek -> Play();
                         x = -x;
                                liczbaUderzen++;
                                }
                                else if (x < 30)
                                {
                                //    dzwiek -> Play();
                                        x = -x - 2;
                                        liczbaUderzen++;
                                        }
                         }    // prawa paletka x -

                        else if ((pal1 -> Left + pal1 -> Width >= ball -> Left) && (pal1 -> Top <= ball -> Top + ball -> Height/2) && (pal1 -> Top + pal1 -> Height >= ball -> Top + ball -> Height/2) )
                        {
                        if (x <= -30){
                                //  dzwiek -> Play();
                                x = -x;
                                liczbaUderzen++;
                                }
                                else if (x > -30)
                                {
                                         //   dzwiek -> Play();
                                        x = -x + 2;
                                        liczbaUderzen++;
                                }
                        }    // lewa paletka x +
       }
       else if (trybGry == 2)
       {
          pal1 -> Visible = false;
          if (ball -> Left <= backg -> Left)
                x = -x;
          if (ball -> Left + ball -> Width/2 > pal2 -> Left + 10){
                        ballTimer -> Enabled = false;
                        ball -> Visible = false;
                        Button1 -> Visible = true;
                        uderzenia -> Caption = " Liczba uderzen: " + IntToStr(liczbaUderzen);
                        uderzenia -> Visible = true;
                        temporary = x;
                        if (x < 0) x = -x;
                        Button2 -> Caption = " Predkosc pilki: " + IntToStr(x);
                        Button2 -> Visible = true;
                        }
          else if ((ball -> Left + ball -> Width > pal2 -> Left) && (pal2 -> Top < ball -> Top + ball -> Height/2) && (pal2 -> Top + pal2 -> Height > ball -> Top + ball -> Height/2) )
                        {
                        if (x >= 30){
                        //  dzwiek -> Play();
                         x = -x;
                                liczbaUderzen++;
                                }
                                else if (x < 30)
                                {
                                //    dzwiek -> Play();
                                        x = -x - 2;
                                        liczbaUderzen++;
                                        }
                         }    // prawa paletka x -

       }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        liczbaUderzen = 0;
        Button2 -> Visible = false;
        Button4 -> Visible = false;
        Button5 -> Visible = false;
        Button1 -> Visible = false;
        uderzenia -> Visible = false;
        Label2 -> Visible = false;
        ball -> Visible = true;
        ball -> Left = backg -> Width/2;
        ball -> Top = backg -> Height/2;
        if ( temporary > 0)
        x = -8;
        else
        x = 8;
        y = -8;
        ballTimer -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
dzwiek -> FileName = "Voices/pingpongv3.mp3";
dzwiek -> Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
dzwiek -> Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{

        Button3 -> Visible = false;
        Button6 -> Visible = true;
        Button7 -> Visible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
        punktPrawy = 0;
        punktLewy = 0;
        liczbaUderzen = 0;
        Button2 -> Visible = false;
        Button4 -> Visible = false;
        Button5 -> Visible = false;
        Button1 -> Visible = false;
        uderzenia -> Visible = false;
        Label2 -> Visible = false;
        ball -> Visible = true;
        ball -> Left = backg -> Width/2;
        ball -> Top = backg -> Height/2;
        if ( temporary > 0)
        x = -8;
        else
        x = 8;
        y = -8;
        ballTimer -> Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
        Button7 -> Visible = false;
        Button6 -> Visible = false;
        trybGry = 1;
        Label1 -> Visible = false;
        ballTimer -> Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
        Button7 -> Visible = false;
        Button6 -> Visible = false;
        trybGry = 2;
        Label1 -> Visible = false;
        ballTimer -> Enabled = true;
}
//---------------------------------------------------------------------------

