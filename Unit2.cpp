//---------------------------------------------------------------------------
//40
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int q=1, n=0, i1=30, i2=60;
String kay[40] = {
"4", "ЧАЙ", "ЧЕМОДАН", "11", "ЖАБА", "21", "3", "ТЕСТО", "6", "5",
"И", "ШОК", "54", "11", "27", "М и И", "2","2","18","76",
"КОЖА","ЛАД","СКУНС","КИСТЬ","С","Е и Е","2","1","1","ГРОТ",
"ВИНТ","64","ПОРТ","ВТОРНИК","Ж/7","ГУБА","РОСА","1","6","1"
};
String ans[40];
float b=70, b1;


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
Label1->Caption="Перейти к прохождению теста";
Label1->Align=alTop;
Label1->Alignment=taCenter;
Label1->WordWrap=true;
Label1->AutoSize=true;
Image2->Picture->LoadFromFile("brain.png");
Image2->Top=80;
Image2->Left=0;
Image2->Width= 718;
Image2->Height= 241 ;
Image2->Center=true;
Label2->Visible=false;
Edit1->Visible=false;
q=1;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image1Click(TObject *Sender)
{
Timer1->Enabled = true;
Label3->Visible=true;
if(i1==0&&i2==0)
q=41;
if(q<=41)
{
Label2->Visible=false;
Label2->Top=Label1->Top+100;
Edit1->Top=Label2->Top+50;
Image2->Visible=true;
Edit1->Visible=true;
if (q<41) {
ans[q-2]=Edit1->Text;
Edit1->Clear();
}
	switch(q)
	{
	case 1:{
		Label1->Left=10;
		Label1->Top=10;
		Label1->Alignment=taCenter;
		Label1->Align=alTop;
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из четырех пронумерованных.";
		Image2->Picture->LoadFromFile("1.jpg");
		Edit1->Top= 330;
	}
		break;
	case 2:{
		Label1->Caption=IntToStr(q)+
		".Вставьте слово, которое служило бы окончанием первого слова и началом второго." ;
		Label2->Caption="ОБЫ ( . . . ) КА";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 3:{
		Label1->Caption=IntToStr(q)+".Решите анаграммы и исключите лишнее слово.";
		Label2->Caption="ААЛТЕРК\nКОЖАЛ\nДМОНЧЕА\nШКААЧ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 4:{
		Label1->Caption=IntToStr(q)+".Вставьте недостающее число ";
		Image2->Picture->LoadFromFile("4.jpg");
				Edit1->Top= 330;
	}
		break;
	case 5:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное слово";
		Label2->Caption="БАГОР (РОСА) ТЕСАК\nГАРАЖ ( . . . . ) ТАБАК";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 6:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное число.";
		Label2->Caption="196  (25)  324\n325  (  )  137";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 7:{
		Label1->Caption=IntToStr(q)+".Продолжите ряд чисел";
		Label2->Caption="18  10  6  4  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 8:{
		Label1->Caption=IntToStr(q)+".Решите анаграммы и исключите лишнее слово";
		Label2->Caption="НИАВД\nСЕОТТ\nСЛОТ\nЛЕКСОР";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 9:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из пронумерованных ";
		Image2->Picture->LoadFromFile("9.jpg");
				Edit1->Top= 330;
	}
		break;
	case 10:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из шести пронумерованных ";
		Image2->Picture->LoadFromFile("10.jpg");
				Edit1->Top= 330;
	}
		break;
	case 11:{
		Label1->Caption=IntToStr(q)+".Вставьте недостающую букву";
		Label2->Caption="Щ  Ц  Т  П  Л  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 12:{
		Label1->Caption=IntToStr(q)+".Вставьте слово, которое служило бы окончанием первого слова и началом второго";
		Label2->Caption="ME ( . . . ) ОЛАД";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 13:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное число";
		Image2->Picture->LoadFromFile("13.jpg");
		Edit1->Top= 330;
	}
		break;
	case 14:{
		Label1->Caption=IntToStr(q)+".Вставьте недостающее число";
		Label2->Caption="4  9  20\n8  5  14\n10  3  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 15:{
		Label1->Caption=IntToStr(q)+".Вставьте недостающее число";
		Label2->Caption="16  (27)  43\n29  (  )  56";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 16:{
		Label1->Caption=IntToStr(q)+".Вставьте недостающие буквы ";
		Image2->Picture->LoadFromFile("16.jpg");
				Edit1->Top= 330;
	}
		break;
	case 17:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигурку из пронумерованных ";
		Image2->Picture->LoadFromFile("17.jpg");
				Edit1->Top= 330;
	}
		break;
	case 18:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из шести пронумерованных";
		Image2->Picture->LoadFromFile("18.jpg");
				Edit1->Top= 330;
	}
		break;
	case 19:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное число";
		Label2->Caption="6  11  ?  27";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 20:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное число";
		Label2->Caption="12  (56)  16\n17  (  )  21";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 21:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное слово";
		Label2->Caption="ФЛЯГА (АЛЬТ) ЖЕСТЬ\nКОСЯК ( . . . . ) МИРАЖ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 22:{
		Label1->Caption=IntToStr(q)+".Вставьте слово, которое служило бы окончанием первого слова и началом второго";
		Label2->Caption="ПРИК ( . . . ) ЬЯ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 23:{
		Label1->Caption=IntToStr(q)+".Решите анаграммы и исключите лишнее слово";
		Label2->Caption="ЖААРБ\nТЯХА\nНУССК\nКОДАЛ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 24:{
		Label1->Caption=IntToStr(q)+".Вставьте слово, которое означало бы то же, что и слова, стоящие вне скобок";
		Label2->Caption="РУКА ( . . . . . ) ГРОЗДЬ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 25:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенную букву";
		Label2->Caption="А  Г  Ж\nГ  З  Л\nЗ  М  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 26:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенные буквы ";
		Image2->Picture->LoadFromFile("26.jpg");
				Edit1->Top= 330;
	}
		break;
	case 27:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из шести пронумерованных ";
		Image2->Picture->LoadFromFile("27.jpg");
				Edit1->Top= 330;

	}
		break;
	case 28:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из пронумерованных";
		Image2->Picture->LoadFromFile("28.jpg");
				Edit1->Top= 330;
	}
		break;
	case 29:{
		Label1->Caption=IntToStr(q)+".Вставьте нужную фигуру из шести пронумерованных ";
		Image2->Picture->LoadFromFile("29.jpg");
				Edit1->Top= 330;
	}
		break;
	case 30:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное слово";
		Label2->Caption="КНИГА (АИСТ) САЛАТ\nПОРОГ ( . . . . ) ОМЛЕТ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 31:{
		Label1->Caption=IntToStr(q)+".Вставьте слово, которое означало бы то же, что и слова, стоящие вне скобок";
		Label2->Caption="КАРТОЧНАЯ ИГРА ( . . . . ) СТЕРЖЕНЬ С РЕЗЬБОЙ";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 32:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное число";
		Label2->Caption="1 8 27 ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 33:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное слово";
		Label2->Caption="ЛОТОК (КЛАД) ЛОДКА\nОЛИМП ( . . . . ) КАТЕР";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 34: {
		Label1->Caption=IntToStr(q)+".Решите анаграммы и исключите лишнее слово";
		Label2->Caption="АТСЕН\nТИВОНКР\nРАКЫШ\nКООН";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 35:{
		Label1->Caption=IntToStr(q)+".Вставьте пропущенную букву и пропущенное число";
		Label2->Caption="1 В 5 ?\nА 3 Д ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 36: {
		Label1->Caption=IntToStr(q)+".Вставьте слово, которое означало бы то же, что и слова, стоящие вне скобок.";
		Label2->Caption="ЗАЛИВ ( . . . . ) ЧАСТЬ ЛИЦА";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 37: {
		Label1->Caption=IntToStr(q)+".Вставьте пропущенное слово";
		Label2->Caption="ПИРОГ (ПОЛЕ) СЛЕЗА\nРЫНОК ( . . . . ) ОСАДА";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 38: {
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из шести пронумерованных";
		Image2->Picture->LoadFromFile("38.jpg");
				Edit1->Top= 330;
	}
		break;
	case 39:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигурку из шести пронумерованных ";
		Image2->Picture->LoadFromFile("39.jpg");
				Edit1->Top= 330;
	}
		break;
	case 40:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из четырех пронумерованных ";
		Image2->Picture->LoadFromFile("40.jpg");
				Edit1->Top= 330;
	}
		break;
	case 41: {
		Label3->Visible=false;
		Timer1->Enabled = false;
		Edit1->Visible=false;
		Image1->Visible=false;
		for(int i=0;i<40;i++)
		{
		if((kay[i])==ans[i])
		n++;
		}
		for(int i=0;i<40;i++)
		{
		b+=2.5;
		if(n==i)
		b1=b;
		}
		Label1->Caption="Результат:\n правильных ответов: "+IntToStr(n)+
		 "\nваш iq= "+FloatToStr(b1);
		Label1->Left=Image2->Left+160;
		Label1->Align=alNone;
		Image2->Top=0;
		Image2->Left=0;
		Image2->Picture->LoadFromFile("brain.png");
		Image2->Width= 700;
		Image2->Height= 384 ;
		Image2->Center=false;
		break;
	}
}
q++;
}

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
 if(i1==0&&i2==0)
 {
 q=41;
 Timer1->Enabled = false;
 }
 if(i2 > 0){
	 i2--;
	 Label3->Caption = IntToStr(i1)+":"+IntToStr(i2);
	 Application->ProcessMessages();
   }
 else {i2=60; i1--;}
}
//---------------------------------------------------------------------------

