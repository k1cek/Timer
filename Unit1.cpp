//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        int s=3;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
     s--;
     int godzin, sekund, minut;
     AnsiString godz, min, sek;

     godzin = s/3600;
     godz = IntToStr(godzin);
     if(godzin<10) godz="0"+godz;

     minut = (s-godzin*3600)/60;
     min = IntToStr(minut);
     if(minut<10) min="0"+min;

     sekund=s-godzin*3600-minut*60;;
     sek=IntToStr(sekund);
     if(sekund<10) sek="0"+sek;

     Label1->Caption=godz+":"+min+":"+sek;

     if(s<=0)
     {
     Timer1->Enabled=false;
     Label1->Caption="Koniec czasu!";
     }
}
//---------------------------------------------------------------------------
