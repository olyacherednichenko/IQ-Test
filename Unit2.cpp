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
"4", "���", "�������", "11", "����", "21", "3", "�����", "6", "5",
"�", "���", "54", "11", "27", "� � �", "2","2","18","76",
"����","���","�����","�����","�","� � �","2","1","1","����",
"����","64","����","�������","�/7","����","����","1","6","1"
};
String ans[40];
float b=70, b1;


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
Label1->Caption="������� � ����������� �����";
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
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ������� ���������������.";
		Image2->Picture->LoadFromFile("1.jpg");
		Edit1->Top= 330;
	}
		break;
	case 2:{
		Label1->Caption=IntToStr(q)+
		".�������� �����, ������� ������� �� ���������� ������� ����� � ������� �������." ;
		Label2->Caption="��� ( . . . ) ��";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 3:{
		Label1->Caption=IntToStr(q)+".������ ��������� � ��������� ������ �����.";
		Label2->Caption="�������\n�����\n�������\n�����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 4:{
		Label1->Caption=IntToStr(q)+".�������� ����������� ����� ";
		Image2->Picture->LoadFromFile("4.jpg");
				Edit1->Top= 330;
	}
		break;
	case 5:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="����� (����) �����\n����� ( . . . . ) �����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 6:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����.";
		Label2->Caption="196  (25)  324\n325  (  )  137";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 7:{
		Label1->Caption=IntToStr(q)+".���������� ��� �����";
		Label2->Caption="18  10  6  4  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 8:{
		Label1->Caption=IntToStr(q)+".������ ��������� � ��������� ������ �����";
		Label2->Caption="�����\n�����\n����\n������";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 9:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ��������������� ";
		Image2->Picture->LoadFromFile("9.jpg");
				Edit1->Top= 330;
	}
		break;
	case 10:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ����� ��������������� ";
		Image2->Picture->LoadFromFile("10.jpg");
				Edit1->Top= 330;
	}
		break;
	case 11:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="�  �  �  �  �  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 12:{
		Label1->Caption=IntToStr(q)+".�������� �����, ������� ������� �� ���������� ������� ����� � ������� �������";
		Label2->Caption="ME ( . . . ) ����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 13:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Image2->Picture->LoadFromFile("13.jpg");
		Edit1->Top= 330;
	}
		break;
	case 14:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="4  9  20\n8  5  14\n10  3  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 15:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="16  (27)  43\n29  (  )  56";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 16:{
		Label1->Caption=IntToStr(q)+".�������� ����������� ����� ";
		Image2->Picture->LoadFromFile("16.jpg");
				Edit1->Top= 330;
	}
		break;
	case 17:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������� �� ��������������� ";
		Image2->Picture->LoadFromFile("17.jpg");
				Edit1->Top= 330;
	}
		break;
	case 18:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ����� ���������������";
		Image2->Picture->LoadFromFile("18.jpg");
				Edit1->Top= 330;
	}
		break;
	case 19:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="6  11  ?  27";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 20:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="12  (56)  16\n17  (  )  21";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 21:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="����� (����) �����\n����� ( . . . . ) �����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 22:{
		Label1->Caption=IntToStr(q)+".�������� �����, ������� ������� �� ���������� ������� ����� � ������� �������";
		Label2->Caption="���� ( . . . ) ��";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 23:{
		Label1->Caption=IntToStr(q)+".������ ��������� � ��������� ������ �����";
		Label2->Caption="�����\n����\n�����\n�����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 24:{
		Label1->Caption=IntToStr(q)+".�������� �����, ������� �������� �� �� ��, ��� � �����, ������� ��� ������";
		Label2->Caption="���� ( . . . . . ) ������";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 25:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="�  �  �\n�  �  �\n�  �  ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 26:{
		Label1->Caption=IntToStr(q)+".�������� ����������� ����� ";
		Image2->Picture->LoadFromFile("26.jpg");
				Edit1->Top= 330;
	}
		break;
	case 27:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ����� ��������������� ";
		Image2->Picture->LoadFromFile("27.jpg");
				Edit1->Top= 330;

	}
		break;
	case 28:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ���������������";
		Image2->Picture->LoadFromFile("28.jpg");
				Edit1->Top= 330;
	}
		break;
	case 29:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ����� ��������������� ";
		Image2->Picture->LoadFromFile("29.jpg");
				Edit1->Top= 330;
	}
		break;
	case 30:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="����� (����) �����\n����� ( . . . . ) �����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 31:{
		Label1->Caption=IntToStr(q)+".�������� �����, ������� �������� �� �� ��, ��� � �����, ������� ��� ������";
		Label2->Caption="��������� ���� ( . . . . ) �������� � �������";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 32:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="1 8 27 ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 33:{
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="����� (����) �����\n����� ( . . . . ) �����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 34: {
		Label1->Caption=IntToStr(q)+".������ ��������� � ��������� ������ �����";
		Label2->Caption="�����\n�������\n�����\n����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 35:{
		Label1->Caption=IntToStr(q)+".�������� ����������� ����� � ����������� �����";
		Label2->Caption="1 � 5 ?\n� 3 � ?";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 36: {
		Label1->Caption=IntToStr(q)+".�������� �����, ������� �������� �� �� ��, ��� � �����, ������� ��� ������.";
		Label2->Caption="����� ( . . . . ) ����� ����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 37: {
		Label1->Caption=IntToStr(q)+".�������� ����������� �����";
		Label2->Caption="����� (����) �����\n����� ( . . . . ) �����";
		Label2->Visible=true;
		Image2->Visible=false;
	}
		break;
	case 38: {
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ����� ���������������";
		Image2->Picture->LoadFromFile("38.jpg");
				Edit1->Top= 330;
	}
		break;
	case 39:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������� �� ����� ��������������� ";
		Image2->Picture->LoadFromFile("39.jpg");
				Edit1->Top= 330;
	}
		break;
	case 40:{
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ������� ��������������� ";
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
		Label1->Caption="���������:\n ���������� �������: "+IntToStr(n)+
		 "\n��� iq= "+FloatToStr(b1);
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

