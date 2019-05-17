#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal_windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <Windows.h>

#include "Calculations.h"
#include "Conversions.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MainCalculator
	/// </summary>
	public ref class MainCalculator : public System::Windows::Forms::Form
	{
	public:
		MainCalculator(void)
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
		~MainCalculator()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  lblOperation;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn1;
	protected:




	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnMul;
	private: System::Windows::Forms::Button^  btnSub;
	private: System::Windows::Forms::Button^  btnAdd;










	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnEqu;


	private: System::Windows::Forms::Button^  btnPlusMinus;
	private: System::Windows::Forms::Button^  btnDecimal;



	private: System::Windows::Forms::Button^  btn_Clear;
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::Button^  btnOR;


	private: System::Windows::Forms::Button^  btnXOR;
	private: System::Windows::Forms::Button^  btnNOT;
	private: System::Windows::Forms::Button^  btnAND;



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  programmersToolStripMenuItem;
	private: System::Windows::Forms::Button^  btnMOD;

	private: System::Windows::Forms::Button^  btnF;

	private: System::Windows::Forms::Button^  btnD;

	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  btnE;


	private: System::Windows::Forms::Button^  btnC;

	private: System::Windows::Forms::Button^  btnA;







	private: System::Windows::Forms::Label^  lblHex;
	private: System::Windows::Forms::Label^  lblDec;
	private: System::Windows::Forms::Label^  lblOct;
	private: System::Windows::Forms::Label^  lblBin;
	private: System::Windows::Forms::Label^  lblBin1;





	private: System::Windows::Forms::RadioButton^  radioHex;
	private: System::Windows::Forms::RadioButton^  radioDec;
	private: System::Windows::Forms::RadioButton^  radioOct;
	private: System::Windows::Forms::RadioButton^  radioBin;
	private: System::Windows::Forms::Label^  lblBin2;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainCalculator::typeid));
			this->lblOperation = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEqu = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnOR = (gcnew System::Windows::Forms::Button());
			this->btnXOR = (gcnew System::Windows::Forms::Button());
			this->btnNOT = (gcnew System::Windows::Forms::Button());
			this->btnAND = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programmersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnMOD = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->lblHex = (gcnew System::Windows::Forms::Label());
			this->lblDec = (gcnew System::Windows::Forms::Label());
			this->lblOct = (gcnew System::Windows::Forms::Label());
			this->lblBin = (gcnew System::Windows::Forms::Label());
			this->lblBin1 = (gcnew System::Windows::Forms::Label());
			this->radioHex = (gcnew System::Windows::Forms::RadioButton());
			this->radioDec = (gcnew System::Windows::Forms::RadioButton());
			this->radioOct = (gcnew System::Windows::Forms::RadioButton());
			this->radioBin = (gcnew System::Windows::Forms::RadioButton());
			this->lblBin2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblOperation
			// 
			this->lblOperation->AutoSize = true;
			this->lblOperation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOperation->Location = System::Drawing::Point(124, 9);
			this->lblOperation->Name = L"lblOperation";
			this->lblOperation->Size = System::Drawing::Size(13, 13);
			this->lblOperation->TabIndex = 1;
			this->lblOperation->Text = L"0";
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(16, 94);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(35, 35);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(16, 135);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(35, 35);
			this->btn4->TabIndex = 2;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(16, 176);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(35, 35);
			this->btn1->TabIndex = 3;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(57, 94);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(35, 35);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(98, 94);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(35, 35);
			this->btn9->TabIndex = 5;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(57, 135);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(35, 35);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(98, 135);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(35, 35);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(57, 176);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(35, 35);
			this->btn2->TabIndex = 8;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(98, 176);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(35, 35);
			this->btn3->TabIndex = 9;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(57, 217);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(35, 35);
			this->btn0->TabIndex = 10;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btnMul
			// 
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(139, 94);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(35, 35);
			this->btnMul->TabIndex = 11;
			this->btnMul->Text = L"×";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &MainCalculator::Arthops);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(139, 135);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(35, 35);
			this->btnSub->TabIndex = 12;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MainCalculator::Arthops);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(139, 176);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(35, 35);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainCalculator::Arthops);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(139, 54);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(35, 35);
			this->btnDiv->TabIndex = 14;
			this->btnDiv->Text = L"÷";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MainCalculator::Arthops);
			// 
			// btnEqu
			// 
			this->btnEqu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqu->Location = System::Drawing::Point(139, 217);
			this->btnEqu->Name = L"btnEqu";
			this->btnEqu->Size = System::Drawing::Size(35, 35);
			this->btnEqu->TabIndex = 15;
			this->btnEqu->Text = L"=";
			this->btnEqu->UseVisualStyleBackColor = true;
			this->btnEqu->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Equals);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusMinus->Location = System::Drawing::Point(16, 216);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(35, 35);
			this->btnPlusMinus->TabIndex = 16;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MainCalculator::btnPlusMinus_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(98, 216);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(35, 35);
			this->btnDecimal->TabIndex = 17;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MainCalculator::btn_DecimalP);
			// 
			// btn_Clear
			// 
			this->btn_Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Clear->Location = System::Drawing::Point(57, 55);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(35, 35);
			this->btn_Clear->TabIndex = 18;
			this->btn_Clear->Text = L"C";
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &MainCalculator::btnClear_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::Control;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 24);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ReadOnly = true;
			this->txtDisplay->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtDisplay->Size = System::Drawing::Size(163, 24);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackspace->Location = System::Drawing::Point(98, 54);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(35, 35);
			this->btnBackspace->TabIndex = 19;
			this->btnBackspace->Text = L"Del";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &MainCalculator::btnBackspace_Click);
			// 
			// btnOR
			// 
			this->btnOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOR->Location = System::Drawing::Point(180, 135);
			this->btnOR->Name = L"btnOR";
			this->btnOR->Size = System::Drawing::Size(35, 35);
			this->btnOR->TabIndex = 20;
			this->btnOR->Text = L"OR";
			this->btnOR->UseVisualStyleBackColor = true;
			this->btnOR->Click += gcnew System::EventHandler(this, &MainCalculator::BinaryOps);
			// 
			// btnXOR
			// 
			this->btnXOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXOR->Location = System::Drawing::Point(180, 94);
			this->btnXOR->Name = L"btnXOR";
			this->btnXOR->Size = System::Drawing::Size(35, 35);
			this->btnXOR->TabIndex = 21;
			this->btnXOR->Text = L"XOR";
			this->btnXOR->UseVisualStyleBackColor = true;
			this->btnXOR->Click += gcnew System::EventHandler(this, &MainCalculator::BinaryOps);
			// 
			// btnNOT
			// 
			this->btnNOT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNOT->Location = System::Drawing::Point(180, 175);
			this->btnNOT->Name = L"btnNOT";
			this->btnNOT->Size = System::Drawing::Size(35, 35);
			this->btnNOT->TabIndex = 22;
			this->btnNOT->Text = L"NOT";
			this->btnNOT->UseVisualStyleBackColor = true;
			this->btnNOT->Click += gcnew System::EventHandler(this, &MainCalculator::BinaryOps);
			// 
			// btnAND
			// 
			this->btnAND->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAND->Location = System::Drawing::Point(180, 216);
			this->btnAND->Name = L"btnAND";
			this->btnAND->Size = System::Drawing::Size(35, 35);
			this->btnAND->TabIndex = 23;
			this->btnAND->Text = L"AND";
			this->btnAND->UseVisualStyleBackColor = true;
			this->btnAND->Click += gcnew System::EventHandler(this, &MainCalculator::BinaryOps);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(325, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"9";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->standardToolStripMenuItem,
					this->programmersToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(27, 20);
			this->fileToolStripMenuItem->Text = L"≡";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"standardToolStripMenuItem.Image")));
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainCalculator::standardToolStripMenuItem_Click);
			// 
			// programmersToolStripMenuItem
			// 
			this->programmersToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"programmersToolStripMenuItem.Image")));
			this->programmersToolStripMenuItem->Name = L"programmersToolStripMenuItem";
			this->programmersToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->programmersToolStripMenuItem->Text = L"Programmer";
			this->programmersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainCalculator::programmersToolStripMenuItem_Click);
			// 
			// btnMOD
			// 
			this->btnMOD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMOD->Location = System::Drawing::Point(16, 54);
			this->btnMOD->Name = L"btnMOD";
			this->btnMOD->Size = System::Drawing::Size(35, 35);
			this->btnMOD->TabIndex = 25;
			this->btnMOD->Text = L"MOD";
			this->btnMOD->UseVisualStyleBackColor = true;
			this->btnMOD->Click += gcnew System::EventHandler(this, &MainCalculator::Arthops);
			// 
			// btnF
			// 
			this->btnF->Location = System::Drawing::Point(262, 216);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(35, 35);
			this->btnF->TabIndex = 31;
			this->btnF->Text = L"F";
			this->btnF->UseVisualStyleBackColor = true;
			this->btnF->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btnD
			// 
			this->btnD->Location = System::Drawing::Point(262, 175);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(35, 35);
			this->btnD->TabIndex = 30;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = true;
			this->btnD->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btnB
			// 
			this->btnB->Location = System::Drawing::Point(262, 135);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(35, 35);
			this->btnB->TabIndex = 29;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = true;
			this->btnB->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btnE
			// 
			this->btnE->Location = System::Drawing::Point(221, 216);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(35, 35);
			this->btnE->TabIndex = 28;
			this->btnE->Text = L"E";
			this->btnE->UseVisualStyleBackColor = true;
			this->btnE->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btnC
			// 
			this->btnC->Location = System::Drawing::Point(221, 175);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(35, 35);
			this->btnC->TabIndex = 27;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// btnA
			// 
			this->btnA->Location = System::Drawing::Point(221, 134);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(35, 35);
			this->btnA->TabIndex = 26;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = true;
			this->btnA->Click += gcnew System::EventHandler(this, &MainCalculator::btn_Nums);
			// 
			// lblHex
			// 
			this->lblHex->AutoSize = true;
			this->lblHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHex->Location = System::Drawing::Point(232, 18);
			this->lblHex->Name = L"lblHex";
			this->lblHex->Size = System::Drawing::Size(13, 13);
			this->lblHex->TabIndex = 38;
			this->lblHex->Text = L"0";
			// 
			// lblDec
			// 
			this->lblDec->AutoSize = true;
			this->lblDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDec->Location = System::Drawing::Point(232, 37);
			this->lblDec->Name = L"lblDec";
			this->lblDec->Size = System::Drawing::Size(13, 13);
			this->lblDec->TabIndex = 39;
			this->lblDec->Text = L"0";
			// 
			// lblOct
			// 
			this->lblOct->AutoSize = true;
			this->lblOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOct->Location = System::Drawing::Point(232, 56);
			this->lblOct->Name = L"lblOct";
			this->lblOct->Size = System::Drawing::Size(13, 13);
			this->lblOct->TabIndex = 40;
			this->lblOct->Text = L"0";
			// 
			// lblBin
			// 
			this->lblBin->AutoSize = true;
			this->lblBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBin->Location = System::Drawing::Point(232, 74);
			this->lblBin->Name = L"lblBin";
			this->lblBin->Size = System::Drawing::Size(13, 13);
			this->lblBin->TabIndex = 41;
			this->lblBin->Text = L"0";
			// 
			// lblBin1
			// 
			this->lblBin1->AutoSize = true;
			this->lblBin1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBin1->Location = System::Drawing::Point(14, 25);
			this->lblBin1->Name = L"lblBin1";
			this->lblBin1->Size = System::Drawing::Size(0, 12);
			this->lblBin1->TabIndex = 46;
			// 
			// radioHex
			// 
			this->radioHex->AutoSize = true;
			this->radioHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioHex->Location = System::Drawing::Point(184, 18);
			this->radioHex->Name = L"radioHex";
			this->radioHex->Size = System::Drawing::Size(42, 13);
			this->radioHex->TabIndex = 47;
			this->radioHex->Text = L"HEX";
			this->radioHex->UseVisualStyleBackColor = true;
			this->radioHex->CheckedChanged += gcnew System::EventHandler(this, &MainCalculator::radioHex_CheckedChanged);
			// 
			// radioDec
			// 
			this->radioDec->AutoSize = true;
			this->radioDec->Checked = true;
			this->radioDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioDec->Location = System::Drawing::Point(184, 37);
			this->radioDec->Name = L"radioDec";
			this->radioDec->Size = System::Drawing::Size(43, 13);
			this->radioDec->TabIndex = 48;
			this->radioDec->TabStop = true;
			this->radioDec->Text = L"DEC";
			this->radioDec->UseVisualStyleBackColor = true;
			this->radioDec->CheckedChanged += gcnew System::EventHandler(this, &MainCalculator::radioDec_CheckedChanged);
			// 
			// radioOct
			// 
			this->radioOct->AutoSize = true;
			this->radioOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioOct->Location = System::Drawing::Point(184, 56);
			this->radioOct->Name = L"radioOct";
			this->radioOct->Size = System::Drawing::Size(43, 13);
			this->radioOct->TabIndex = 49;
			this->radioOct->Text = L"OCT";
			this->radioOct->UseVisualStyleBackColor = true;
			this->radioOct->CheckedChanged += gcnew System::EventHandler(this, &MainCalculator::radioOct_CheckedChanged);
			// 
			// radioBin
			// 
			this->radioBin->AutoSize = true;
			this->radioBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioBin->Location = System::Drawing::Point(184, 74);
			this->radioBin->Name = L"radioBin";
			this->radioBin->Size = System::Drawing::Size(39, 13);
			this->radioBin->TabIndex = 50;
			this->radioBin->Text = L"BIN";
			this->radioBin->UseVisualStyleBackColor = true;
			this->radioBin->CheckedChanged += gcnew System::EventHandler(this, &MainCalculator::radioBin_CheckedChanged);
			// 
			// lblBin2
			// 
			this->lblBin2->AutoSize = true;
			this->lblBin2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBin2->Location = System::Drawing::Point(60, 33);
			this->lblBin2->Name = L"lblBin2";
			this->lblBin2->Size = System::Drawing::Size(0, 12);
			this->lblBin2->TabIndex = 51;
			// 
			// MainCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 259);
			this->Controls->Add(this->lblBin2);
			this->Controls->Add(this->radioBin);
			this->Controls->Add(this->radioOct);
			this->Controls->Add(this->radioDec);
			this->Controls->Add(this->radioHex);
			this->Controls->Add(this->lblBin1);
			this->Controls->Add(this->lblBin);
			this->Controls->Add(this->lblOct);
			this->Controls->Add(this->lblDec);
			this->Controls->Add(this->lblHex);
			this->Controls->Add(this->btnF);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->btnMOD);
			this->Controls->Add(this->btnAND);
			this->Controls->Add(this->btnNOT);
			this->Controls->Add(this->btnXOR);
			this->Controls->Add(this->btnOR);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnEqu);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblOperation);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainCalculator";
			this->Text = L"MainCalculator";
			this->Load += gcnew System::EventHandler(this, &MainCalculator::MainCalculator_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double Num1 = 0; // First Number
		double Num2 = 0; // Second Number
		double result = 0; // Result

		String ^ hex1;
				
		char op;

		String ^ operatorType; // Operator E.G : + or -
		String ^ Mode = "modeDec";
		String ^ bNumber1; // First Binary
		String ^ bNumber2; // Second Binary 
		String ^ valueConverted;

private: System::Void btn_Nums(System::Object^  sender, System::EventArgs^  e) {
	Conversions conv;

	Button ^ Number = safe_cast <Button ^> (sender); // Declare and send whatever is on the button E.G: 1 or 7

	if (txtDisplay->Text == "0") 
	{ 
		txtDisplay->Text = Number->Text; 
	}
	else 
	{
		txtDisplay->Text = txtDisplay->Text + Number->Text; 
	}

	if (Mode == "modeDec")
	{
		// **Retrieve and Display 'DEC' value
		lblDec->Text = System::Convert::ToString(txtDisplay->Text);
		// **Retrieve and Display 'BIN' Value
		valueConverted = msclr::interop::marshal_as<System::String^>(conv.decToBinary(System::Convert::ToInt32(txtDisplay->Text)));
		lblBin->Text = valueConverted;
		// **Retrieve and Display 'HEX' Value
		valueConverted = msclr::interop::marshal_as<System::String^>(conv.decToHexadecimal(System::Convert::ToInt32(txtDisplay->Text)));
		lblHex->Text = valueConverted;
		lblHex->Text = lblHex->Text->ToUpper();
		// **Retrieve and Display 'OCT' Value
		valueConverted = msclr::interop::marshal_as<System::String^>(conv.decToOct(System::Convert::ToInt32(txtDisplay->Text)));
		lblOct->Text = valueConverted;
	}
	else if (Mode == "modeBin")
	{
		
	    String^ decimalValue = msclr::interop::marshal_as<System::String^>(conv.binaryToDecimal(System::Convert::ToInt32(txtDisplay->Text)));
		lblDec->Text = decimalValue;
		lblBin->Text = txtDisplay->Text;
		lblHex->Text = msclr::interop::marshal_as<String^>(conv.decToHexadecimal(System::Convert::ToInt32(decimalValue)));
		lblHex->Text = lblHex->Text->ToUpper();
		lblOct->Text = msclr::interop::marshal_as<String^>(conv.decToOct(System::Convert::ToInt32(decimalValue)));
	}	
	else if (Mode == "modeOct")
	{
		string b = conv.octToDecimal(System::Convert::ToInt32(txtDisplay->Text));
		int decimalNumber = std::stoi(b);

		lblDec->Text = Convert::ToString(decimalNumber);
		lblOct->Text = txtDisplay->Text;
		lblHex->Text = marshal_as<String^>(conv.decToHexadecimal(decimalNumber));
		lblBin->Text = marshal_as<String^>(conv.decToBinary(decimalNumber));

	}
}
private: System::Void btn_Letters(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void Arthops(System::Object^  sender, System::EventArgs^  e) {
	//**Retrieve Operators for Numerical Calculations**
	Button ^ ArithmeticOps = safe_cast <Button ^> (sender);	
	
		Num1 = Double::Parse(txtDisplay->Text); // Assign first Value into leftValue

		txtDisplay->Text = "";
		operatorType = ArithmeticOps->Text;

		lblOperation->Text = System::Convert::ToString(Num1) + " " + operatorType;
		
}
private: System::Void BinaryOps(System::Object^  sender, System::EventArgs^  e) {
	Calculations calc;
	
	//**Retrieve Operators for Binary Calculations**
	Button ^ BinaryOps = safe_cast <Button^> (sender);

	bNumber1 = txtDisplay->Text; 

	txtDisplay->Text = "";
	operatorType = BinaryOps->Text;

	lblBin1->Text = bNumber1 + " " + operatorType;

	if (operatorType == "NOT") { op = NULL; op = 'n'; txtDisplay->Text = Convert::ToString(calc.binaryNotOp(bNumber1, op)); }
}
	private: System::Void btn_Equals(System::Object^  sender, System::EventArgs^  e) {
		Calculations calc;
		Conversions conv;


		// Assign Operator type to 'op' for calculations.
		if (Mode == "modeDec" || Mode == "modeOct")
		{
			lblOperation->Text = "";
			Num2 = Double::Parse(txtDisplay->Text);

			if (operatorType == "+") { op = NULL; op = '+'; }
			else if (operatorType == "-") { op = NULL; op = '-'; }
			else if (operatorType == "×") { op = NULL; op = '×'; }
			else if (operatorType == "÷") { op = NULL; op = '/'; }
			else if (operatorType == "MOD") { op = NULL; op = '%'; }

			// ** RESULTS **
			result = calc.equations(op, Num1, Num2); // **Retrieve Result**
			txtDisplay->Text = System::Convert::ToString(result); // ** Display Equation of Two Values

			if (Mode == "modeDec")
			{
				// ** Converting Result to Binary, Octal, Decimal and Hexadecimal ** 
				lblDec->Text = System::Convert::ToString(result);
				if (result < 10000)
				{
					valueConverted = msclr::interop::marshal_as<System::String^>(conv.decToBinary(System::Convert::ToInt32(result)));
					lblBin->Text = valueConverted;
				}
				else { MessageBox::Show("Max Binary Conversion is 10,000\n"); }
				valueConverted = msclr::interop::marshal_as<System::String^>(conv.decToHexadecimal(System::Convert::ToInt32(result)));
				lblHex->Text = valueConverted, lblHex->Text = lblHex->Text->ToUpper();
				valueConverted = msclr::interop::marshal_as<System::String^>(conv.decToOct(System::Convert::ToInt32(result)));
				lblOct->Text = valueConverted;
			}
			else
			{
				string conversion = conv.octToDecimal(result);
				int decimalNumber = std::stoi(conversion);			

				lblDec->Text = Convert::ToString(decimalNumber);
				lblOct->Text = txtDisplay->Text;
				lblHex->Text = marshal_as<String^>(conv.decToHexadecimal(result));
				lblBin->Text = marshal_as<String^>(conv.decToBinary(result));
			}
		}
		else if (Mode == "modeBin")
		{
			bNumber2 = txtDisplay->Text; lblBin2->Text = " " + bNumber2;

			//if (operatorType == "NOT") { op = NULL; op = 'n'; txtDisplay->Text = Convert::ToString(calc.binaryNotOp(bNumber1, op)); }
			if (operatorType == "OR") { op = NULL; op = 'o'; }
			else if (operatorType == "XOR") { op = NULL; op = 'x'; }
			else if (operatorType == "AND") { op = NULL; op = 'a'; }

			// ** RESULTS **
			string binaryValue = conv.decToBinary(calc.binaryEquations(bNumber1, bNumber2, op));
			txtDisplay->Text = msclr::interop::marshal_as<System::String^>(binaryValue);
			result = Double::Parse(txtDisplay->Text);

			// ** Converting Result to Binary, Octal, Decimal and Hexadecimal ** 
			String ^ decimalValue = msclr::interop::marshal_as<System::String^>(conv.binaryToDecimal(System::Convert::ToInt32(result)));
			lblDec->Text = decimalValue;
			lblBin->Text = msclr::interop::marshal_as<System::String^>(binaryValue);
			lblHex->Text = msclr::interop::marshal_as<System::String^>(conv.decToHexadecimal(System::Convert::ToInt32(decimalValue)));
			lblOct->Text = msclr::interop::marshal_as<System::String^>(conv.decToOct(System::Convert::ToInt32(decimalValue)));
		}
		else if (Mode == "modeHex")
		{
			string x = msclr::interop::marshal_as<std::string>(txtDisplay->Text);
			string y = conv.hexadecimalToDecimal(x);
			int decimalNumber = std::stoi(y);

			lblDec->Text = Convert::ToString(decimalNumber);
			lblOct->Text = marshal_as<String^>(conv.decToOct(decimalNumber));
			lblHex->Text = txtDisplay->Text;
			lblBin->Text = marshal_as<String^>(conv.decToBinary(decimalNumber));
		}			  
	}

		 
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
	// ** CLEAR VALUES **
	txtDisplay->Text = "0";
	lblOperation->Text = "0";
	lblDec->Text = "0", lblBin->Text = "0", lblHex->Text = "0", lblOct->Text = "0";
	Num1 = 0, Num2 = 0, bNumber1 = "0", bNumber2 = "0";
	lblBin1->Text = " ", lblBin2->Text = " ";
}

private: System::Void btn_DecimalP(System::Object^  sender, System::EventArgs^  e) {
	// ** ADD A DECIMAL POINT **
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnPlusMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (!txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}	
}
private: System::Void btnBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtDisplay->TextLength > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Substring(0, (txtDisplay->TextLength - 1));
	}
}
private: System::Void MainCalculator_Load(System::Object^  sender, System::EventArgs^  e) {
	this->Width = 195;
	this->Height = 298;
}
private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Width = 195;
	this->Height = 298;
}
private: System::Void programmersToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Width = 341;
	this->Height = 298;
}
private: System::Void radioHex_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//**Set Current Mode**
	Mode = "modeHex"; 
	btnDecimal->Enabled = false, btnA->Enabled = true, btnB->Enabled = true, btnC->Enabled = true;
	btnD->Enabled = true, btnE->Enabled = true, btnF->Enabled = true, btnXOR->Enabled = false; 
	btnOR->Enabled = false, btnAND->Enabled = false, btnNOT->Enabled = false;
	btnDiv->Enabled = false, btnMul->Enabled = false, btnAdd->Enabled = false, btnSub->Enabled = false;

	btn7->Enabled = true, btn6->Enabled = true, btn5->Enabled = true, btn4->Enabled = true;
	btn3->Enabled = true, btn2->Enabled = true, btn1->Enabled = true, btn8->Enabled = true;
	btn9->Enabled = true;
}
private: System::Void radioDec_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	Mode = "modeDec"; 
	btnA->Enabled = false, btnB->Enabled = false, btnC->Enabled = false, btnD->Enabled = false;
	btnE->Enabled = false, btnF->Enabled = false; btnXOR->Enabled = false, btnOR->Enabled = false;
	btnAND->Enabled = false, btnNOT->Enabled = false;

	btn7->Enabled = true, btn6->Enabled = true, btn5->Enabled = true, btn4->Enabled = true;
	btn3->Enabled = true, btn2->Enabled = true, btn1->Enabled = true, btn8->Enabled = true;
	btn9->Enabled = true; btnDiv->Enabled = true, btnMul->Enabled = true, btnSub->Enabled = true, btnAdd->Enabled = true;
	btnDecimal->Enabled = true;
}
private: System::Void radioOct_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	Mode = "modeOct"; 
	btnDecimal->Enabled = false; btn8->Enabled = false, btn9->Enabled = false;
	btnA->Enabled = false, btnB->Enabled = false, btnC->Enabled = false, btnD->Enabled = false;
	btnE->Enabled = false, btnF->Enabled = false; btnXOR->Enabled = false, btnOR->Enabled = false;
	btnAND->Enabled = false, btnNOT->Enabled = false;

	btn7->Enabled = true, btn6->Enabled = true, btn5->Enabled = true, btn4->Enabled = true;
	btn3->Enabled = true, btn2->Enabled = true, btn1->Enabled = true, btnDiv->Enabled = true; 
	btnMul->Enabled = true, btnSub->Enabled = true, btnAdd->Enabled = true, btnDecimal->Enabled = true;
}
private: System::Void radioBin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	Mode = "modeBin"; 
	btnXOR->Enabled = true, btnOR->Enabled = true, btnAND->Enabled = true, btnNOT->Enabled = true;

	btnA->Enabled = false, btnB->Enabled = false, btnC->Enabled = false, btnD->Enabled = false;
	btnE->Enabled = false, btnF->Enabled = false, btn2->Enabled = false, btn3->Enabled = false;
	btn4->Enabled = false, btn5->Enabled = false, btn6->Enabled = false, btn7->Enabled = false;
	btn8->Enabled = false, btn9->Enabled = false; btnMOD->Enabled = false;
}

};
}