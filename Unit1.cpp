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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	 Form1->Canvas->Brush->Color = clBlue;
	 Form1->Canvas->Rectangle(0,10,20,20);
	 Form1->Canvas->Brush->Color = clBlue;
	 Form1->Canvas->Pie(40,40, 80,80, 0,0, 80,80);
}
//---------------------------------------------------------------------------
