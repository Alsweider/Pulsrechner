#pragma once
// https://github.com/Alsweider

double rp = 0;
double la = 0;
double ausdauerkategorie = 0;
double fitnesskategorie = 0;





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
			this->Text = "Pulsrechner (v0.0.2)";
			
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// berechnen
			// 
			this->berechnen->BackColor = System::Drawing::Color::Gainsboro;
			this->berechnen->Font = (gcnew System::Drawing::Font(L"Carolingia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->berechnen->Location = System::Drawing::Point(12, 318);
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
			this->textBoxRuhepuls->Location = System::Drawing::Point(12, 70);
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
			this->Einführung->Location = System::Drawing::Point(12, 9);
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
			this->textBoxLebensalter->Location = System::Drawing::Point(12, 113);
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
			this->label3->Location = System::Drawing::Point(9, 54);
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
			this->label4->Location = System::Drawing::Point(12, 97);
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
			this->beenden->Location = System::Drawing::Point(119, 318);
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
			this->groupBox1->Location = System::Drawing::Point(80, 54);
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
			this->groupBox2->Location = System::Drawing::Point(12, 140);
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
			this->label2->Location = System::Drawing::Point(12, 357);
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
			this->label5->Location = System::Drawing::Point(12, 242);
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->herz);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->labelErgebnis);
			this->groupBox3->Location = System::Drawing::Point(12, 271);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(303, 41);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(327, 380);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->beenden);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxLebensalter);
			this->Controls->Add(this->Einführung);
			this->Controls->Add(this->textBoxRuhepuls);
			this->Controls->Add(this->berechnen);
			this->Name = L"Form1";
			this->Text = L"Pulsrechner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
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
							
							/*
							zwischenergebnis = Convert::ToDouble(
								textBoxRuhepuls->Text) + (220 - ausdauerkategorie * Convert::ToDouble(textBoxLebensalter->Text) - Convert::ToDouble(
									textBoxRuhepuls->Text)) * fitnesskategorie;

							zwischenergebnis = Math::Round(zwischenergebnis, 2);
							labelErgebnis->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, FontStyle::Bold, GraphicsUnit::Point);


							labelErgebnis->Text = Convert::ToString(zwischenergebnis);
							herz->Enabled = true;
							herz->Visible = true;
							labelErgebnis->BackColor = Color::Green;
							*/
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
};
};
