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
		Label1->Caption=IntToStr(q)+".����� ������ ������� �������� ���� �������?";
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
		Label1->Caption=IntToStr(q)+".��� ����� �������� ������?" ;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="����";
		RadioGroup1->Items->Strings[1]="���";
		RadioGroup1->Items->Strings[2]="������";
		RadioGroup1->Items->Strings[3]="����";
		RadioGroup1->Items->Strings[4]="����";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 3:{
		Label1->Caption=IntToStr(q)+".����� ����� ���� �������� � ������, ����� ��������� ������ ����� � ������ ��������� �����? ��� ���������� ����� � �������?";
		Label2->Caption="���� ( . . . ) ����";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="���������";
		RadioGroup1->Items->Strings[1]="��������";
		RadioGroup1->Items->Strings[2]="������";
		RadioGroup1->Items->Strings[3]="������";
		RadioGroup1->Items->Strings[4]="������";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 4:{
		Label1->Caption=IntToStr(q)+".����� ��� ����� ������ ���� �����?";
		Label2->Caption="� � � � � � ? ?";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="�  �";
		RadioGroup1->Items->Strings[1]="�  �";
		RadioGroup1->Items->Strings[2]="�  �";
		RadioGroup1->Items->Strings[3]="�  �";
		RadioGroup1->Items->Strings[4]="�  �";
	}
		break;
	case 5:{
		Label1->Caption=IntToStr(q)+".����� ������ ������� �������� ���� �������?";
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
		Label1->Caption=IntToStr(q)+".����� ��� ���� �� ���� �������� �����������?";
		Image2->Picture->LoadFromFile("2.6.jpg");
		RadioGroup1->Top= 330;
		RadioGroup1->Items->Strings[0]="1 � 2";
		RadioGroup1->Items->Strings[1]="3 � 5";
		RadioGroup1->Items->Strings[2]="1 � 5";
		RadioGroup1->Items->Strings[3]="4 � 5";
		RadioGroup1->Items->Strings[4]="3 � 4";
		RadioGroup1->Width=500;
		RadioGroup1->Left=100;

	}
		break;
	case 7:{
		Label1->Caption=IntToStr(q)+".����� ��� ����� �������� �������������� �� ������?";
		Label2->Caption="1) ������� 2) ������� 3) ������� 4) ���������� 5) �������� 6) ��������� 7) ������� 8) ������� 9) �������";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="2 � 9";
		RadioGroup1->Items->Strings[1]="3 � 8";
		RadioGroup1->Items->Strings[2]="1 � 2";
		RadioGroup1->Items->Strings[3]="4 � 5";
		RadioGroup1->Items->Strings[4]="6 � 7";
	}
		break;
	case 8:{
		Label1->Caption=IntToStr(q)+".�������� �������, ������� ���������� �������� ������ ����� �������.";
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
		Label1->Caption=IntToStr(q)+".������ ����� ������� ������� �������� ����� �������?";
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
		Label1->Caption=IntToStr(q)+".�������� ������ ������ �� ����� ��������������� ";
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
		Label1->Caption=IntToStr(q)+".����� ������ ������� �������� ���� �������?";
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
		Label1->Caption=IntToStr(q)+".����� ������ ������� �������� ���� �������?";
		Image2->Picture->LoadFromFile("2.12.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="�";
		RadioGroup1->Items->Strings[1]="�";
		RadioGroup1->Items->Strings[2]="�";
		RadioGroup1->Items->Strings[3]="�";
		RadioGroup1->Items->Strings[4]="�";
	}
		break;
	case 13:{
		Label1->Caption=IntToStr(q)+".����� ������ ������� �������� ���� �������?";
		Image2->Picture->LoadFromFile("2.12.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="�";
		RadioGroup1->Items->Strings[1]="�";
		RadioGroup1->Items->Strings[2]="�";
		RadioGroup1->Items->Strings[3]="�";
		RadioGroup1->Items->Strings[4]="�";
	}
		break;
	case 14:{
		Label1->Caption=IntToStr(q)+".	���������� �������� ������, �������������� � ���������. � ����� ������ ��������� ���� �����?";
		Label2->Caption="���� ��";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="�������";
		RadioGroup1->Items->Strings[1]="��������";
		RadioGroup1->Items->Strings[2]="���";
		RadioGroup1->Items->Strings[3]="���������";
		RadioGroup1->Items->Strings[4]="������";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 15:{
		Label1->Caption=IntToStr(q)+".������� ����� ����� ������ ������ �����.";
		Image2->Picture->LoadFromFile("2.15.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="� = 41   � = 20   � = 30   � = 28";
		RadioGroup1->Items->Strings[1]="� = 46   � = 20   � = 32   � = 29";
		RadioGroup1->Items->Strings[2]="� = 46   � = 20   � = 30   � = 28";
		RadioGroup1->Items->Strings[3]="� = 46   � = 20   � = 30   � = 29";
		RadioGroup1->Items->Strings[4]="� = 45   � = 19   � = 31   � = 29";
	}
		break;
	case 16:{
		Label1->Caption=IntToStr(q)+".������ ���������� �������� ����� �����, ������� ������ � ������� ������� �������� ����� �����. ����� ����� �������� ��� �����?";
		Image2->Picture->LoadFromFile("2.16.jpg");
		RadioGroup1->Top=330;
		RadioGroup1->Items->Strings[0]="�";
		RadioGroup1->Items->Strings[1]="�";
		RadioGroup1->Items->Strings[2]="�";
		RadioGroup1->Items->Strings[3]="�";
		RadioGroup1->Items->Strings[4]="�";
	}
		break;
	case 17:{
		Label1->Caption=IntToStr(q)+".����� ������ ������� �������� ���� �������?";
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
		Label1->Caption=IntToStr(q)+".����� ����� �� �������� ���������� ������?";
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="����� �����";
		RadioGroup1->Items->Strings[1]="��� �";
		RadioGroup1->Items->Strings[2]="����� ��� �";
		RadioGroup1->Items->Strings[3]="���� ��� ��";
		RadioGroup1->Items->Strings[4]="� ��� ���";
		RadioGroup1->Width=700;
		RadioGroup1->Left=10;
	}
		break;
	case 19:{
		Label1->Caption=IntToStr(q)+".�������� �������, ������� ���������� �������� ������ ����� �������.";
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
		Label1->Caption=IntToStr(q)+".����� ����� �������� ������?";
		Label2->Caption="������� ����� ����� ������ �������";
		Label2->Visible=true;
		Image2->Visible=false;
		RadioGroup1->Items->Strings[0]="�������";
		RadioGroup1->Items->Strings[1]="�����";
		RadioGroup1->Items->Strings[2]="�����";
		RadioGroup1->Items->Strings[3]="������";
		RadioGroup1->Items->Strings[4]="�������";
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

