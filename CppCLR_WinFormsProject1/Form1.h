#pragma once
// https://github.com/Alsweider

double rp = 0;
double la = 0;
double ausdauerkategorie = 0; //Lagerström
double fitnesskategorie = 0; //Lagerström
double trainingsart = 0; //Karvonen





namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Text = "Pulsrechner (v0.1.0)";
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ berechnen;
	private: System::Windows::Forms::TextBox^ textBoxRuhepuls;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBoxLebensalter;


	private: System::Windows::Forms::Label^ Einführung;	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ labelErgebnis;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ beenden;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ herz;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabLagerstrom;
	private: System::Windows::Forms::TabPage^ tabKarvonen;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;












	private: System::ComponentModel::IContainer^ components;

	


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
			this->components = (gcnew System::ComponentModel::Container());
			this->berechnen = (gcnew System::Windows::Forms::Button());
			this->textBoxRuhepuls = (gcnew System::Windows::Forms::TextBox());
			this->Einführung = (gcnew System::Windows::Forms::Label());
			this->textBoxLebensalter = (gcnew System::Windows::Forms::TextBox());
			this->labelErgebnis = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->beenden = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->herz = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabLagerstrom = (gcnew System::Windows::Forms::TabPage());
			this->tabKarvonen = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabLagerstrom->SuspendLayout();
			this->tabKarvonen->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// berechnen
			// 
			this->berechnen->BackColor = System::Drawing::Color::Gainsboro;
			this->berechnen->Font = (gcnew System::Drawing::Font(L"Carolingia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->berechnen->Location = System::Drawing::Point(6, 312);
			this->berechnen->Name = L"berechnen";
			this->berechnen->Size = System::Drawing::Size(101, 36);
			this->berechnen->TabIndex = 9;
			this->berechnen->Text = L"Berechnen";
			this->toolTip1->SetToolTip(this->berechnen, L"Berechnung der Trainings-Herzfrequenz starten");
			this->berechnen->UseCompatibleTextRendering = true;
			this->berechnen->UseVisualStyleBackColor = false;
			this->berechnen->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBoxRuhepuls
			// 
			this->textBoxRuhepuls->Location = System::Drawing::Point(6, 64);
			this->textBoxRuhepuls->Name = L"textBoxRuhepuls";
			this->textBoxRuhepuls->Size = System::Drawing::Size(55, 20);
			this->textBoxRuhepuls->TabIndex = 2;
			this->textBoxRuhepuls->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// Einführung
			// 
			this->Einführung->AccessibleDescription = L"Beschreibung";
			this->Einführung->AccessibleName = L"Name davon";
			this->Einführung->AccessibleRole = System::Windows::Forms::AccessibleRole::ToolTip;
			this->Einführung->AutoSize = true;
			this->Einführung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Einführung->Location = System::Drawing::Point(6, 3);
			this->Einführung->Name = L"Einführung";
			this->Einführung->Size = System::Drawing::Size(272, 32);
			this->Einführung->TabIndex = 0;
			this->Einführung->Text = L"Ausdauerpuls-Berechnung nach Lagerstrøm.\r\nBitte geben Sie Ihre Daten ein.";
			this->toolTip1->SetToolTip(this->Einführung, L"Dr. Dieter Lagerstrøm hat eine Formel entwickelt, um den optimalen Puls \r\nfür das"
				L" Ausdauertraining zu ermitteln. Das Ergebnis ist ein Richtwert, \r\nder in der Rea"
				L"lität abweichend ausfallen kann.");
			this->Einführung->Click += gcnew System::EventHandler(this, &Form1::Einführung_Click);
			// 
			// textBoxLebensalter
			// 
			this->textBoxLebensalter->Location = System::Drawing::Point(6, 107);
			this->textBoxLebensalter->Name = L"textBoxLebensalter";
			this->textBoxLebensalter->Size = System::Drawing::Size(55, 20);
			this->textBoxLebensalter->TabIndex = 4;
			this->textBoxLebensalter->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// labelErgebnis
			// 
			this->labelErgebnis->AutoSize = true;
			this->labelErgebnis->BackColor = System::Drawing::Color::Yellow;
			this->labelErgebnis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelErgebnis->Location = System::Drawing::Point(126, 14);
			this->labelErgebnis->Name = L"labelErgebnis";
			this->labelErgebnis->Size = System::Drawing::Size(128, 20);
			this->labelErgebnis->TabIndex = 1;
			this->labelErgebnis->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->labelErgebnis, L"Ergebnis der Berechnung");
			this->labelErgebnis->UseCompatibleTextRendering = true;
			this->labelErgebnis->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ruhepuls:";
			this->toolTip1->SetToolTip(this->label3, L"Ruhepuls im entspannten Zustand messen, etwa morgens vor dem Aufstehen.");
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Alter:";
			this->toolTip1->SetToolTip(this->label4, L"Lebensalter in Jahren");
			// 
			// beenden
			// 
			this->beenden->BackColor = System::Drawing::Color::Gainsboro;
			this->beenden->Font = (gcnew System::Drawing::Font(L"Carolingia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->beenden->Location = System::Drawing::Point(113, 312);
			this->beenden->Name = L"beenden";
			this->beenden->Size = System::Drawing::Size(101, 36);
			this->beenden->TabIndex = 10;
			this->beenden->Text = L"Beenden";
			this->toolTip1->SetToolTip(this->beenden, L"Programm beenden");
			this->beenden->UseVisualStyleBackColor = false;
			this->beenden->Click += gcnew System::EventHandler(this, &Form1::beenden_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(5, 47);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(207, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Kraftausdauertraining (intensiv)";
			this->toolTip1->SetToolTip(this->radioButton1, L"Kraftausdauersport wie Rudern und Radfahren mit hoher Belastung und geringerer Tr"
				L"ainingsdauer. Faktor: 3/4");
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(5, 24);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(226, 20);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"reines Ausdauertraining (extensiv)";
			this->toolTip1->SetToolTip(this->radioButton2, L"Reiner Ausdauersport wie Gehen, Laufen oder Schwimmen mit geringer Belastungsinte"
				L"nsität und hoher Trainingsdauer. Faktor: 2/3");
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(74, 48);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 79);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sportkategorie";
			this->toolTip1->SetToolTip(this->groupBox1, L"Die anzustrebende Herzfrequenz beim Langzeitausdauertraining unterscheidet\r\nsich "
				L"von der optimalen Herzfrequenz beim Kraftausdauertraining.");
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(6, 134);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 100);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Fitnesskategorie";
			this->toolTip1->SetToolTip(this->groupBox2, L"Eigenes Leistungsniveau nach Selbsteinschätzung.\r\nSetzt einen Faktor von 0,55 (vö"
				L"llig untrainiert) bis 0,75\r\n(Hochleistungssportler) in die Formel ein.");
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(8, 43);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(133, 20);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"3. Amateursportler";
			this->toolTip1->SetToolTip(this->radioButton7, L"Faktor: 0,65");
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(8, 66);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(168, 20);
			this->radioButton6->TabIndex = 4;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"5. Hochleistungssportler";
			this->toolTip1->SetToolTip(this->radioButton6, L"Faktor: 0,75");
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(150, 43);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(140, 20);
			this->radioButton5->TabIndex = 3;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"4. Leistungssportler";
			this->toolTip1->SetToolTip(this->radioButton5, L"Faktor: 0,7");
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(150, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(132, 20);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"2. normal sportlich";
			this->toolTip1->SetToolTip(this->radioButton4, L"Faktor: 0,6");
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(8, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(130, 20);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"1. völlig untrainiert";
			this->toolTip1->SetToolTip(this->radioButton3, L"Faktor: 0,55");
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Trainingspuls:";
			this->toolTip1->SetToolTip(this->label1, L"Herzfrequenz, die ein effizientes Ausdauertraining ermöglicht,\r\num Übertraining u"
				L"nd Unterforderung zu vermeiden.");
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// toolTip1
			// 
			this->toolTip1->AutoPopDelay = 10000;
			this->toolTip1->InitialDelay = 500;
			this->toolTip1->ReshowDelay = 100;
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTip1_Popup);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"(Cursor auf Elementen positionieren für Beschreibungen.)";
			this->toolTip1->SetToolTip(this->label2, L"Maus auf den Überschriften stehen lassen um Erklärungen zu lesen.");
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Formel: Ruhepuls + (220 - Ausdauersportkategorie \r\n* Lebensalter - Ruhepuls) * Fi"
				L"tnesskategorie\r\n";
			this->toolTip1->SetToolTip(this->label5, L"Formel nach Dieter Lagerstrøm");
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// herz
			// 
			this->herz->AutoSize = true;
			this->herz->Enabled = false;
			this->herz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->herz->ForeColor = System::Drawing::Color::Crimson;
			this->herz->Location = System::Drawing::Point(174, 12);
			this->herz->Name = L"herz";
			this->herz->Size = System::Drawing::Size(32, 22);
			this->herz->TabIndex = 2;
			this->herz->Text = L"♥";
			this->toolTip1->SetToolTip(this->herz, L"Herzfrequenz (Schläge pro Minute)");
			this->herz->Visible = false;
			this->herz->Click += gcnew System::EventHandler(this, &Form1::herz_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Ruhepuls:";
			this->toolTip1->SetToolTip(this->label6, L"Ruhepuls im entspannten Zustand messen, etwa morgens vor dem Aufstehen.");
			// 
			// label7
			// 
			this->label7->AccessibleDescription = L"Beschreibung";
			this->label7->AccessibleName = L"Name davon";
			this->label7->AccessibleRole = System::Windows::Forms::AccessibleRole::ToolTip;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 32);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Ausdauerpuls-Berechnung nach Karvonen.\r\nBitte geben Sie Ihre Daten ein.";
			this->toolTip1->SetToolTip(this->label7, L"Martti J. Karvonen hat eine Formel entwickelt, um die individuell\r\noptimale Herzf"
				L"requenz beim Ausdauertraining zu ermitteln.");
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 16);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Maximalpuls:";
			this->toolTip1->SetToolTip(this->label8, L"Maximalpuls messtechnisch ermitteln (Ergometer)\r\noder theoretisch via Formel erre"
				L"chnen.");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(295, 26);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Formel: Trainingspuls = Ruhepuls + (Maximalpuls - Ruhepuls) \r\n* Trainingsart";
			this->toolTip1->SetToolTip(this->label9, L"Karvonen-Formel nach Martti J. Karvonen");
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Crimson;
			this->label10->Location = System::Drawing::Point(174, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 22);
			this->label10->TabIndex = 2;
			this->label10->Text = L"♥";
			this->toolTip1->SetToolTip(this->label10, L"Herzfrequenz (Schläge pro Minute)");
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 14);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 17);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Trainingspuls:";
			this->toolTip1->SetToolTip(this->label11, L"Herzfrequenz, die ein effizientes Ausdauertraining ermöglicht,\r\num Übertraining u"
				L"nd Unterforderung zu vermeiden.");
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Yellow;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(126, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 20);
			this->label12->TabIndex = 1;
			this->label12->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->label12, L"Ergebnis der Berechnung");
			this->label12->UseCompatibleTextRendering = true;
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Font = (gcnew System::Drawing::Font(L"Carolingia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(9, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Berechnen";
			this->toolTip1->SetToolTip(this->button1, L"Berechnung der Trainings-Herzfrequenz starten");
			this->button1->UseCompatibleTextRendering = true;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(9, 360);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(274, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"(Cursor auf Elementen positionieren für Beschreibungen.)";
			this->toolTip1->SetToolTip(this->label13, L"Maus auf den Überschriften stehen lassen um Erklärungen zu lesen.");
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Font = (gcnew System::Drawing::Font(L"Carolingia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(116, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Beenden";
			this->toolTip1->SetToolTip(this->button2, L"Programm beenden");
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->herz);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->labelErgebnis);
			this->groupBox3->Location = System::Drawing::Point(6, 265);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(303, 41);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabLagerstrom);
			this->tabControl1->Controls->Add(this->tabKarvonen);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(331, 408);
			this->tabControl1->TabIndex = 12;
			// 
			// tabLagerstrom
			// 
			this->tabLagerstrom->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->tabLagerstrom->Controls->Add(this->Einführung);
			this->tabLagerstrom->Controls->Add(this->groupBox3);
			this->tabLagerstrom->Controls->Add(this->berechnen);
			this->tabLagerstrom->Controls->Add(this->label5);
			this->tabLagerstrom->Controls->Add(this->textBoxRuhepuls);
			this->tabLagerstrom->Controls->Add(this->label2);
			this->tabLagerstrom->Controls->Add(this->textBoxLebensalter);
			this->tabLagerstrom->Controls->Add(this->groupBox2);
			this->tabLagerstrom->Controls->Add(this->label3);
			this->tabLagerstrom->Controls->Add(this->groupBox1);
			this->tabLagerstrom->Controls->Add(this->label4);
			this->tabLagerstrom->Controls->Add(this->beenden);
			this->tabLagerstrom->Location = System::Drawing::Point(4, 22);
			this->tabLagerstrom->Name = L"tabLagerstrom";
			this->tabLagerstrom->Padding = System::Windows::Forms::Padding(3);
			this->tabLagerstrom->Size = System::Drawing::Size(323, 382);
			this->tabLagerstrom->TabIndex = 0;
			this->tabLagerstrom->Text = L" Lagerstrøm";
			// 
			// tabKarvonen
			// 
			this->tabKarvonen->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->tabKarvonen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabKarvonen->Controls->Add(this->label15);
			this->tabKarvonen->Controls->Add(this->label14);
			this->tabKarvonen->Controls->Add(this->button1);
			this->tabKarvonen->Controls->Add(this->label13);
			this->tabKarvonen->Controls->Add(this->button2);
			this->tabKarvonen->Controls->Add(this->groupBox5);
			this->tabKarvonen->Controls->Add(this->label9);
			this->tabKarvonen->Controls->Add(this->groupBox4);
			this->tabKarvonen->Controls->Add(this->textBox3);
			this->tabKarvonen->Controls->Add(this->label8);
			this->tabKarvonen->Controls->Add(this->label7);
			this->tabKarvonen->Controls->Add(this->textBox1);
			this->tabKarvonen->Controls->Add(this->label6);
			this->tabKarvonen->Location = System::Drawing::Point(4, 22);
			this->tabKarvonen->Name = L"tabKarvonen";
			this->tabKarvonen->Padding = System::Windows::Forms::Padding(3);
			this->tabKarvonen->Size = System::Drawing::Size(323, 382);
			this->tabKarvonen->TabIndex = 1;
			this->tabKarvonen->Text = L"Karvonen";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Location = System::Drawing::Point(9, 174);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(285, 41);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton9);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->groupBox4->Location = System::Drawing::Point(94, 44);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 90);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Trainingsart";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(7, 66);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(164, 20);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Kraftausdauer (intensiv)";
			this->toolTip1->SetToolTip(this->radioButton10, L"für intensives Ausdauertraining: 0,8");
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(7, 43);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(143, 20);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Ausdauer (extensiv)";
			this->toolTip1->SetToolTip(this->radioButton9, L"für extensives Ausdauertraining: 0,6");
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(7, 20);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(122, 20);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Anfängertraining";
			this->toolTip1->SetToolTip(this->radioButton8, L"für Untrainierte: 0,5");
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(82, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label14->Location = System::Drawing::Point(31, 283);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(252, 52);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Sicherheitshinweis: Vor dem Messen der maximalen \r\nHerzfrequenz wird eine ärztlic"
				L"he Tauglichkeits-\r\nuntersuchung empfohlen, um sicherzustellen,\r\ndass der Körper "
				L"den Belastungen standhält.";
			this->toolTip1->SetToolTip(this->label14, L"Beim Testen des Maximalpulses, etwa mit einem Ergometertest,\r\nist der Körper eine"
				L"r hohen Belastung ausgesetzt, die vor allem \r\nbei unerkannten Krankheiten lebens"
				L"gefährliche Folgen haben kann.");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(6, 292);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 20);
			this->label15->TabIndex = 16;
			this->label15->Text = L"⚠";
			this->toolTip1->SetToolTip(this->label15, L"Beim Testen des Maximalpulses, etwa mit einem Ergometertest,\r\nist der Körper eine"
				L"r hohen Belastung ausgesetzt, die vor allem \r\nbei unerkannten Krankheiten lebens"
				L"gefährliche Folgen haben kann.");
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(331, 408);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Pulsrechner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabLagerstrom->ResumeLayout(false);
			this->tabLagerstrom->PerformLayout();
			this->tabKarvonen->ResumeLayout(false);
			this->tabKarvonen->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		double zwischenergebnis = 0;
		double tp = 0; //Trainingspuls Ergebnis

	//	if (textBoxRuhepuls->Text && textBoxLebensalter->Text && ausdauerkategorie != 0 && fitnesskategorie != 0) {
		if (textBoxRuhepuls->Text&& textBoxLebensalter->Text){

			double ruhepuls = 0;
			double lebensalter = 0;

			try {
				ruhepuls = Convert::ToDouble(textBoxRuhepuls->Text);
				lebensalter = Convert::ToDouble(textBoxLebensalter->Text);
			}
			catch (Exception^ e)
			{
				Console::WriteLine(e->ToString());
				Console::WriteLine("An error occurred.");
				Console::WriteLine(e->Message);
				Console::WriteLine(e->StackTrace);
			}

			if (ruhepuls <= 0 || lebensalter <= 0) {
				herz->Enabled = false;
				herz->Visible = false;
				labelErgebnis->BackColor = Color::Yellow;
				labelErgebnis->Text = "Eingabewert zu niedrig";
			} else if (radioButton2->Checked || radioButton1->Checked) {
				if (radioButton3->Checked || radioButton4->Checked || radioButton5->Checked || radioButton6->Checked || radioButton7->Checked) {
					if(ausdauerkategorie >0 && fitnesskategorie>0){


						try
						{
								zwischenergebnis = ruhepuls + (220 - ausdauerkategorie * lebensalter - ruhepuls) * fitnesskategorie;

								zwischenergebnis = Math::Round(zwischenergebnis, 2);
								labelErgebnis->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, FontStyle::Bold, GraphicsUnit::Point);


								labelErgebnis->Text = Convert::ToString(zwischenergebnis);
								herz->Enabled = true;
								herz->Visible = true;
								labelErgebnis->BackColor = Color::Green;
							
			
						}
						
						catch (Exception^ e)
						{
							Console::WriteLine(e->ToString());
							Console::WriteLine("An error occurred.");
							Console::WriteLine(e->Message);
							Console::WriteLine(e->StackTrace);
						}


					

					}
					else {
						labelErgebnis->Text = "Fehlende Angaben";
					}

				}
				else {
					labelErgebnis->Text = "Fehlende Angaben";
				}
			}
			else {
				labelErgebnis->Text = "Fehlende Angaben";
			}
		}
		else {
			labelErgebnis->Text = "Fehlende Angaben";
		}

			

		//double result = Math::Round(number7, 2); // Round number7 to 2 decimal places.

		/*labelErgebnis->Text = Convert::ToString(Convert::ToDouble(
			textBoxRuhepuls->Text) + (220 - ausdauerkategorie * Convert::ToDouble(textBoxLebensalter->Text) - Convert::ToDouble(
				textBoxRuhepuls->Text)) * fitnesskategorie);
				*/
		
		

		
		


		//tp = rp + (220 - ausdauerart * la - rp) * fk;

		

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void beenden_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Convert::ToDouble(textBoxRuhepuls->Text);

	
	try
	{
		Convert::ToDouble(textBoxRuhepuls->Text);
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());

		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace); 
	}
	   
	   
}
	
	

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		Convert::ToDouble(textBoxLebensalter->Text);
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}

}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		ausdauerkategorie = static_cast<double>(3) / 4;
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());

		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		ausdauerkategorie = static_cast<double>(2) / 3;
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}

	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		fitnesskategorie = 0.55;
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		fitnesskategorie = 0.6;
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		fitnesskategorie = 0.65;
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		fitnesskategorie = 0.7;
	}
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try { fitnesskategorie = 0.75; }
	catch (Exception^ e)
	{
		Console::WriteLine(e->ToString());
		Console::WriteLine("An error occurred.");
		Console::WriteLine(e->Message);
		Console::WriteLine(e->StackTrace);
	}
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Einführung_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void herz_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text && textBox3->Text && radioButton8->Checked || radioButton9->Checked || radioButton10->Checked) {
		
		double maxPuls = 0, ruhePuls = 0;

		try {
			ruhePuls = Convert::ToDouble(textBox1->Text);
			maxPuls = Convert::ToDouble(textBox3->Text);

			if (ruhePuls <= 0 || maxPuls <= 0) {
				label10->Enabled = false;
				label10->Visible = false;
				label12->BackColor = Color::Yellow;
				label12->Text = "Eingabewert zu niedrig";
			}
			else {
				try
				{
					double ergebnis = 0;
					ergebnis = ruhePuls +(maxPuls-ruhePuls)*trainingsart;
					// Ruhepuls + (Maximale Herzfrequenz - Ruhepuls) * Intensitäts-Faktor
					ergebnis = Math::Round(ergebnis, 2);
					label12->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, FontStyle::Bold, GraphicsUnit::Point);
					label12->Text = Convert::ToString(ergebnis);
					label10->Enabled = true;
					label10->Visible = true;
					label12->BackColor = Color::Green;
				}

				catch (Exception^ e)
				{
					Console::WriteLine(e->ToString());
					Console::WriteLine("An error occurred.");
					Console::WriteLine(e->Message);
					Console::WriteLine(e->StackTrace);
				}

			}

		}
		catch (Exception^ e)
		{
			Console::WriteLine(e->ToString());
			Console::WriteLine("An error occurred.");
			Console::WriteLine(e->Message);
			Console::WriteLine(e->StackTrace);
		}
	}
	else {
		label12->Text = "Eingabe fehlt";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	trainingsart = 0.5;
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	trainingsart = 0.6;
}
private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	trainingsart = 0.8;
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
};
