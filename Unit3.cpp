//---------------------------------------------------------------------------
//20
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
int q=1, n=0, i1=30, i2=60;
int kay[40] = {
4, 3, 2, 0, 1, 3, 1, 1, 4, 4,
3, 2, 0, 1, 3, 2, 4, 3, 3, 4,
};
int ans[40];
float b=60, b1;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
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
RadioGroup1->Visible=false;
q=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image1Click(TObject *Sender)
{
Timer1->Enabled = true;
Label3->Visible=true;
if(q<=21)
{
RadioGroup1->Width=500;
RadioGroup1->Left=100;
Label2->Visible=false;
Label2->Top=Label1->Top+100;
RadioGroup1->Top=Label2->Top+50;
Image2->Visible=true;
RadioGroup1->Visible=true;
if (q<21) {
ans[q-2]=RadioGroup1->ItemIndex;
RadioGroup1->ItemIndex=-2;
}
	switch(q)
	{
	case 1:{
		Label1->Left=10;
		Label1->Top=10;
		Label1->Alignment=taCenter;
		Label1->Align=alTop;
		Label1->Caption=IntToStr(q)+".Каким числом следует заменить знак вопроса?";
		Label2->Caption="23 28 33 38 43 ?";
		RadioGroup1->Items->Strings[0]=46;
		RadioGroup1->Items->Strings[1]=47;
		RadioGroup1->Items->Strings[2]=49;
		RadioGroup1->Items->Strings[3]=50;
		RadioGroup1->Items->Strings[4]=48;

		Label2->Visible=true;
		Image2->Visible=false;
		Edit1->Top= 330;
	}
		break;
	case 2:{
		Label1->Caption=IntToStr(q)+".Что здесь является лишним?" ;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="ТИГР";
		RadioGroup1->Items->Strings[1]="ЛЕВ";
		RadioGroup1->Items->Strings[2]="ГЕПАРД";
		RadioGroup1->Items->Strings[3]="ВОЛК";
		RadioGroup1->Items->Strings[4]="РЫСЬ";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 3:{
		Label1->Caption=IntToStr(q)+".Какое слово надо вставить в скобки, чтобы закончить первое слово и начать последнее слово? Что обозначает слово в скобках?";
		Label2->Caption="ЧЕЛО ( . . . ) СЕЛЬ";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="ТРАНСПОРТ";
		RadioGroup1->Items->Strings[1]="ЖИВОТНОЕ";
		RadioGroup1->Items->Strings[2]="ПЕРИОД";
		RadioGroup1->Items->Strings[3]="ДЕРЕВО";
		RadioGroup1->Items->Strings[4]="ЦВЕТОК";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 4:{
		Label1->Caption=IntToStr(q)+".Какие две буквы должны идти далее?";
		Label2->Caption="А И Г Л Ё О ? ?";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="И  С";
		RadioGroup1->Items->Strings[1]="И  Р";
		RadioGroup1->Items->Strings[2]="Й  С";
		RadioGroup1->Items->Strings[3]="К  Т";
		RadioGroup1->Items->Strings[4]="З  Р";
	}
		break;
	case 5:{
		Label1->Caption=IntToStr(q)+".Каким числом следует заменить знак вопроса?";
		Label2->Caption="3 8 6 30\n4 9 3 39\n7 5 2 ?";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]=35;
		RadioGroup1->Items->Strings[1]=37;
		RadioGroup1->Items->Strings[2]=41;
		RadioGroup1->Items->Strings[3]=42;
		RadioGroup1->Items->Strings[4]=43;

	}
		break;
	case 6:{
		Label1->Caption=IntToStr(q)+".Какие два куба из пяти являются правильными?";
		Image2->Picture->LoadFromFile("2.6.jpg");
		RadioGroup1->Top= 330;
		RadioGroup1->Items->Strings[0]="1 и 2";
		RadioGroup1->Items->Strings[1]="3 и 5";
		RadioGroup1->Items->Strings[2]="1 и 5";
		RadioGroup1->Items->Strings[3]="4 и 5";
		RadioGroup1->Items->Strings[4]="3 и 4";
		RadioGroup1->Width=500;
		RadioGroup1->Left=100;

	}
		break;
	case 7:{
		Label1->Caption=IntToStr(q)+".Какие два слова наиболее противоположны по смыслу?";
		Label2->Caption="1) БОЛЬШОЙ 2) ШИРОКИЙ 3) УНИЖАТЬ 4) ВЫЗЫВАЮЩИЙ 5) ДРОЖЖАТЬ 6) ПЛАЧЕВНЫЙ 7) КРИЧАТЬ 8) ХВАЛИТЬ 9) ТОЛСТЫЙ";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="2 и 9";
		RadioGroup1->Items->Strings[1]="3 и 8";
		RadioGroup1->Items->Strings[2]="1 и 2";
		RadioGroup1->Items->Strings[3]="4 и 5";
		RadioGroup1->Items->Strings[4]="6 и 7";
	}
		break;
	case 8:{
		Label1->Caption=IntToStr(q)+".Выберите рисунок, который необходимо добавить вместо знака вопроса.";
		Image2->Picture->LoadFromFile("2.8.jpg");
		RadioGroup1->Top= 330;
		RadioGroup1->Items->Strings[0]=1;
		RadioGroup1->Items->Strings[1]=2;
		RadioGroup1->Items->Strings[2]=3;
		RadioGroup1->Items->Strings[3]=4;
		RadioGroup1->Items->Strings[4]=5;
	}
		break;
	case 9:{
		Label1->Caption=IntToStr(q)+".Какими двумя числами следует заменить знаки вопроса?";
		Label2->Caption="4 12 8 24 16 ? ?";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="32  26";
		RadioGroup1->Items->Strings[1]="46  32";
		RadioGroup1->Items->Strings[2]="48  30";
		RadioGroup1->Items->Strings[3]="46  30";
		RadioGroup1->Items->Strings[4]="48  32";
	}
		break;
	case 10:{
		Label1->Caption=IntToStr(q)+".Выберите нужную фигуру из шести пронумерованных ";
		Image2->Picture->LoadFromFile("2.10.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]=1;
		RadioGroup1->Items->Strings[1]=2;
		RadioGroup1->Items->Strings[2]=3;
		RadioGroup1->Items->Strings[3]=4;
		RadioGroup1->Items->Strings[4]=5;
	}
		break;
	case 11:{
		Label1->Caption=IntToStr(q)+".Каким числом следует заменить знак вопроса?";
		Image2->Picture->LoadFromFile("2.11.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]=9;
		RadioGroup1->Items->Strings[1]=12;
		RadioGroup1->Items->Strings[2]=7;
		RadioGroup1->Items->Strings[3]=8;
		RadioGroup1->Items->Strings[4]=5;
	}
		break;
	case 12:{
		Label1->Caption=IntToStr(q)+".Какой буквой следует заменить знак вопроса?";
		Image2->Picture->LoadFromFile("2.12.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="Ф";
		RadioGroup1->Items->Strings[1]="Щ";
		RadioGroup1->Items->Strings[2]="Ц";
		RadioGroup1->Items->Strings[3]="У";
		RadioGroup1->Items->Strings[4]="Х";
	}
		break;
	case 13:{
		Label1->Caption=IntToStr(q)+".Какой буквой следует заменить знак вопроса?";
		Image2->Picture->LoadFromFile("2.12.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="А";
		RadioGroup1->Items->Strings[1]="Ф";
		RadioGroup1->Items->Strings[2]="Б";
		RadioGroup1->Items->Strings[3]="В";
		RadioGroup1->Items->Strings[4]="Ю";
	}
		break;
	case 14:{
		Label1->Caption=IntToStr(q)+".	Определите название города, зашифрованного в анаграмме. В какой стране находится этот город?";
		Label2->Caption="НХЮМ НЕ";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="ФРАНЦИЯ";
		RadioGroup1->Items->Strings[1]="ГЕРМАНИЯ";
		RadioGroup1->Items->Strings[2]="США";
		RadioGroup1->Items->Strings[3]="ШВЕЙЦАРИЯ";
		RadioGroup1->Items->Strings[4]="КАНАДА";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 15:{
		Label1->Caption=IntToStr(q)+".Найдите сумму чисел вокруг каждой буквы.";
		Image2->Picture->LoadFromFile("2.15.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="А = 41   Б = 20   В = 30   Г = 28";
		RadioGroup1->Items->Strings[1]="А = 46   Б = 20   В = 32   Г = 29";
		RadioGroup1->Items->Strings[2]="А = 46   Б = 20   В = 30   Г = 28";
		RadioGroup1->Items->Strings[3]="А = 46   Б = 20   В = 30   Г = 29";
		RadioGroup1->Items->Strings[4]="А = 45   Б = 19   В = 31   Г = 29";
	}
		break;
	case 16:{
		Label1->Caption=IntToStr(q)+".Вместо многоточия добавьте такое слово, которое вместе с другими словами образует новые слова. Какую букву содержит это слово?";
		Image2->Picture->LoadFromFile("2.16.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="Л";
		RadioGroup1->Items->Strings[1]="У";
		RadioGroup1->Items->Strings[2]="Т";
		RadioGroup1->Items->Strings[3]="Д";
		RadioGroup1->Items->Strings[4]="А";
	}
		break;
	case 17:{
		Label1->Caption=IntToStr(q)+".Каким числом следует заменить знак вопроса?";
		Image2->Picture->LoadFromFile("2.17.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]=5;
		RadioGroup1->Items->Strings[1]=12;
		RadioGroup1->Items->Strings[2]=17;
		RadioGroup1->Items->Strings[3]=15;
		RadioGroup1->Items->Strings[4]=4;
	}
		break;
	case 18:{
		Label1->Caption=IntToStr(q)+".Какое слово не является анаграммой цветов?";
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="РЕНТА ХИЗАМ";
		RadioGroup1->Items->Strings[1]="РАЗ О";
		RadioGroup1->Items->Strings[2]="УДИЛА ГОЛ С";
		RadioGroup1->Items->Strings[3]="ПЕТЬ РОК МЮ";
		RadioGroup1->Items->Strings[4]="Ц НАС РИС";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 19:{
		Label1->Caption=IntToStr(q)+".Выберите рисунок, который необходимо добавить вместо знака вопроса.";
		Image2->Picture->LoadFromFile("2.19.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]=1;
		RadioGroup1->Items->Strings[1]=2;
		RadioGroup1->Items->Strings[2]=3;
		RadioGroup1->Items->Strings[3]=4;
		RadioGroup1->Items->Strings[4]=5;
	}
		break;
	case 20:{
		Label1->Caption=IntToStr(q)+".Какое слово является лишним?";
		Label2->Caption="Леденец Булка Доска Дерево Бенефис";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="Леденец";
		RadioGroup1->Items->Strings[1]="Булка";
		RadioGroup1->Items->Strings[2]="Доска";
		RadioGroup1->Items->Strings[3]="Дерево";
		RadioGroup1->Items->Strings[4]="Бенефис";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 21: {
		Timer1->Enabled = false;
		Label3->Visible=false;
		RadioGroup1->Visible=false;
		Image1->Visible=false;
		for(int i=0;i<20;i++)
		{
		if((kay[i])==ans[i])
		n++;
		}
		for(int i=0;i<40;i++)
		{
		b+=0.5;
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
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
 if(i1==0&&i2==0)
 {
 q=21;
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

