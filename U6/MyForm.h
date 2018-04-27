#include <string>
#include "User.h"
#include "Blocker.h"
#include "Timer.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
namespace WebBlock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^  start;
	private: System::Windows::Forms::Panel^  registration;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Panel^  login;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  messege;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  blocking;


	private: System::Windows::Forms::Button^  button8;


	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;






	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;




	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::Windows::Forms::Panel^  choose;














































	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  leisti;
	private: System::Windows::Forms::Button^  atgal;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  prisijungimopirmm;
	private: System::Windows::Forms::Button^  registracijosm;
private: System::Windows::Forms::Panel^  atblokuoti;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Button^  atblokavimom;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::Button^  regback;
private: System::Windows::Forms::Button^  loginback;
private: System::Windows::Forms::Button^  atblBack;
private: System::Windows::Forms::Button^  blckBack;
private: System::Windows::Forms::Panel^  info;

private: System::Windows::Forms::Button^  infoBack;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;








	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->start = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->prisijungimopirmm = (gcnew System::Windows::Forms::Button());
			this->registracijosm = (gcnew System::Windows::Forms::Button());
			this->registration = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->regback = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->loginback = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->messege = (gcnew System::Windows::Forms::Panel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->leisti = (gcnew System::Windows::Forms::Button());
			this->atgal = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->blocking = (gcnew System::Windows::Forms::Panel());
			this->blckBack = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->choose = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->atblokuoti = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->atblBack = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->atblokavimom = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Panel());
			this->infoBack = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->start->SuspendLayout();
			this->registration->SuspendLayout();
			this->login->SuspendLayout();
			this->messege->SuspendLayout();
			this->blocking->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->choose->SuspendLayout();
			this->atblokuoti->SuspendLayout();
			this->info->SuspendLayout();
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->Controls->Add(this->label1);
			this->start->Controls->Add(this->prisijungimopirmm);
			this->start->Controls->Add(this->registracijosm);
			this->start->Location = System::Drawing::Point(0, 0);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(378, 397);
			this->start->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Sveiki atvykæ á tinklapio blokatoriø!";
			// 
			// prisijungimopirmm
			// 
			this->prisijungimopirmm->Location = System::Drawing::Point(211, 178);
			this->prisijungimopirmm->Name = L"prisijungimopirmm";
			this->prisijungimopirmm->Size = System::Drawing::Size(114, 74);
			this->prisijungimopirmm->TabIndex = 1;
			this->prisijungimopirmm->Text = L"Prisijungti";
			this->prisijungimopirmm->UseVisualStyleBackColor = true;
			this->prisijungimopirmm->Click += gcnew System::EventHandler(this, &MyForm::prisijungimopirmm_Click);
			// 
			// registracijosm
			// 
			this->registracijosm->Location = System::Drawing::Point(47, 178);
			this->registracijosm->Name = L"registracijosm";
			this->registracijosm->Size = System::Drawing::Size(114, 74);
			this->registracijosm->TabIndex = 0;
			this->registracijosm->Text = L"Registruotis";
			this->registracijosm->UseVisualStyleBackColor = true;
			this->registracijosm->Click += gcnew System::EventHandler(this, &MyForm::registracijosm_Click);
			// 
			// registration
			// 
			this->registration->Controls->Add(this->label25);
			this->registration->Controls->Add(this->label21);
			this->registration->Controls->Add(this->label20);
			this->registration->Controls->Add(this->label19);
			this->registration->Controls->Add(this->label17);
			this->registration->Controls->Add(this->label13);
			this->registration->Controls->Add(this->regback);
			this->registration->Controls->Add(this->textBox7);
			this->registration->Controls->Add(this->label6);
			this->registration->Controls->Add(this->label5);
			this->registration->Controls->Add(this->label2);
			this->registration->Controls->Add(this->label9);
			this->registration->Controls->Add(this->label4);
			this->registration->Controls->Add(this->label3);
			this->registration->Controls->Add(this->button3);
			this->registration->Controls->Add(this->textBox4);
			this->registration->Controls->Add(this->textBox3);
			this->registration->Controls->Add(this->textBox2);
			this->registration->Controls->Add(this->textBox1);
			this->registration->Location = System::Drawing::Point(0, 0);
			this->registration->Name = L"registration";
			this->registration->Size = System::Drawing::Size(381, 401);
			this->registration->TabIndex = 4;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(9, 209);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(196, 13);
			this->label25->TabIndex = 19;
			this->label25->Text = L"Toks prisijungimo vardas jau egzistuoja!!";
			this->label25->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(180, 331);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(124, 13);
			this->label21->TabIndex = 18;
			this->label21->Text = L"Slaptaþodþiai nesutampa";
			this->label21->Visible = false;
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(117, 272);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(187, 13);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Slaptaþodá turi sudaryti bent 5 simboliai";
			this->label20->Visible = false;
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(9, 194);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(184, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Prisijungimo vardas negali bûti tuðèias";
			this->label19->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(89, 134);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(215, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Pavardë turi prasidëti didþiaja ir nebûti tuðèia";
			this->label17->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(94, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(213, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Vardas turi prasidëti didþiaja ir nebûti tuðèias";
			this->label13->Visible = false;
			// 
			// regback
			// 
			this->regback->Location = System::Drawing::Point(77, 347);
			this->regback->Name = L"regback";
			this->regback->Size = System::Drawing::Size(127, 45);
			this->regback->TabIndex = 13;
			this->regback->Text = L"Atgal";
			this->regback->UseVisualStyleBackColor = true;
			this->regback->Click += gcnew System::EventHandler(this, &MyForm::regback_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(15, 59);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(292, 20);
			this->textBox7->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Pakartokite slaptaþodá";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Slaptaþodis";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(127, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Áveskite savo duomenis";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Pavardë";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Prisijungimo vardas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Vardas";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(239, 348);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 45);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Registruotis";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 307);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->UseSystemPasswordChar = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 174);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 20);
			this->textBox1->TabIndex = 1;
			// 
			// login
			// 
			this->login->Controls->Add(this->label23);
			this->login->Controls->Add(this->loginback);
			this->login->Controls->Add(this->textBox6);
			this->login->Controls->Add(this->textBox5);
			this->login->Controls->Add(this->label8);
			this->login->Controls->Add(this->label7);
			this->login->Controls->Add(this->button4);
			this->login->Location = System::Drawing::Point(0, 0);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(378, 398);
			this->login->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(185, 210);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(137, 13);
			this->label23->TabIndex = 6;
			this->label23->Text = L"Neteisingai ávesti duomenys";
			this->label23->Visible = false;
			// 
			// loginback
			// 
			this->loginback->Location = System::Drawing::Point(86, 256);
			this->loginback->Name = L"loginback";
			this->loginback->Size = System::Drawing::Size(111, 58);
			this->loginback->TabIndex = 5;
			this->loginback->Text = L"Atgal";
			this->loginback->UseVisualStyleBackColor = true;
			this->loginback->Click += gcnew System::EventHandler(this, &MyForm::loginback_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(36, 174);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(283, 20);
			this->textBox6->TabIndex = 4;
			this->textBox6->UseSystemPasswordChar = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(36, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(283, 20);
			this->textBox5->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Slaptaþodis";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Prisijungimo vardas";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(208, 255);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 58);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Prisijungti";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// messege
			// 
			this->messege->Controls->Add(this->checkBox2);
			this->messege->Controls->Add(this->leisti);
			this->messege->Controls->Add(this->atgal);
			this->messege->Controls->Add(this->label22);
			this->messege->Location = System::Drawing::Point(0, 0);
			this->messege->Name = L"messege";
			this->messege->Size = System::Drawing::Size(378, 397);
			this->messege->TabIndex = 13;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(33, 153);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(327, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Sutinku, kad  progama neleis atblokuoti tinklapio pasirinktà laikà";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// leisti
			// 
			this->leisti->Location = System::Drawing::Point(138, 187);
			this->leisti->Name = L"leisti";
			this->leisti->Size = System::Drawing::Size(84, 20);
			this->leisti->TabIndex = 5;
			this->leisti->Text = L"Blokuoti";
			this->leisti->UseVisualStyleBackColor = true;
			this->leisti->Click += gcnew System::EventHandler(this, &MyForm::leisti_Click);
			// 
			// atgal
			// 
			this->atgal->Location = System::Drawing::Point(138, 225);
			this->atgal->Name = L"atgal";
			this->atgal->Size = System::Drawing::Size(84, 20);
			this->atgal->TabIndex = 4;
			this->atgal->Text = L"Griþti atgal";
			this->atgal->UseVisualStyleBackColor = true;
			this->atgal->Click += gcnew System::EventHandler(this, &MyForm::atgal_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(30, 95);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 13);
			this->label22->TabIndex = 3;
			this->label22->Text = L"BLOKUOJAMA";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(109, 181);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(143, 92);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Perþiûrëti savo informacijà";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(206, 59);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(143, 92);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Atblokuoti tinklapá";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 59);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 92);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Uþblokuoti tinklapá";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// blocking
			// 
			this->blocking->Controls->Add(this->blckBack);
			this->blocking->Controls->Add(this->checkBox1);
			this->blocking->Controls->Add(this->label18);
			this->blocking->Controls->Add(this->label16);
			this->blocking->Controls->Add(this->label15);
			this->blocking->Controls->Add(this->label14);
			this->blocking->Controls->Add(this->numericUpDown8);
			this->blocking->Controls->Add(this->numericUpDown7);
			this->blocking->Controls->Add(this->numericUpDown5);
			this->blocking->Controls->Add(this->textBox8);
			this->blocking->Controls->Add(this->label10);
			this->blocking->Controls->Add(this->button8);
			this->blocking->Location = System::Drawing::Point(0, 0);
			this->blocking->Name = L"blocking";
			this->blocking->Size = System::Drawing::Size(377, 408);
			this->blocking->TabIndex = 14;
			// 
			// blckBack
			// 
			this->blckBack->Location = System::Drawing::Point(129, 256);
			this->blckBack->Name = L"blckBack";
			this->blckBack->Size = System::Drawing::Size(93, 46);
			this->blckBack->TabIndex = 25;
			this->blckBack->Text = L"Atgal";
			this->blckBack->UseVisualStyleBackColor = true;
			this->blckBack->Click += gcnew System::EventHandler(this, &MyForm::blckBack_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(33, 167);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(101, 17);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"Neribotam laikui";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(33, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(199, 13);
			this->label18->TabIndex = 23;
			this->label18->Text = L"Nurodykite kuriam laikui norite uþblokuoti";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(301, 195);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"sec";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(203, 197);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"min";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(106, 194);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"h";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(228, 193);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(67, 20);
			this->numericUpDown8->TabIndex = 15;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(130, 193);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(67, 20);
			this->numericUpDown7->TabIndex = 14;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(33, 193);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(67, 20);
			this->numericUpDown5->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(33, 88);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(123, 20);
			this->textBox8->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(33, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L" Áveskite tinklapio adresà";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(232, 256);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 46);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Blokuoti";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// choose
			// 
			this->choose->Controls->Add(this->button1);
			this->choose->Controls->Add(this->button7);
			this->choose->Controls->Add(this->button6);
			this->choose->Controls->Add(this->button5);
			this->choose->Location = System::Drawing::Point(0, 0);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(371, 392);
			this->choose->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(239, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Atsijungti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// atblokuoti
			// 
			this->atblokuoti->Controls->Add(this->label24);
			this->atblokuoti->Controls->Add(this->atblBack);
			this->atblokuoti->Controls->Add(this->textBox9);
			this->atblokuoti->Controls->Add(this->label11);
			this->atblokuoti->Controls->Add(this->atblokavimom);
			this->atblokuoti->Location = System::Drawing::Point(0, 0);
			this->atblokuoti->Name = L"atblokuoti";
			this->atblokuoti->Size = System::Drawing::Size(374, 397);
			this->atblokuoti->TabIndex = 3;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(37, 216);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(156, 13);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Toks tinklapis nëra uþblokuotas";
			this->label24->Visible = false;
			// 
			// atblBack
			// 
			this->atblBack->Location = System::Drawing::Point(141, 255);
			this->atblBack->Name = L"atblBack";
			this->atblBack->Size = System::Drawing::Size(85, 46);
			this->atblBack->TabIndex = 3;
			this->atblBack->Text = L"Atgal";
			this->atblBack->UseVisualStyleBackColor = true;
			this->atblBack->Click += gcnew System::EventHandler(this, &MyForm::atblBack_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(40, 181);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(226, 20);
			this->textBox9->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(41, 138);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(222, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Áveskite tinklapio, kurá norite atblokuoti adresà";
			// 
			// atblokavimom
			// 
			this->atblokavimom->Location = System::Drawing::Point(237, 255);
			this->atblokavimom->Name = L"atblokavimom";
			this->atblokavimom->Size = System::Drawing::Size(85, 46);
			this->atblokavimom->TabIndex = 0;
			this->atblokavimom->Text = L"Atblokuoti";
			this->atblokavimom->UseVisualStyleBackColor = true;
			this->atblokavimom->Click += gcnew System::EventHandler(this, &MyForm::atblokavimom_Click);
			// 
			// info
			// 
			this->info->Controls->Add(this->infoBack);
			this->info->Controls->Add(this->richTextBox1);
			this->info->Controls->Add(this->label12);
			this->info->Location = System::Drawing::Point(0, 0);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(372, 393);
			this->info->TabIndex = 3;
			// 
			// infoBack
			// 
			this->infoBack->Location = System::Drawing::Point(223, 334);
			this->infoBack->Name = L"infoBack";
			this->infoBack->Size = System::Drawing::Size(101, 44);
			this->infoBack->TabIndex = 2;
			this->infoBack->Text = L"Atgal";
			this->infoBack->UseVisualStyleBackColor = true;
			this->infoBack->Click += gcnew System::EventHandler(this, &MyForm::infoBack_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(16, 33);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(316, 295);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(188, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Informacija apie uþblokuotus tinklapius";
			// 
			// MyForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Dialog;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 401);
			this->Controls->Add(this->start);
			this->Controls->Add(this->registration);
			this->Controls->Add(this->login);
			this->Controls->Add(this->choose);
			this->Controls->Add(this->blocking);
			this->Controls->Add(this->messege);
			this->Controls->Add(this->atblokuoti);
			this->Controls->Add(this->info);
			this->Name = L"MyForm";
			this->Text = L"WebBlocker";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->start->ResumeLayout(false);
			this->start->PerformLayout();
			this->registration->ResumeLayout(false);
			this->registration->PerformLayout();
			this->login->ResumeLayout(false);
			this->login->PerformLayout();
			this->messege->ResumeLayout(false);
			this->messege->PerformLayout();
			this->blocking->ResumeLayout(false);
			this->blocking->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->choose->ResumeLayout(false);
			this->atblokuoti->ResumeLayout(false);
			this->atblokuoti->PerformLayout();
			this->info->ResumeLayout(false);
			this->info->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->start->Visible = false;
		this->registration->Visible = true;
	}
			 void StringTostring(String ^ s, string & os)
			 {
				 using namespace Runtime::InteropServices;
				 const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		string name, surname, login, password, password2, flogin, fempty;
		bool correct;
		StringTostring(textBox7->Text, name); //13
		StringTostring(textBox3->Text, surname);//17
		StringTostring(textBox1->Text, login); //19
		StringTostring(textBox2->Text, password);//20
		StringTostring(textBox4->Text, password2);//21
		if ((name.length() == 0) || !(isupper(name[0]))) {
			this->label13->Visible = true;
		} else this->label13->Visible = false;
		if ((surname.length() == 0) || !(isupper(surname[0]))) {
			this->label17->Visible = true;
		}
		else this->label17->Visible = false;
		if (login.length() == 0) {
			this->label19->Visible = true;
		}else this->label19->Visible = false;
		//patikrint ar nesikartoja prisijungimo vardas.
		ifstream file("usersdatabase.txt");
		while (file) {
			getline(file, flogin, ';');
			getline(file, fempty);		
			if (flogin == login) {
				this->label25->Visible = true;
				correct = false;
				file.close();
				break;
			}
			else {
				correct = true;
				this->label25->Visible = false;
			}
		}
		file.close();
		if (password.length() < 5) {
			this->label20->Visible = true;
		} else this->label20->Visible = false;
		if (password != password2) {
			this->label21->Visible = true;
		}
		else this->label21->Visible = false;
		fstream myfile;
		myfile.open("usersdatabase.txt", fstream::in | fstream::out | fstream::app);
		if (!myfile) {
			//create file if not exists
			myfile.open("usersdatabase.txt", fstream::in | fstream::out | fstream::app);
			myfile.close();
		}
		if((name.length() != 0) && (isupper(name[0])) && (surname.length() != 0) && (isupper(surname[0])) && (login.length() != 0) && (password.length() >= 5) && (password == password2) && (correct == true)){
			Project::User *user = new Project::User(login, name, surname, password);
			ofstream myfile;
			myfile.open("usersdatabase.txt", std::ios::app);
			myfile << user->toString();
			myfile.close();
			delete user;
			this->info->Visible = false;
			this->registration->Visible = false;
			this->start->Visible = true;
			this->label25->Visible = false;
			this->textBox7->Text = "";
			this->textBox3->Text = "";
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox4->Text = "";

		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->start->Visible = false;
		this->registration->Visible = false;
		this->info->Visible = false;
		this->login->Visible = true;
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox1->Checked == true) {
			this->numericUpDown5->Visible = false;
			this->numericUpDown7->Visible = false;
			this->numericUpDown8->Visible = false;
			this->label14->Visible = false;
			this->label15->Visible = false;
			this->label16->Visible = false;
		}
		if (this->checkBox1->Checked == false) {
			this->numericUpDown5->Visible = true;
			this->numericUpDown7->Visible = true;
			this->numericUpDown8->Visible = true;
			this->label14->Visible = true;
			this->label15->Visible = true;
			this->label16->Visible = true;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox2->Checked == false) {
			this->leisti->Visible = false;
			this->atgal->Visible = true;
		}
		if (this->checkBox2->Checked == true) {
			this->atgal->Visible = false;
			this->leisti->Visible = true;
		}
	}

	private: System::Void leisti_Click(System::Object^  sender, System::EventArgs^  e) {
		string webpage;
		clock_t h, min, sec;
		StringTostring(textBox8->Text, webpage);
		h = clock_t::Parse(this->numericUpDown5->Text);
		min = clock_t::Parse(this->numericUpDown7->Text);
		sec = clock_t::Parse(this->numericUpDown8->Text);
		Project::Timer *t = new Project::Timer(h,min,sec);
		Project::WebPage *w = new Project::WebPage(webpage,t);
		Project::Blocker b(w);
		this->label22->Text = "TINKLAPIS ATBLOKUOTAS. BLOKAVIMAS BAIGTAS.";
		this->atgal->Visible = true;
		this->leisti->Visible = false;
		this->checkBox2->Visible = false;
		//istrinti visus is blockpaneles
		//pakeisti texta
		this->checkBox1->Checked = false;
		this->textBox8->Text = "";
		this->numericUpDown5->Value = 0;
		this->numericUpDown7->Value = 0;
		this->numericUpDown8->Value = 1;
	}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->checkBox1->Checked == true){
		string webpage, login, tofile;
		StringTostring(textBox5->Text, login);
		StringTostring(textBox8->Text, webpage);
		this->blocking->Visible = false;
		this->messege->Visible = false;
		this->start->Visible = false;
		this->login->Visible = false;
		this->info->Visible = false;
		this->registration->Visible = false;
		this->choose->Visible = true;
		Project::WebPage *w = new Project::WebPage(webpage);
		Project::Blocker block(w);
		tofile = "|" + login + "," + webpage + ";";
		fstream myfile;
		myfile.open("webdatabase.txt", fstream::in | fstream::out | fstream::app);
		if (!myfile){
			//create file if not exists
			myfile.open("webdatabase.txt", fstream::in | fstream::out | fstream::app);
			myfile.close();
		}
		w->writingToFile(tofile, "webdatabase.txt");
		//istrint is paneles
		this->checkBox1->Checked = false;
		this->textBox8->Text = "";
		this->numericUpDown5->Value = 0;
		this->numericUpDown7->Value = 0;
		this->numericUpDown8->Value = 1;

	}
	else {
		this->blocking->Visible = false;
		this->choose->Visible = false;
		this->start->Visible = false;
		this->info->Visible = false;
		this->login->Visible = false;
		this->registration->Visible = false;
		this->messege->Visible = true;
	}
	
}
		 
		 //login patvirtinimas
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->messege->Visible = false;
	this->info->Visible = false;
	this->registration->Visible = false;
	string flogin, fpassword, login, password,empty;

	StringTostring(this->textBox5->Text, login);
	StringTostring(this->textBox6->Text, password);
	ifstream file("usersdatabase.txt");
	while (file) {
		getline(file, flogin, ';'); // use ; as delimiter
		getline(file, fpassword, ';');
		getline(file, empty);// use line end as delimiter			
		if (flogin == login && fpassword == password) {
			this->login->Visible = false;
			this->choose->Visible = true;
			file.close();
			break;
		}
		else {
			this->login->Visible = true;
			this->label23->Visible = true;
		}
	}
	file.close();
	}
	
	void loadText(){
		string flogin, login, login1, web, whole, sum, empty, empty2;
		StringTostring(this->textBox5->Text, login);
		login1 = "|" + login;
		ifstream file("webdatabase.txt");
		while (file) {
			getline(file, flogin, ','); // use ; as delimiter
			getline(file, web, ';');
			getline(file, empty2, '\n');
			getline(file, empty, '|');
				if (flogin == login || flogin == login1) {
					sum = login + " | " + web + "\n";
					whole = whole + sum;
					flogin = " ";
			}
		}
		file.close();
		String^ str = gcnew String(whole.c_str());
		
		this->richTextBox1->Text = str;
	}
		

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->choose->Visible = false;
	this->start->Visible = false;
	this->info->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->login->Visible = false;
	this->choose->Visible = false;
	this->atblokuoti->Visible = false;
	this->blocking->Visible = true;

}

private: System::Void registracijosm_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->choose->Visible = false;
	this->start->Visible = false;
	this->registration->Visible = true;
	this->info->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->login->Visible = false;
}
private: System::Void prisijungimopirmm_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->choose->Visible = false;
	this->start->Visible = false;
	this->registration->Visible = false;
	this->info->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->login->Visible = true;
}
private: System::Void atgal_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->choose->Visible = false;
	this->start->Visible = false;
	this->login->Visible = false;
	this->info->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = true;
	this->checkBox1->Checked = false;
	this->textBox8->Text = "";
	this->numericUpDown5->Value = 0;
	this->numericUpDown7->Value = 0;
	this->numericUpDown8->Value = 1;
	this->checkBox2->Checked = false;
	this->checkBox2->Visible = true;
	this->atgal->Visible = true;
	this->leisti->Visible = true;
	this->label22->Text = "BLOKUOJAMA";
}
private: System::Void atblokavimom_Click(System::Object^  sender, System::EventArgs^  e) {
	string webpage, login,  inone;
	StringTostring(this->textBox9->Text, webpage);
	StringTostring(this->textBox5->Text, login);
	inone = login + "," + webpage;
	Project::WebPage *w = new Project::WebPage(webpage);
	int lineHosts = w->returnLine("C:\\Windows\\System32\\drivers\\etc\\hosts", webpage);	
	if (lineHosts == 0) {
		this->label24->Visible = true;
	}
	else {	
		int line = w->returnLine("webdatabase.txt", inone);
		if (line !=0 ){
			w->deleteLines("webdatabase.txt", line);
		}
		std::string file = "C:\\Windows\\System32\\drivers\\etc\\hosts";
		w->deleteLines(file, w->returnLine(file, w->getWebpage()));
		delete w;
		this->blocking->Visible = false;
		this->start->Visible = false;
		this->login->Visible = false;
		this->registration->Visible = false;
		this->messege->Visible = false;
		this->info->Visible = false;
		this->blocking->Visible = false;
		this->atblokuoti->Visible = false;
		this->choose->Visible = true;
		this->textBox9->Text = "";
		this->label24->Visible = false;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->choose->Visible = false;
	this->start->Visible = false;
	this->info->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = true;
}
private: System::Void regback_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->choose->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->info->Visible = false;
	this->start->Visible = true;
	this->label25->Visible = false;
	this->textBox7->Text = "";
	this->textBox3->Text = "";
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox4->Text = "";
	this->label13->Visible = false;
	this->label17->Visible = false;
	this->label19->Visible = false;
	this->label21->Visible = false;
	this->label20->Visible = false;
	this->label25->Visible = false;
	

}
private: System::Void loginback_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->choose->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->info->Visible = false;
	this->start->Visible = true;
	this->label23->Visible = false;
	this->textBox5->Text = "";
	this->textBox6->Text = "";
}
private: System::Void atblBack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->start->Visible = false;
	this->info->Visible = false;
	this->choose->Visible = true;
	this->textBox9->Text = "";
	this->label24->Visible = false;
	//tr
}
private: System::Void blckBack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->start->Visible = false;
	this->info->Visible = false;
	this->choose->Visible = true;
	this->checkBox1->Checked = false;
	this->textBox8->Text = "";
	this->numericUpDown5->Value = 0;
	this->numericUpDown7->Value = 0;
	this->numericUpDown8->Value = 1;
}
private: System::Void infoBack_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->login->Visible = false;
	this->info->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->start->Visible = false;
	this->choose->Visible = true;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->start->Visible = false;
	this->choose->Visible = false;
	this->info->Visible = true;
	loadText(); //info ikelimas is failo
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->blocking->Visible = false;
	this->login->Visible = false;
	this->registration->Visible = false;
	this->messege->Visible = false;
	this->blocking->Visible = false;
	this->atblokuoti->Visible = false;
	this->choose->Visible = false;
	this->info->Visible = false;
	this->start->Visible = true;
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->label23->Visible = false;
}
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
