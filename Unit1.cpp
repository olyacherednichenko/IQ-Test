//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <fstream.h>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ComponentNew"
#pragma resource "*.dfm"
TForm1 *Form1;
TForm2 *Form2;
TForm3 *Form3;
AnsiString mass[4];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
if(Edit1->Text==""||Edit2->Text==""||Edit3->Text==""||Edit4->Text=="") {
Application->Title="Ошибка";
ShowMessage("Необходимо зарегестрироваться!");
}
else{
mass[0]=Edit1->Text;
mass[1]=Edit2->Text;
mass[2]=Edit3->Text;
mass[3]=Edit4->Text;
std::ofstream vmdelet_out;
vmdelet_out.open("h.txt", std::ios::app);
vmdelet_out<<"Фамилия: "<<mass[0].c_str()<<endl;
vmdelet_out<<"Имя: "<<mass[1].c_str()<<endl;
vmdelet_out<<"Отчество: "<<mass[2].c_str()<<endl;
vmdelet_out<<"Возраст: "<<mass[3].c_str()<<endl;
vmdelet_out<<endl;
vmdelet_out.close();

TForm3 * Form3 = new TForm3(0);
try{
Form3->ShowModal();
}
__finally
{
	delete Form3;
}

}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{if(Edit1->Text==""||Edit2->Text==""||Edit3->Text==""||Edit4->Text=="") {
	Application->Title="Ошибка";
ShowMessage("Необходимо зарегестрироваться!");
}
else{
mass[0]=Edit1->Text;
mass[1]=Edit2->Text;
mass[2]=Edit3->Text;
mass[3]=Edit4->Text;
std::ofstream vmdelet_out;
vmdelet_out.open("h.txt", std::ios::app);
vmdelet_out<<"Фамилия: "<<mass[0].c_str()<<endl;
vmdelet_out<<"Имя: "<<mass[1].c_str()<<endl;
vmdelet_out<<"Отчество: "<<mass[2].c_str()<<endl;
vmdelet_out<<"Возраст: "<<mass[3].c_str()<<endl;
vmdelet_out<<endl;
vmdelet_out.close();

TForm2 * Form2 = new TForm2(0);
try{
Form2->ShowModal();
}
__finally
{
	delete Form3;
}
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N1Click(TObject *Sender)
{
ComponentNew1->WhoAmI();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N3Click(TObject *Sender)
{
system("notepad.exe Зарегестрированные пользователи.txt");


}
//---------------------------------------------------------------------------

