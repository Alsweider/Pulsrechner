#pragma once

// https://github.com/Alsweider

double rp = 0;
double la = 0;
double ausdauerkategorie = 0; //Lagerström
double fitnesskategorie = 0; //Lagerström
double trainingsart = 0; //Karvonen


//Maximalpuls:
double ergebnisTanaka = 0;
double ergebnisSpanaus = 0;
double ergebnisEdwards = 0;





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
			this->Text = "Pulsrechner (v0.3.1)";
			
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
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TabPage^ tabPageMaxpuls;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label32;

	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::GroupBox^ groupBox11;
private: System::Windows::Forms::RadioButton^ radioButton15;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::RadioButton^ radioButton13;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ menüToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ speichernToolStripMenuItem;

private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
private: System::Windows::Forms::ToolStripMenuItem^ beendenToolStripMenuItem;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;


















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
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageMaxpuls = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->tabLagerstrom = (gcnew System::Windows::Forms::TabPage());
			this->tabKarvonen = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speichernToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beendenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPageMaxpuls->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->tabLagerstrom->SuspendLayout();
			this->tabKarvonen->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// berechnen
			// 
			this->berechnen->BackColor = System::Drawing::Color::Gainsboro;
			this->berechnen->Font = (gcnew System::Drawing::Font(L"Carolingia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->berechnen->Location = System::Drawing::Point(6, 389);
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
			this->textBoxRuhepuls->Location = System::Drawing::Point(6, 83);
			this->textBoxRuhepuls->Name = L"textBoxRuhepuls";
			this->textBoxRuhepuls->Size = System::Drawing::Size(55, 26);
			this->textBoxRuhepuls->TabIndex = 2;
			this->textBoxRuhepuls->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// Einführung
			// 
			this->Einführung->AccessibleDescription = L"Beschreibung";
			this->Einführung->AccessibleName = L"Name davon";
			this->Einführung->AccessibleRole = System::Windows::Forms::AccessibleRole::ToolTip;
			this->Einführung->AutoSize = true;
			this->Einführung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Einführung->Location = System::Drawing::Point(6, 3);
			this->Einführung->Name = L"Einführung";
			this->Einführung->Size = System::Drawing::Size(327, 40);
			this->Einführung->TabIndex = 0;
			this->Einführung->Text = L"Ausdauerpuls-Berechnung nach Lagerstrøm.\r\nBitte geben Sie Ihre Daten ein.";
			this->toolTip1->SetToolTip(this->Einführung, L"Dr. Dieter Lagerstrøm hat eine Formel entwickelt, um den optimalen Puls \r\nfür das"
				L" Ausdauertraining zu ermitteln. Das Ergebnis ist ein Richtwert, \r\nder in der Rea"
				L"lität abweichend ausfallen kann.");
			this->Einführung->Click += gcnew System::EventHandler(this, &Form1::Einführung_Click);
			// 
			// textBoxLebensalter
			// 
			this->textBoxLebensalter->Location = System::Drawing::Point(6, 130);
			this->textBoxLebensalter->Name = L"textBoxLebensalter";
			this->textBoxLebensalter->Size = System::Drawing::Size(55, 26);
			this->textBoxLebensalter->TabIndex = 4;
			this->textBoxLebensalter->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// labelErgebnis
			// 
			this->labelErgebnis->AutoSize = true;
			this->labelErgebnis->BackColor = System::Drawing::Color::Yellow;
			this->labelErgebnis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelErgebnis->Location = System::Drawing::Point(132, 14);
			this->labelErgebnis->Name = L"labelErgebnis";
			this->labelErgebnis->Size = System::Drawing::Size(154, 24);
			this->labelErgebnis->TabIndex = 1;
			this->labelErgebnis->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->labelErgebnis, L"Ergebnis der Berechnung");
			this->labelErgebnis->UseCompatibleTextRendering = true;
			this->labelErgebnis->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ruhepuls:";
			this->toolTip1->SetToolTip(this->label3, L"Ruhepuls im entspannten Zustand messen, etwa morgens vor dem Aufstehen.");
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Alter:";
			this->toolTip1->SetToolTip(this->label4, L"Lebensalter in Jahren");
			// 
			// beenden
			// 
			this->beenden->BackColor = System::Drawing::Color::Gainsboro;
			this->beenden->Font = (gcnew System::Drawing::Font(L"Carolingia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->beenden->Location = System::Drawing::Point(278, 389);
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
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(9, 54);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(247, 24);
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
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(9, 31);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(266, 24);
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
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(91, 60);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(288, 96);
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
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(6, 165);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(373, 100);
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
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(8, 43);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(158, 24);
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
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(8, 66);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(198, 24);
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
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(198, 43);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(166, 24);
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
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(198, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(155, 24);
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
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(8, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(153, 24);
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 20);
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(6, 436);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(343, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"(Cursor auf Elementen positionieren für Beschreibungen.)";
			this->toolTip1->SetToolTip(this->label2, L"Maus auf den Überschriften stehen lassen um Erklärungen zu lesen.");
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(371, 40);
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
			this->herz->Location = System::Drawing::Point(188, 14);
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
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Ruhepuls:";
			this->toolTip1->SetToolTip(this->label6, L"Ruhepuls im entspannten Zustand messen, etwa morgens vor dem Aufstehen.");
			// 
			// label7
			// 
			this->label7->AccessibleDescription = L"Beschreibung";
			this->label7->AccessibleName = L"Name davon";
			this->label7->AccessibleRole = System::Windows::Forms::AccessibleRole::ToolTip;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(313, 40);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Ausdauerpuls-Berechnung nach Karvonen.\r\nBitte geben Sie Ihre Daten ein.";
			this->toolTip1->SetToolTip(this->label7, L"Martti J. Karvonen hat eine Formel entwickelt, um die individuell\r\noptimale Herzf"
				L"requenz beim Ausdauertraining zu ermitteln.");
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Maximalpuls:";
			this->toolTip1->SetToolTip(this->label8, L"Maximalpuls messtechnisch ermitteln (Ergometer)\r\noder theoretisch via Formel erre"
				L"chnen.");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(6, 161);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(368, 20);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Ruhepuls + (Maximalpuls - Ruhepuls) * Trainingsart";
			this->toolTip1->SetToolTip(this->label9, L"Karvonen-Formel nach Martti J. Karvonen");
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Crimson;
			this->label10->Location = System::Drawing::Point(188, 14);
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
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 20);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Trainingspuls:";
			this->toolTip1->SetToolTip(this->label11, L"Herzfrequenz, die ein effizientes Ausdauertraining ermöglicht,\r\num Übertraining u"
				L"nd Unterforderung zu vermeiden.");
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Yellow;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(132, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(154, 24);
			this->label12->TabIndex = 1;
			this->label12->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->label12, L"Ergebnis der Berechnung");
			this->label12->UseCompatibleTextRendering = true;
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Font = (gcnew System::Drawing::Font(L"Carolingia", 14.25F));
			this->button1->Location = System::Drawing::Point(6, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Berechnen";
			this->toolTip1->SetToolTip(this->button1, L"Berechnung der Trainings-Herzfrequenz starten");
			this->button1->UseCompatibleTextRendering = true;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label13->Location = System::Drawing::Point(6, 436);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(343, 16);
			this->label13->TabIndex = 11;
			this->label13->Text = L"(Cursor auf Elementen positionieren für Beschreibungen.)";
			this->toolTip1->SetToolTip(this->label13, L"Maus auf den Überschriften stehen lassen um Erklärungen zu lesen.");
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Font = (gcnew System::Drawing::Font(L"Carolingia", 14.25F));
			this->button2->Location = System::Drawing::Point(278, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Beenden";
			this->toolTip1->SetToolTip(this->button2, L"Programm beenden");
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(7, 68);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(195, 24);
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
			this->radioButton9->Location = System::Drawing::Point(7, 45);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(167, 24);
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
			this->radioButton8->Location = System::Drawing::Point(7, 22);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(145, 24);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Anfängertraining";
			this->toolTip1->SetToolTip(this->radioButton8, L"für Untrainierte: 0,5");
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(24, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(347, 80);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Vor dem Messen der maximalen Herzfrequenz \r\nwird eine ärztliche Tauglichkeitsunte"
				L"rsuchung \r\nempfohlen, um sicherzustellen, dass der Körper \r\nden Belastungen stan"
				L"dhält.";
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
			this->label15->Location = System::Drawing::Point(2, 45);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 20);
			this->label15->TabIndex = 1;
			this->label15->Text = L"⚠";
			this->toolTip1->SetToolTip(this->label15, L"Beim Testen des Maximalpulses, etwa mit einem Ergometertest,\r\nist der Körper eine"
				L"r hohen Belastung ausgesetzt, die vor allem \r\nbei unerkannten Krankheiten lebens"
				L"gefährliche Folgen haben kann.");
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton9);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(122, 53);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(255, 99);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Trainingsart";
			this->toolTip1->SetToolTip(this->groupBox4, L"Intensitätsfaktor (Belastungsintensität)");
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(6, 200);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(373, 111);
			this->groupBox6->TabIndex = 8;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Sicherheitshinweis";
			this->toolTip1->SetToolTip(this->groupBox6, L"Beim Testen des Maximalpulses, etwa mit einem Ergometertest,\r\nist der Körper eine"
				L"r hohen Belastung ausgesetzt, die vor allem \r\nbei unerkannten Krankheiten lebens"
				L"gefährliche Folgen haben kann.");
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Enabled = false;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Crimson;
			this->label16->Location = System::Drawing::Point(177, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(32, 22);
			this->label16->TabIndex = 2;
			this->label16->Text = L"♥";
			this->toolTip1->SetToolTip(this->label16, L"Herzfrequenz (Schläge pro Minute)");
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(12, 14);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 20);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Tanaka HF:";
			this->toolTip1->SetToolTip(this->label17, L"Herzfrequenz, die ein effizientes Ausdauertraining ermöglicht,\r\num Übertraining u"
				L"nd Unterforderung zu vermeiden.");
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Yellow;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(126, 14);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(154, 24);
			this->label18->TabIndex = 1;
			this->label18->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->label18, L"Ergebnis der Berechnung");
			this->label18->UseCompatibleTextRendering = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Enabled = false;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Crimson;
			this->label19->Location = System::Drawing::Point(177, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 22);
			this->label19->TabIndex = 2;
			this->label19->Text = L"♥";
			this->toolTip1->SetToolTip(this->label19, L"Herzfrequenz (Schläge pro Minute)");
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(12, 14);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(114, 20);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Spanaus HF:";
			this->toolTip1->SetToolTip(this->label20, L"Herzfrequenz, die ein effizientes Ausdauertraining ermöglicht,\r\num Übertraining u"
				L"nd Unterforderung zu vermeiden.");
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Yellow;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(126, 14);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(154, 24);
			this->label21->TabIndex = 1;
			this->label21->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->label21, L"Ergebnis der Berechnung");
			this->label21->UseCompatibleTextRendering = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Font = (gcnew System::Drawing::Font(L"Carolingia", 14));
			this->button3->Location = System::Drawing::Point(6, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Berechnen";
			this->toolTip1->SetToolTip(this->button3, L"Berechnung der maximalen Herzfrequenz starten");
			this->button3->UseCompatibleTextRendering = true;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->Font = (gcnew System::Drawing::Font(L"Carolingia", 14));
			this->button4->Location = System::Drawing::Point(278, 389);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 36);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Beenden";
			this->toolTip1->SetToolTip(this->button4, L"Programm beenden");
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label22
			// 
			this->label22->AccessibleDescription = L"Beschreibung";
			this->label22->AccessibleName = L"Name davon";
			this->label22->AccessibleRole = System::Windows::Forms::AccessibleRole::ToolTip;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(6, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(317, 40);
			this->label22->TabIndex = 0;
			this->label22->Text = L"Berechnung Ihrer maximalen Herzfrequenz.\r\nBitte geben Sie Ihre Daten ein.";
			this->toolTip1->SetToolTip(this->label22, L"Die Berechnung der maximalen Herzfrequenz ist kein\r\nErsatz für eine tatsächliche "
				L"Messung. Sie kann aber\r\neinen groben Orientierungswert liefern.");
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(12, 43);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(231, 40);
			this->label26->TabIndex = 11;
			this->label26->Text = L"Männer: 223 - 0,9 * Lebensalter\r\nFrauen: 226 - 1,0 * Lebensalter\r\n";
			this->toolTip1->SetToolTip(this->label26, L"Formel zur Errechnung des Maximalpulses für trainierte Sportler nach Winfried Spa"
				L"naus");
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label27->Location = System::Drawing::Point(6, 436);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(343, 16);
			this->label27->TabIndex = 17;
			this->label27->Text = L"(Cursor auf Elementen positionieren für Beschreibungen.)";
			this->toolTip1->SetToolTip(this->label27, L"Maus auf den Überschriften stehen lassen um Erklärungen zu lesen.");
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(12, 43);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(169, 20);
			this->label28->TabIndex = 8;
			this->label28->Text = L"208 - 0,7 * Lebensalter";
			this->toolTip1->SetToolTip(this->label28, L"Formel zur Errechnung des Maximalpulses nach Hirofumi Tanaka");
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->radioButton12);
			this->groupBox9->Controls->Add(this->radioButton11);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox9->Location = System::Drawing::Point(149, 52);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(230, 50);
			this->groupBox9->TabIndex = 5;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Geschlecht";
			this->toolTip1->SetToolTip(this->groupBox9, L"Die Formel von Winfried Spanaus unterscheidet nach Geschlechtern,\r\num den individ"
				L"uellen Unterschieden bei trainierten Sportlern Rechnung\r\nzu tragen.");
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton12->Location = System::Drawing::Point(94, 20);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(82, 24);
			this->radioButton12->TabIndex = 1;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"weiblich";
			this->toolTip1->SetToolTip(this->radioButton12, L"♀");
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton12_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton11->Location = System::Drawing::Point(7, 20);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(90, 24);
			this->radioButton11->TabIndex = 0;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"männlich";
			this->toolTip1->SetToolTip(this->radioButton11, L"♂");
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton11_CheckedChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(6, 52);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(46, 20);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Alter:";
			this->toolTip1->SetToolTip(this->label23, L"Lebensalter in Jahren");
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Enabled = false;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Crimson;
			this->label29->Location = System::Drawing::Point(177, 12);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(32, 22);
			this->label29->TabIndex = 2;
			this->label29->Text = L"♥";
			this->toolTip1->SetToolTip(this->label29, L"Herzfrequenz (Schläge pro Minute)");
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(12, 14);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(112, 20);
			this->label30->TabIndex = 0;
			this->label30->Text = L"Edwards HF:";
			this->toolTip1->SetToolTip(this->label30, L"Herzfrequenz, die ein effizientes Ausdauertraining ermöglicht,\r\num Übertraining u"
				L"nd Unterforderung zu vermeiden.");
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Yellow;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(126, 14);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(154, 24);
			this->label31->TabIndex = 1;
			this->label31->Text = L"(wartet auf Eingabe)";
			this->toolTip1->SetToolTip(this->label31, L"Ergebnis der Berechnung");
			this->label31->UseCompatibleTextRendering = true;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(6, 43);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(333, 40);
			this->label32->TabIndex = 14;
			this->label32->Text = L"Männer: 214 - 0,5 * Alter - 0,11 * Gewicht in kg\r\nFrauen: 210 - 0,5 * Alter - 0,1"
				L"1 * Gewicht in kg";
			this->toolTip1->SetToolTip(this->label32, L"Formel zur Errechnung des Maximalpulses nach Sally Edwards");
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(75, 52);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(71, 20);
			this->label34->TabIndex = 3;
			this->label34->Text = L"Gewicht:";
			this->toolTip1->SetToolTip(this->label34, L"Gewicht in Kilogramm");
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Enabled = false;
			this->radioButton15->Location = System::Drawing::Point(7, 184);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(14, 13);
			this->radioButton15->TabIndex = 2;
			this->radioButton15->TabStop = true;
			this->toolTip1->SetToolTip(this->radioButton15, L"Edwards-Maximalpuls in die Karvonen-Formel einsetzen.\r\n");
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->Visible = false;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton15_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Enabled = false;
			this->radioButton14->Location = System::Drawing::Point(6, 87);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(14, 13);
			this->radioButton14->TabIndex = 1;
			this->radioButton14->TabStop = true;
			this->toolTip1->SetToolTip(this->radioButton14, L"Spanaus-Maximalpuls in die Karvonen-Formel einsetzen.\r\n");
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->Visible = false;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton14_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Enabled = false;
			this->radioButton13->Location = System::Drawing::Point(7, 14);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(14, 13);
			this->radioButton13->TabIndex = 0;
			this->radioButton13->TabStop = true;
			this->toolTip1->SetToolTip(this->radioButton13, L"Tanaka-Maximalpuls in die Karvonen-Formel einsetzen.");
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->Visible = false;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton13_CheckedChanged);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->radioButton15);
			this->groupBox11->Controls->Add(this->radioButton14);
			this->groupBox11->Controls->Add(this->radioButton13);
			this->groupBox11->Location = System::Drawing::Point(347, 112);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(32, 259);
			this->groupBox11->TabIndex = 18;
			this->groupBox11->TabStop = false;
			this->toolTip1->SetToolTip(this->groupBox11, L"Jeweiliges Ergebnis in die Karvonen-Formel \r\nzur Berechnung des Trainingspulses e"
				L"insetzen.");
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->Font = (gcnew System::Drawing::Font(L"Carolingia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(145, 389);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 36);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Speichern";
			this->toolTip1->SetToolTip(this->button5, L"Berechnete Daten exportieren");
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->Font = (gcnew System::Drawing::Font(L"Carolingia", 14.25F));
			this->button6->Location = System::Drawing::Point(145, 389);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 36);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Speichern";
			this->toolTip1->SetToolTip(this->button6, L"Berechnete Daten exportieren");
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->Font = (gcnew System::Drawing::Font(L"Carolingia", 14));
			this->button7->Location = System::Drawing::Point(145, 389);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 36);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Speichern";
			this->toolTip1->SetToolTip(this->button7, L"Berechnete Daten exportieren");
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->herz);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->labelErgebnis);
			this->groupBox3->Location = System::Drawing::Point(6, 329);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(373, 45);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageMaxpuls);
			this->tabControl1->Controls->Add(this->tabKarvonen);
			this->tabControl1->Controls->Add(this->tabLagerstrom);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 29);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(396, 489);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageMaxpuls
			// 
			this->tabPageMaxpuls->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->tabPageMaxpuls->Controls->Add(this->button7);
			this->tabPageMaxpuls->Controls->Add(this->groupBox11);
			this->tabPageMaxpuls->Controls->Add(this->label34);
			this->tabPageMaxpuls->Controls->Add(this->textBox5);
			this->tabPageMaxpuls->Controls->Add(this->groupBox10);
			this->tabPageMaxpuls->Controls->Add(this->label27);
			this->tabPageMaxpuls->Controls->Add(this->groupBox9);
			this->tabPageMaxpuls->Controls->Add(this->label23);
			this->tabPageMaxpuls->Controls->Add(this->textBox4);
			this->tabPageMaxpuls->Controls->Add(this->label22);
			this->tabPageMaxpuls->Controls->Add(this->button3);
			this->tabPageMaxpuls->Controls->Add(this->button4);
			this->tabPageMaxpuls->Controls->Add(this->groupBox8);
			this->tabPageMaxpuls->Controls->Add(this->groupBox7);
			this->tabPageMaxpuls->Location = System::Drawing::Point(4, 29);
			this->tabPageMaxpuls->Name = L"tabPageMaxpuls";
			this->tabPageMaxpuls->Padding = System::Windows::Forms::Padding(3);
			this->tabPageMaxpuls->Size = System::Drawing::Size(388, 456);
			this->tabPageMaxpuls->TabIndex = 2;
			this->tabPageMaxpuls->Text = L"Maximalpuls";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(86, 72);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(42, 26);
			this->textBox5->TabIndex = 4;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label29);
			this->groupBox10->Controls->Add(this->label30);
			this->groupBox10->Controls->Add(this->label31);
			this->groupBox10->Controls->Add(this->label32);
			this->groupBox10->Location = System::Drawing::Point(6, 278);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(345, 93);
			this->groupBox10->TabIndex = 12;
			this->groupBox10->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 72);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(42, 26);
			this->textBox4->TabIndex = 2;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Location = System::Drawing::Point(6, 183);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(345, 89);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Location = System::Drawing::Point(6, 112);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(345, 72);
			this->groupBox7->TabIndex = 6;
			this->groupBox7->TabStop = false;
			// 
			// tabLagerstrom
			// 
			this->tabLagerstrom->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->tabLagerstrom->Controls->Add(this->button5);
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
			this->tabLagerstrom->Location = System::Drawing::Point(4, 29);
			this->tabLagerstrom->Name = L"tabLagerstrom";
			this->tabLagerstrom->Padding = System::Windows::Forms::Padding(3);
			this->tabLagerstrom->Size = System::Drawing::Size(388, 456);
			this->tabLagerstrom->TabIndex = 0;
			this->tabLagerstrom->Text = L" Lagerstrøm";
			// 
			// tabKarvonen
			// 
			this->tabKarvonen->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->tabKarvonen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabKarvonen->Controls->Add(this->button6);
			this->tabKarvonen->Controls->Add(this->groupBox6);
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
			this->tabKarvonen->Location = System::Drawing::Point(4, 29);
			this->tabKarvonen->Name = L"tabKarvonen";
			this->tabKarvonen->Padding = System::Windows::Forms::Padding(3);
			this->tabKarvonen->Size = System::Drawing::Size(388, 456);
			this->tabKarvonen->TabIndex = 1;
			this->tabKarvonen->Text = L"Karvonen";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Location = System::Drawing::Point(6, 329);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(373, 45);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 26);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 26);
			this->textBox1->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menüToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(396, 29);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menüToolStripMenuItem
			// 
			this->menüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->speichernToolStripMenuItem,
					this->beendenToolStripMenuItem
			});
			this->menüToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->menüToolStripMenuItem->Name = L"menüToolStripMenuItem";
			this->menüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->menüToolStripMenuItem->Size = System::Drawing::Size(58, 25);
			this->menüToolStripMenuItem->Text = L"&Datei";
			// 
			// speichernToolStripMenuItem
			// 
			this->speichernToolStripMenuItem->Name = L"speichernToolStripMenuItem";
			this->speichernToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->speichernToolStripMenuItem->Size = System::Drawing::Size(207, 26);
			this->speichernToolStripMenuItem->Text = L"&Speichern";
			this->speichernToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::speichernToolStripMenuItem_Click);
			// 
			// beendenToolStripMenuItem
			// 
			this->beendenToolStripMenuItem->Name = L"beendenToolStripMenuItem";
			this->beendenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::B));
			this->beendenToolStripMenuItem->Size = System::Drawing::Size(207, 26);
			this->beendenToolStripMenuItem->Text = L"&Beenden";
			this->beendenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::beendenToolStripMenuItem_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(396, 518);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Pulsrechner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPageMaxpuls->ResumeLayout(false);
			this->tabPageMaxpuls->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tabLagerstrom->ResumeLayout(false);
			this->tabLagerstrom->PerformLayout();
			this->tabKarvonen->ResumeLayout(false);
			this->tabKarvonen->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		double zwischenergebnis = 0;
		double tp = 0; //Trainingspuls Ergebnis

		

	//	if (textBoxRuhepuls->Text && textBoxLebensalter->Text && ausdauerkategorie != 0 && fitnesskategorie != 0) {
		if (textBoxRuhepuls->Text&& textBoxLebensalter->Text){

			textBox1->Text = Convert::ToString(textBoxRuhepuls->Text);
			textBox4->Text = Convert::ToString(textBoxLebensalter->Text); //Alter in die Maximalpulsrechnung kopieren 
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
				labelErgebnis->ForeColor = Color::Black;
				labelErgebnis->Text = "Eingabewert zu niedrig";
			} else if (radioButton2->Checked || radioButton1->Checked) {
				if (radioButton3->Checked || radioButton4->Checked || radioButton5->Checked || radioButton6->Checked || radioButton7->Checked) {
					if(ausdauerkategorie >0 && fitnesskategorie>0){


						try
						{
								zwischenergebnis = ruhepuls + (220 - ausdauerkategorie * lebensalter - ruhepuls) * fitnesskategorie;

								zwischenergebnis = Math::Round(zwischenergebnis, 2);
								labelErgebnis->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);


								labelErgebnis->Text = Convert::ToString(zwischenergebnis);
								herz->Enabled = true;
								herz->Visible = true;
								labelErgebnis->BackColor = Color::Green;
								labelErgebnis->ForeColor = Color::White;
							
			
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
		
		textBoxRuhepuls->Text = Convert::ToString(textBox1->Text);

		double maxPuls = 0, ruhePuls = 0;

		try {
			ruhePuls = Convert::ToDouble(textBox1->Text);
			maxPuls = Convert::ToDouble(textBox3->Text);

			if (ruhePuls <= 0 || maxPuls <= 0) {
				label10->Enabled = false;
				label10->Visible = false;
				label12->BackColor = Color::Yellow;
				label12->ForeColor = Color::Black;
				label12->Text = "Eingabewert zu niedrig";
			}
			else {
				try
				{
					double ergebnis = 0;
					ergebnis = ruhePuls +(maxPuls-ruhePuls)*trainingsart;
					// Ruhepuls + (Maximale Herzfrequenz - Ruhepuls) * Intensitäts-Faktor
					ergebnis = Math::Round(ergebnis, 2);
					label12->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);
					label12->Text = Convert::ToString(ergebnis);
					label10->Enabled = true;
					label10->Visible = true;
					label12->BackColor = Color::Green;
					label12->ForeColor = Color::White;
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double alter = 0;
	double gewicht = 0;


	//Tanaka:

	if (textBox4->Text) { // wenn Lebensalter angegeben
		try {
			textBoxLebensalter->Text = Convert::ToString(textBox4->Text); //Alter in die Lagerström-Rechnung kopieren
			alter = Convert::ToDouble(textBox4->Text); //Text zu Zahl

			ergebnisTanaka = 208 - 0.7 * alter;
			ergebnisTanaka = Math::Round(ergebnisTanaka, 2);

			label18->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);
			label18->Text = Convert::ToString(ergebnisTanaka);
			textBox3->Text = Convert::ToString(ergebnisTanaka); //Zur Karvonen-Formel
			label16->Enabled = true;
			label16->Visible = true;
			label18->BackColor = Color::Green;
			label18->ForeColor = Color::White;


			if (ergebnisTanaka > 0) {
				radioButton13->Enabled = true;
				radioButton13->Visible = true;
			}

		
		}
		catch (Exception^ e)
		{
			Console::WriteLine(e->ToString());
			Console::WriteLine("An error occurred.");
			Console::WriteLine(e->Message);
			Console::WriteLine(e->StackTrace);
		}

	//Spanaus männlich:
	}
	if (textBox4->Text && radioButton11->Checked==true && radioButton12->Checked==false) {
		try {
			textBoxLebensalter->Text = Convert::ToString(textBox4->Text); //Alter in die Lagerström-Rechnung kopieren
			alter = Convert::ToDouble(textBox4->Text); //Text zu Zahl

			ergebnisSpanaus = 223 - 0.9 * alter;
			ergebnisSpanaus = Math::Round(ergebnisSpanaus, 2);

			label21->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);
			label21->Text = Convert::ToString(ergebnisSpanaus);
			label19->Enabled = true;
			label19->Visible = true;
			label21->BackColor = Color::Green;
			label21->ForeColor = Color::White;


			if (ergebnisSpanaus > 0) {
				radioButton14->Enabled = true;
				radioButton14->Visible = true;

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
//Spanaus weiblich:

	if (textBox4->Text && radioButton11->Checked == false && radioButton12->Checked == true) {
		try {

			textBoxLebensalter->Text = Convert::ToString(textBox4->Text); //Alter in die Lagerström-Rechnung kopieren
			alter = Convert::ToDouble(textBox4->Text); //Text zu Zahl

			ergebnisSpanaus = 226 - 1.0 * alter;
			ergebnisSpanaus = Math::Round(ergebnisSpanaus, 2);

			label21->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);
			label21->Text = Convert::ToString(ergebnisSpanaus);
			label19->Enabled = true;
			label19->Visible = true;
			label21->BackColor = Color::Green;
			label21->ForeColor = Color::White;


			if (ergebnisSpanaus > 0) {
				radioButton14->Enabled = true;
				radioButton14->Visible = true;

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

	//Edwards männlich:
	if (textBox4->Text && textBox5->Text && radioButton11->Checked == true && radioButton12->Checked == false) {
		try {
			textBoxLebensalter->Text = Convert::ToString(textBox4->Text); //Alter in die Lagerström-Rechnung kopieren
			alter = Convert::ToDouble(textBox4->Text); //Alter Text zu Zahl
			gewicht = Convert::ToDouble(textBox5->Text); //Gewicht Text zu Zahl


			ergebnisEdwards = 214 - 0.5 * alter - 0.11 * gewicht;
			ergebnisEdwards = Math::Round(ergebnisEdwards, 2);

			label31->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);
			label31->Text = Convert::ToString(ergebnisEdwards);
			label29->Enabled = true;
			label29->Visible = true;
			label31->BackColor = Color::Green;
			label31->ForeColor = Color::White;


			if (ergebnisEdwards > 0) {
				radioButton15->Enabled = true;
				radioButton15->Visible = true;

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

	//Edwards weiblich:

	if (textBox4->Text && textBox5->Text && radioButton11->Checked == false && radioButton12->Checked == true) {
	try {
		textBoxLebensalter->Text = Convert::ToString(textBox4->Text); //Alter in die Lagerström-Rechnung kopieren
		alter = Convert::ToDouble(textBox4->Text); //Alter Text zu Zahl
		gewicht = Convert::ToDouble(textBox5->Text); //Gewicht Text zu Zahl


		ergebnisEdwards = 210 - 0.5 * alter - 0.11 * gewicht;
		ergebnisEdwards = Math::Round(ergebnisEdwards, 2);

		label31->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Bold, GraphicsUnit::Point);
		label31->Text = Convert::ToString(ergebnisEdwards);
		label29->Enabled = true;
		label29->Visible = true;
		label31->BackColor = Color::Green;
		label31->ForeColor = Color::White;


		if (ergebnisEdwards > 0) {
			radioButton15->Enabled = true;
			radioButton15->Visible = true;

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

	/*
	Tanaka - Formel: Maximalpuls = 208 - 0, 7 * Lebensalter\n";
	Spanaus - Formel(Männer) : Maximalpuls = 223 - 0, 9 * Lebensalter
	Spanaus - Formel(Frauen) : Maximalpuls = 226 - 1, 0 * Lebensalter
	Edwards: Männer: 214 - 0,5 * Alter - 0,11 * Körpergewicht (kg)
    Edwards: Frauen: 210 - 0,5 * Alter - 0,11 * Körpergewicht (kg)
	*/
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = Convert::ToString(ergebnisTanaka);
}
private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = Convert::ToString(ergebnisSpanaus);
}
private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = Convert::ToString(ergebnisEdwards);
}

private: System::Void ladenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
}
private: System::Void speichernToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	saveFileDialog1->Filter = "Textdatei|*.txt";
	saveFileDialog1->Title = "Berechnete Werte in Textdatei speichern";
	if (saveFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
	{


		IO::File::WriteAllText(saveFileDialog1->FileName,
			"Alter: " + textBoxLebensalter->Text + "\n"
			+ "Gewicht: " + textBox5->Text + "\n"
			// + "Geschlecht: "
			+ "Ruhepuls: " + textBoxRuhepuls->Text + "\n"
			+ "Trainingspuls (Lagerstrøm): " + labelErgebnis->Text + "\n"
			+ "Trainingspuls (Karvonen): " + label12->Text + "\n"
			+ "Maximalpuls (Tanaka): " + label18->Text + "\n"
			+ "Maximalpuls (Spanaus): " + label21->Text + "\n"
			+ "Maximalpuls (Edwards): " + label31->Text + "\n"

		);
	}
	
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void beendenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Textdatei|*.txt";
	saveFileDialog1->Title = "Berechnete Werte in Textdatei speichern";
	if (saveFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
	{


		IO::File::WriteAllText(saveFileDialog1->FileName,
			"Alter: " + textBoxLebensalter->Text + "\n"
			+ "Gewicht: " + textBox5->Text + "\n"
			// + "Geschlecht: "
			+ "Ruhepuls: " + textBoxRuhepuls->Text + "\n"
			+ "Trainingspuls (Lagerstrøm): " + labelErgebnis->Text + "\n"
			+ "Trainingspuls (Karvonen): " + label12->Text + "\n"
			+ "Maximalpuls (Tanaka): " + label18->Text + "\n"
			+ "Maximalpuls (Spanaus): " + label21->Text + "\n"
			+ "Maximalpuls (Edwards): " + label31->Text + "\n"

		);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Textdatei|*.txt";
	saveFileDialog1->Title = "Berechnete Werte in Textdatei speichern";
	if (saveFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
	{


		IO::File::WriteAllText(saveFileDialog1->FileName,
			"Alter: " + textBoxLebensalter->Text + "\n"
			+ "Gewicht: " + textBox5->Text + "\n"
			// + "Geschlecht: "
			+ "Ruhepuls: " + textBoxRuhepuls->Text + "\n"
			+ "Trainingspuls (Lagerstrøm): " + labelErgebnis->Text + "\n"
			+ "Trainingspuls (Karvonen): " + label12->Text + "\n"
			+ "Maximalpuls (Tanaka): " + label18->Text + "\n"
			+ "Maximalpuls (Spanaus): " + label21->Text + "\n"
			+ "Maximalpuls (Edwards): " + label31->Text + "\n"

		);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Textdatei|*.txt";
	saveFileDialog1->Title = "Berechnete Werte in Textdatei speichern";
	if (saveFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
	{


		IO::File::WriteAllText(saveFileDialog1->FileName,
			"Alter: " + textBoxLebensalter->Text + "\n"
			+ "Gewicht: " + textBox5->Text + "\n"
			// + "Geschlecht: "
			+ "Ruhepuls: " + textBoxRuhepuls->Text + "\n"
			+ "Trainingspuls (Lagerstrøm): " + labelErgebnis->Text + "\n"
			+ "Trainingspuls (Karvonen): " + label12->Text + "\n"
			+ "Maximalpuls (Tanaka): " + label18->Text + "\n"
			+ "Maximalpuls (Spanaus): " + label21->Text + "\n"
			+ "Maximalpuls (Edwards): " + label31->Text + "\n"

		);
	}
}
private: System::Void vergrößernToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Width += 50;
	this->Height += 50;


	/*
	this->Width = Width+20;
	this->Height = Height + 20;
	label22->Size = System::Drawing::Size(100, 100);
	*/
	/*
//	label22
	label23->Font = gcnew System::Drawing::Font(label23->Font->Name,
		14, label23->Font->Style, label23->Font->Unit);		
	label34
		groupBox9
		radioButton11
		radioButton12
		label17
		label18
		label24
		label28
		label20
		label21
		label25
		label26
		label30
		label31
		label33
		label32
		button3
		button4
		button7
		label27*/

	
}
};
};
