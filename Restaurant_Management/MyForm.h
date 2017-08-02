#pragma once

namespace Restaurant_Management {

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
			timer1->Start();
			cmbCurrencyList->Text = "Choose currency";
			cmbCurrencyList->Items->Add("European Union");//EUR
			cmbCurrencyList->Items->Add("USA");			  //USA
			cmbCurrencyList->Items->Add("United Kingdom");//GPB
			cmbCurrencyList->Items->Add("Switzerland");   //CHF
			cmbCurrencyList->Items->Add("Sweden");        //SEK
			cmbCurrencyList->Items->Add("Australia");     //AUD
			cmbCurrencyList->Items->Add("Canada");        //CAD 
			cmbCurrencyList->Items->Add("Czech Republic");//CZK
			cmbCurrencyList->Items->Add("Japan");         //JPY
			cmbCurrencyList->Items->Add("Russia");        //RUB
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
	private: System::Windows::Forms::Panel^  panel5;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TabControl^  TabWindow;
	private: System::Windows::Forms::TabPage^  tabCalculator;

	private: System::Windows::Forms::TabPage^  tabReceipt;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  helpToolStripButton;
	private: System::Windows::Forms::RichTextBox^  txtField;

	private: System::Windows::Forms::Button^  btnDivide;
	private: System::Windows::Forms::Button^  btnMultiply;
	private: System::Windows::Forms::Button^  btnMinus;
	private: System::Windows::Forms::Button^  btnPlus;
	private: System::Windows::Forms::Button^  btnPlusMinus;
	private: System::Windows::Forms::Button^  btnEqual;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnDot;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btnCE;
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::TextBox^  textBox;
	private: System::Windows::Forms::CheckBox^  chkFries;

	private: System::Windows::Forms::CheckBox^  chkHotDog;

	private: System::Windows::Forms::CheckBox^  chkBurger;
	private: System::Windows::Forms::NumericUpDown^  numFries;


	private: System::Windows::Forms::NumericUpDown^  numHotDog;

	private: System::Windows::Forms::NumericUpDown^  numBurger;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::NumericUpDown^  numDelivery;

	private: System::Windows::Forms::NumericUpDown^  numDrinks;


private: System::Windows::Forms::TextBox^  txtDeliveryTotal;


private: System::Windows::Forms::TextBox^  txtDrinkTotal;

private: System::Windows::Forms::TextBox^  txtMealTotal;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  txtCostTotal;

	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  txtTax;

	private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  txtSubTotal;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::CheckBox^  chkDrinks;

	private: System::Windows::Forms::Label^  lblShow;
private: System::Windows::Forms::CheckBox^  chkDelivery;

	private: System::Windows::Forms::ComboBox^  cmbCurrencyList;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::TextBox^  txtConverted;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Label^  lblDate;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btnCover;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtDeliveryTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtDrinkTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtMealTotal = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TabWindow = (gcnew System::Windows::Forms::TabControl());
			this->tabCalculator = (gcnew System::Windows::Forms::TabPage());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblShow = (gcnew System::Windows::Forms::Label());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->tabReceipt = (gcnew System::Windows::Forms::TabPage());
			this->txtField = (gcnew System::Windows::Forms::RichTextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numDelivery = (gcnew System::Windows::Forms::NumericUpDown());
			this->numDrinks = (gcnew System::Windows::Forms::NumericUpDown());
			this->numFries = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHotDog = (gcnew System::Windows::Forms::NumericUpDown());
			this->numBurger = (gcnew System::Windows::Forms::NumericUpDown());
			this->chkDelivery = (gcnew System::Windows::Forms::CheckBox());
			this->chkDrinks = (gcnew System::Windows::Forms::CheckBox());
			this->chkFries = (gcnew System::Windows::Forms::CheckBox());
			this->chkHotDog = (gcnew System::Windows::Forms::CheckBox());
			this->chkBurger = (gcnew System::Windows::Forms::CheckBox());
			this->btnCover = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->cmbCurrencyList = (gcnew System::Windows::Forms::ComboBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->txtConverted = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtCostTotal = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->TabWindow->SuspendLayout();
			this->tabCalculator->SuspendLayout();
			this->tabReceipt->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelivery))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDrinks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFries))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHotDog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBurger))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel5->Controls->Add(this->button24);
			this->panel5->Controls->Add(this->button23);
			this->panel5->Controls->Add(this->button21);
			this->panel5->Location = System::Drawing::Point(12, 878);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1610, 121);
			this->panel5->TabIndex = 4;
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(1021, 32);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(258, 58);
			this->button24->TabIndex = 0;
			this->button24->Text = L"Exit";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(275, 32);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(258, 58);
			this->button23->TabIndex = 0;
			this->button23->Text = L"Total";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(650, 32);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(258, 58);
			this->button21->TabIndex = 0;
			this->button21->Text = L"Reset";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->txtDeliveryTotal);
			this->panel2->Controls->Add(this->txtDrinkTotal);
			this->panel2->Controls->Add(this->txtMealTotal);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(12, 452);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(593, 420);
			this->panel2->TabIndex = 3;
			// 
			// txtDeliveryTotal
			// 
			this->txtDeliveryTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->txtDeliveryTotal->Location = System::Drawing::Point(413, 292);
			this->txtDeliveryTotal->Name = L"txtDeliveryTotal";
			this->txtDeliveryTotal->ReadOnly = true;
			this->txtDeliveryTotal->Size = System::Drawing::Size(120, 40);
			this->txtDeliveryTotal->TabIndex = 6;
			this->txtDeliveryTotal->TabStop = false;
			this->txtDeliveryTotal->Text = L"0";
			this->txtDeliveryTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtDrinkTotal
			// 
			this->txtDrinkTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtDrinkTotal->Location = System::Drawing::Point(413, 206);
			this->txtDrinkTotal->Name = L"txtDrinkTotal";
			this->txtDrinkTotal->ReadOnly = true;
			this->txtDrinkTotal->Size = System::Drawing::Size(120, 40);
			this->txtDrinkTotal->TabIndex = 6;
			this->txtDrinkTotal->TabStop = false;
			this->txtDrinkTotal->Text = L"0";
			this->txtDrinkTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtMealTotal
			// 
			this->txtMealTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtMealTotal->Location = System::Drawing::Point(413, 117);
			this->txtMealTotal->Name = L"txtMealTotal";
			this->txtMealTotal->ReadOnly = true;
			this->txtMealTotal->Size = System::Drawing::Size(120, 40);
			this->txtMealTotal->TabIndex = 6;
			this->txtMealTotal->TabStop = false;
			this->txtMealTotal->Text = L"0";
			this->txtMealTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(30, 295);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(275, 31);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Total Cost of Delivery";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(30, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(254, 31);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Total Cost of Drinks";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(30, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(234, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Total Cost of Meal";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(3, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(587, 53);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cost of Service";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TabWindow
			// 
			this->TabWindow->Controls->Add(this->tabCalculator);
			this->TabWindow->Controls->Add(this->tabReceipt);
			this->TabWindow->Location = System::Drawing::Point(1237, 13);
			this->TabWindow->Name = L"TabWindow";
			this->TabWindow->SelectedIndex = 0;
			this->TabWindow->Size = System::Drawing::Size(385, 859);
			this->TabWindow->TabIndex = 7;
			// 
			// tabCalculator
			// 
			this->tabCalculator->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tabCalculator->Controls->Add(this->lblTime);
			this->tabCalculator->Controls->Add(this->lblDate);
			this->tabCalculator->Controls->Add(this->lblShow);
			this->tabCalculator->Controls->Add(this->btnDivide);
			this->tabCalculator->Controls->Add(this->btnMultiply);
			this->tabCalculator->Controls->Add(this->btnMinus);
			this->tabCalculator->Controls->Add(this->btnPlus);
			this->tabCalculator->Controls->Add(this->btnPlusMinus);
			this->tabCalculator->Controls->Add(this->btnEqual);
			this->tabCalculator->Controls->Add(this->btn3);
			this->tabCalculator->Controls->Add(this->btn6);
			this->tabCalculator->Controls->Add(this->btn9);
			this->tabCalculator->Controls->Add(this->btnC);
			this->tabCalculator->Controls->Add(this->btnDot);
			this->tabCalculator->Controls->Add(this->btn0);
			this->tabCalculator->Controls->Add(this->btn2);
			this->tabCalculator->Controls->Add(this->btn1);
			this->tabCalculator->Controls->Add(this->btn5);
			this->tabCalculator->Controls->Add(this->btn4);
			this->tabCalculator->Controls->Add(this->btn8);
			this->tabCalculator->Controls->Add(this->btn7);
			this->tabCalculator->Controls->Add(this->btnCE);
			this->tabCalculator->Controls->Add(this->btnBackspace);
			this->tabCalculator->Controls->Add(this->textBox);
			this->tabCalculator->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabCalculator->Location = System::Drawing::Point(4, 22);
			this->tabCalculator->Name = L"tabCalculator";
			this->tabCalculator->Padding = System::Windows::Forms::Padding(3);
			this->tabCalculator->Size = System::Drawing::Size(377, 833);
			this->tabCalculator->TabIndex = 0;
			this->tabCalculator->Text = L"Calculator";
			// 
			// lblTime
			// 
			this->lblTime->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 54.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblTime->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblTime->Location = System::Drawing::Point(12, 561);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(351, 118);
			this->lblTime->TabIndex = 2;
			this->lblTime->Text = L"lblTime";
			this->lblTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblDate
			// 
			this->lblDate->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblDate->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblDate->Location = System::Drawing::Point(12, 695);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(351, 66);
			this->lblDate->TabIndex = 2;
			this->lblDate->Text = L"lblDate";
			this->lblDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblShow
			// 
			this->lblShow->AutoSize = true;
			this->lblShow->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblShow->Location = System::Drawing::Point(14, 21);
			this->lblShow->Name = L"lblShow";
			this->lblShow->Size = System::Drawing::Size(0, 20);
			this->lblShow->TabIndex = 0;
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDivide->Location = System::Drawing::Point(283, 428);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(86, 86);
			this->btnDivide->TabIndex = 1;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::Op_Clicked);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMultiply->Location = System::Drawing::Point(283, 336);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(86, 86);
			this->btnMultiply->TabIndex = 1;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::Op_Clicked);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMinus->Location = System::Drawing::Point(283, 244);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(86, 86);
			this->btnMinus->TabIndex = 1;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::Op_Clicked);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPlus->Location = System::Drawing::Point(283, 152);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(86, 86);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::Op_Clicked);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnPlusMinus->Location = System::Drawing::Point(283, 60);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(86, 86);
			this->btnPlusMinus->TabIndex = 1;
			this->btnPlusMinus->Text = L"+/-";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMinus_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnEqual->Location = System::Drawing::Point(191, 428);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(86, 86);
			this->btnEqual->TabIndex = 1;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn3->Location = System::Drawing::Point(191, 336);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(86, 86);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn6->Location = System::Drawing::Point(191, 244);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(86, 86);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn9->Location = System::Drawing::Point(191, 152);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(86, 86);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnC->Location = System::Drawing::Point(191, 60);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(86, 86);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnDot->Location = System::Drawing::Point(99, 428);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(86, 86);
			this->btnDot->TabIndex = 1;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn0->Location = System::Drawing::Point(7, 428);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(86, 86);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn2->Location = System::Drawing::Point(99, 336);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(86, 86);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn1->Location = System::Drawing::Point(7, 336);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(86, 86);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn5->Location = System::Drawing::Point(99, 244);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(86, 86);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn4->Location = System::Drawing::Point(7, 244);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(86, 86);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn8->Location = System::Drawing::Point(99, 152);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(86, 86);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn7->Location = System::Drawing::Point(7, 152);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(86, 86);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btnNum_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Source Code Pro", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCE->Location = System::Drawing::Point(99, 60);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(86, 86);
			this->btnCE->TabIndex = 1;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Webdings", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->Location = System::Drawing::Point(7, 60);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(86, 86);
			this->btnBackspace->TabIndex = 1;
			this->btnBackspace->Text = L"7";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &MyForm::btnBackspace_Click);
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox->Location = System::Drawing::Point(7, 7);
			this->textBox->Name = L"textBox";
			this->textBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox->Size = System::Drawing::Size(362, 47);
			this->textBox->TabIndex = 0;
			this->textBox->Text = L"0";
			this->textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			// 
			// tabReceipt
			// 
			this->tabReceipt->Controls->Add(this->txtField);
			this->tabReceipt->Controls->Add(this->toolStrip1);
			this->tabReceipt->Location = System::Drawing::Point(4, 22);
			this->tabReceipt->Name = L"tabReceipt";
			this->tabReceipt->Padding = System::Windows::Forms::Padding(3);
			this->tabReceipt->Size = System::Drawing::Size(377, 833);
			this->tabReceipt->TabIndex = 1;
			this->tabReceipt->Text = L"Receipt";
			this->tabReceipt->UseVisualStyleBackColor = true;
			// 
			// txtField
			// 
			this->txtField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtField->Location = System::Drawing::Point(3, 32);
			this->txtField->Name = L"txtField";
			this->txtField->Size = System::Drawing::Size(371, 801);
			this->txtField->TabIndex = 1;
			this->txtField->Text = L"";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator1, this->helpToolStripButton
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(371, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(23, 22);
			this->newToolStripButton->Text = L"&New";
			this->newToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::newToolStripButton_Click);
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(23, 22);
			this->openToolStripButton->Text = L"&Open";
			this->openToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::openToolStripButton_Click);
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(23, 22);
			this->saveToolStripButton->Text = L"&Save";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripButton_Click);
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(23, 22);
			this->printToolStripButton->Text = L"&Print";
			this->printToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::printToolStripButton_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(23, 22);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(23, 22);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(23, 22);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(23, 22);
			this->helpToolStripButton->Text = L"He&lp";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->comboBox6);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->numDelivery);
			this->panel1->Controls->Add(this->numDrinks);
			this->panel1->Controls->Add(this->numFries);
			this->panel1->Controls->Add(this->numHotDog);
			this->panel1->Controls->Add(this->numBurger);
			this->panel1->Controls->Add(this->chkDelivery);
			this->panel1->Controls->Add(this->chkDrinks);
			this->panel1->Controls->Add(this->chkFries);
			this->panel1->Controls->Add(this->chkHotDog);
			this->panel1->Controls->Add(this->chkBurger);
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(12, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(593, 420);
			this->panel1->TabIndex = 4;
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(225, 82);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(172, 33);
			this->comboBox6->TabIndex = 5;
			this->comboBox6->TabStop = false;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(225, 135);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(172, 33);
			this->comboBox3->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(225, 190);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(172, 33);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(225, 244);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 33);
			this->comboBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(3, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(587, 53);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Meal Selection";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numDelivery
			// 
			this->numDelivery->Enabled = false;
			this->numDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numDelivery->Location = System::Drawing::Point(413, 299);
			this->numDelivery->Name = L"numDelivery";
			this->numDelivery->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numDelivery->Size = System::Drawing::Size(120, 31);
			this->numDelivery->TabIndex = 1;
			this->numDelivery->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numDrinks
			// 
			this->numDrinks->Enabled = false;
			this->numDrinks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numDrinks->Location = System::Drawing::Point(413, 244);
			this->numDrinks->Name = L"numDrinks";
			this->numDrinks->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numDrinks->Size = System::Drawing::Size(120, 31);
			this->numDrinks->TabIndex = 1;
			this->numDrinks->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numFries
			// 
			this->numFries->Enabled = false;
			this->numFries->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numFries->Location = System::Drawing::Point(413, 190);
			this->numFries->Name = L"numFries";
			this->numFries->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numFries->Size = System::Drawing::Size(120, 31);
			this->numFries->TabIndex = 1;
			this->numFries->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numHotDog
			// 
			this->numHotDog->Enabled = false;
			this->numHotDog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numHotDog->Location = System::Drawing::Point(413, 135);
			this->numHotDog->Name = L"numHotDog";
			this->numHotDog->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numHotDog->Size = System::Drawing::Size(120, 31);
			this->numHotDog->TabIndex = 1;
			this->numHotDog->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numBurger
			// 
			this->numBurger->Enabled = false;
			this->numBurger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numBurger->Location = System::Drawing::Point(413, 82);
			this->numBurger->Name = L"numBurger";
			this->numBurger->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numBurger->Size = System::Drawing::Size(120, 31);
			this->numBurger->TabIndex = 1;
			this->numBurger->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// chkDelivery
			// 
			this->chkDelivery->AutoSize = true;
			this->chkDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkDelivery->ForeColor = System::Drawing::Color::White;
			this->chkDelivery->Location = System::Drawing::Point(36, 301);
			this->chkDelivery->Name = L"chkDelivery";
			this->chkDelivery->Size = System::Drawing::Size(171, 29);
			this->chkDelivery->TabIndex = 0;
			this->chkDelivery->Text = L"Home Delivery";
			this->chkDelivery->UseVisualStyleBackColor = true;
			this->chkDelivery->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkDelivery_CheckedChanged);
			// 
			// chkDrinks
			// 
			this->chkDrinks->AutoSize = true;
			this->chkDrinks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkDrinks->ForeColor = System::Drawing::Color::White;
			this->chkDrinks->Location = System::Drawing::Point(36, 244);
			this->chkDrinks->Name = L"chkDrinks";
			this->chkDrinks->Size = System::Drawing::Size(92, 29);
			this->chkDrinks->TabIndex = 0;
			this->chkDrinks->Text = L"Drinks";
			this->chkDrinks->UseVisualStyleBackColor = true;
			this->chkDrinks->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkDrinks_CheckedChanged);
			// 
			// chkFries
			// 
			this->chkFries->AutoSize = true;
			this->chkFries->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkFries->ForeColor = System::Drawing::Color::White;
			this->chkFries->Location = System::Drawing::Point(36, 190);
			this->chkFries->Name = L"chkFries";
			this->chkFries->Size = System::Drawing::Size(79, 29);
			this->chkFries->TabIndex = 0;
			this->chkFries->Text = L"Fries";
			this->chkFries->UseVisualStyleBackColor = true;
			this->chkFries->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkFries_CheckedChanged);
			// 
			// chkHotDog
			// 
			this->chkHotDog->AutoSize = true;
			this->chkHotDog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkHotDog->ForeColor = System::Drawing::Color::White;
			this->chkHotDog->Location = System::Drawing::Point(36, 135);
			this->chkHotDog->Name = L"chkHotDog";
			this->chkHotDog->Size = System::Drawing::Size(110, 29);
			this->chkHotDog->TabIndex = 0;
			this->chkHotDog->Text = L"Hot-Dog";
			this->chkHotDog->UseVisualStyleBackColor = true;
			this->chkHotDog->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkHotDog_CheckedChanged);
			// 
			// chkBurger
			// 
			this->chkBurger->AutoSize = true;
			this->chkBurger->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->chkBurger->ForeColor = System::Drawing::Color::White;
			this->chkBurger->Location = System::Drawing::Point(36, 82);
			this->chkBurger->Name = L"chkBurger";
			this->chkBurger->Size = System::Drawing::Size(95, 29);
			this->chkBurger->TabIndex = 0;
			this->chkBurger->Text = L"Burger";
			this->chkBurger->UseVisualStyleBackColor = true;
			this->chkBurger->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkBurger_CheckedChanged);
			// 
			// btnCover
			// 
			this->btnCover->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnCover->Location = System::Drawing::Point(4, 60);
			this->btnCover->Name = L"btnCover";
			this->btnCover->Size = System::Drawing::Size(585, 356);
			this->btnCover->TabIndex = 7;
			this->btnCover->Text = L"Currency Converter";
			this->btnCover->UseVisualStyleBackColor = true;
			this->btnCover->Click += gcnew System::EventHandler(this, &MyForm::btnCover_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Controls->Add(this->btnCover);
			this->panel3->Controls->Add(this->cmbCurrencyList);
			this->panel3->Controls->Add(this->btnClose);
			this->panel3->Controls->Add(this->btnConvert);
			this->panel3->Controls->Add(this->lblDisplay);
			this->panel3->Controls->Add(this->txtConverted);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(623, 13);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(593, 420);
			this->panel3->TabIndex = 6;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// cmbCurrencyList
			// 
			this->cmbCurrencyList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->cmbCurrencyList->FormattingEnabled = true;
			this->cmbCurrencyList->Location = System::Drawing::Point(115, 150);
			this->cmbCurrencyList->Name = L"cmbCurrencyList";
			this->cmbCurrencyList->Size = System::Drawing::Size(349, 41);
			this->cmbCurrencyList->Sorted = true;
			this->cmbCurrencyList->TabIndex = 0;
			this->cmbCurrencyList->TabStop = false;
			// 
			// btnClose
			// 
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClose->Location = System::Drawing::Point(309, 322);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(258, 58);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click_1);
			// 
			// btnConvert
			// 
			this->btnConvert->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnConvert->Location = System::Drawing::Point(25, 322);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(258, 58);
			this->btnConvert->TabIndex = 0;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm::btnConvert_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblDisplay->Location = System::Drawing::Point(115, 220);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(349, 40);
			this->lblDisplay->TabIndex = 5;
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtConverted
			// 
			this->txtConverted->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtConverted->Location = System::Drawing::Point(115, 82);
			this->txtConverted->Name = L"txtConverted";
			this->txtConverted->Size = System::Drawing::Size(349, 40);
			this->txtConverted->TabIndex = 1;
			this->txtConverted->Text = L"Enter correct amount...";
			this->txtConverted->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(3, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(587, 53);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Meal Selection";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel4->Controls->Add(this->txtCostTotal);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->txtTax);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->txtSubTotal);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Location = System::Drawing::Point(623, 452);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(593, 420);
			this->panel4->TabIndex = 5;
			// 
			// txtCostTotal
			// 
			this->txtCostTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtCostTotal->Location = System::Drawing::Point(410, 291);
			this->txtCostTotal->Name = L"txtCostTotal";
			this->txtCostTotal->ReadOnly = true;
			this->txtCostTotal->Size = System::Drawing::Size(120, 40);
			this->txtCostTotal->TabIndex = 6;
			this->txtCostTotal->Text = L"0";
			this->txtCostTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(33, 295);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(148, 33);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Total Cost";
			// 
			// txtTax
			// 
			this->txtTax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtTax->Location = System::Drawing::Point(410, 206);
			this->txtTax->Name = L"txtTax";
			this->txtTax->ReadOnly = true;
			this->txtTax->Size = System::Drawing::Size(120, 40);
			this->txtTax->TabIndex = 6;
			this->txtTax->Text = L"0";
			this->txtTax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(33, 206);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 33);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Tax";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtSubTotal->Location = System::Drawing::Point(410, 117);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(120, 40);
			this->txtSubTotal->TabIndex = 6;
			this->txtSubTotal->Text = L"0";
			this->txtSubTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(33, 117);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 33);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Sub Total";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(3, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(587, 53);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Total Cost";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1634, 1011);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->TabWindow);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel5);
			this->Name = L"MyForm";
			this->Text = L"Restaurant Management";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->TabWindow->ResumeLayout(false);
			this->tabCalculator->ResumeLayout(false);
			this->tabCalculator->PerformLayout();
			this->tabReceipt->ResumeLayout(false);
			this->tabReceipt->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDelivery))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDrinks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFries))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHotDog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBurger))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double leftVal;
		double rightVal;
		double result;
		String^ arithmOperator;

	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void btnBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox->Text->Length > 0) {
		textBox->Text = textBox->Text->Remove(textBox->Text->Length - 1, 1);
}

}
private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
	//Button CE
	textBox->Text = "0";
}
private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
	//Button C
	textBox->Text = "0";
	lblShow->Text = "";
}

private: System::Void btnNum_Click(System::Object^  sender, System::EventArgs^  e) {
	//Cypher buttons
	Button^ Cypher = safe_cast<Button^>(sender);

	if (textBox->Text == "0") {
		textBox->Text = Cypher->Text;
	}
	else {
		textBox->Text = textBox->Text + Cypher->Text;
	}
}

private: System::Void Op_Clicked(System::Object^  sender, System::EventArgs^  e) {
		//Operator Button
	Button^ Operator = safe_cast<Button^>(sender);
	leftVal = Double::Parse(textBox->Text);
	textBox->Text = "";
	arithmOperator = Operator->Text;
	lblShow->Text = System::Convert::ToString(leftVal) + " " + arithmOperator;
}


private: System::Void btnEqual_Click(System::Object^  sender, System::EventArgs^  e) {
	//Equal button invokes arithmetic operations
	lblShow->Text = "";
	rightVal = Double::Parse(textBox->Text);

	if (arithmOperator == "+") {
		result = leftVal + rightVal;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (arithmOperator == "-") {
		result = leftVal - rightVal;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (arithmOperator == "*") {
		result = leftVal * rightVal;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (arithmOperator == "/") {
		result = leftVal / rightVal;
		textBox->Text = System::Convert::ToString(result);
	}
}

private: System::Void textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//Default text box state. Prevents Backspace to clear text box
	if (textBox->Text == "") {
		textBox->Text = "0";
	}
}
private: System::Void btnDot_Click(System::Object^  sender, System::EventArgs^  e) {
	//Decimal number
	if (!textBox->Text->Contains(".")) {
		textBox->Text = textBox->Text + ".";
	}
}
private: System::Void btnPlusMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	//Switch sign of a number between + and -
	if (textBox->Text->Contains("-")) {
		textBox->Text = textBox->Text->Remove(0, 1);
	}
	else {
		textBox->Text = "-" + textBox->Text;
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime datetime = DateTime::Now;
	this->lblTime->Text = datetime.ToLongTimeString();
}



private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {

	double EUR = 4.2617;
	double USD = 3.6406;
	double GPB = 4.7657;
	double CHF = 3.7490;
	double SEK = 0.4470;
	double AUD = 2.8994;
	double CAD = 2.9016;
	double CZK = 0.1635;
	double JPY = 0.0327;
	double RUB = 0.0612;
	double PLN = 0;

	if (System::Double::TryParse(txtConverted->Text, PLN)) {
		PLN = Convert::ToDouble(txtConverted->Text);
	}
	else {
		lblDisplay->Text = "Enter valid amount";
		txtConverted->Text = "0";
	}

	if (cmbCurrencyList->Text == "European Union") {
		lblDisplay->Text = String::Format("{0:0.00} EUR", ((double)1 / EUR) * PLN);
	}
	if (cmbCurrencyList->Text == "USA") {
		lblDisplay->Text = String::Format("{0:0.00} USD", ((double)1 / USD) * PLN);
	}
	if (cmbCurrencyList->Text == "United Kingdom") {
		lblDisplay->Text = String::Format("{0:0.00} GPB", ((double)1 / GPB) * PLN);
	}
	if (cmbCurrencyList->Text == "Switzerland") {
		lblDisplay->Text = String::Format("{0:0.00} CHF", ((double)1 / CHF) * PLN);
	}
	if (cmbCurrencyList->Text == "Sweden") {
		lblDisplay->Text = String::Format("{0:0.00} SEK", ((double)1 / SEK) * PLN);
	}
	if (cmbCurrencyList->Text == "Australia") {
		lblDisplay->Text = String::Format("{0:0.00} AUD", ((double)1 / AUD) * PLN);
	}
	if (cmbCurrencyList->Text == "Canada") {
		lblDisplay->Text = String::Format("{0:0.00} CAD", ((double)1 / CAD) * PLN);
	}
	if (cmbCurrencyList->Text == "Czech Republic") {
		lblDisplay->Text = String::Format("{0:0.00} CZK", ((double)1 / CZK) * PLN);
	}
	if (cmbCurrencyList->Text == "Japan") {
		lblDisplay->Text = String::Format("{0:0.00} JPY", ((double)1 / JPY) * PLN);
	}
	if (cmbCurrencyList->Text == "Russia") {
		lblDisplay->Text = String::Format("{0:0.00} RUB", ((double)1 / RUB) * PLN);
	}

}
private: System::Void btnCover_Click(System::Object^  sender, System::EventArgs^  e) {
	btnCover->Visible = false;
}

private: System::Void btnClose_Click_1(System::Object^  sender, System::EventArgs^  e) {
	btnCover->Visible = true;
	txtConverted->Text = "Enter correct amount";
	cmbCurrencyList->Text = "Choose currency";

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	DateTime datetime = DateTime::Now;
	this->lblDate->Text = datetime.ToLongDateString();
}
private: System::Void newToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	txtField->Clear();
}
private: System::Void openToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

	openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All files (*.*)|*.*";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtField->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
}
private: System::Void saveToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

	saveFileDialog1->FileName = "NotepadText";
	saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All files (*.*)|*.*";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->OpenFile());
		sw->WriteLine(txtField->Text);
		sw->Close();
	}
}
private: System::Void printToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
}


private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	String^ drawString = txtField->Text;
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 20);
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
	PointF drawPoint = PointF(150.0F, 150.0F);
	e->Graphics->DrawString(drawString, drawFont, drawBrush, drawPoint);
}
private: System::Void cutToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	txtField->Cut();
}
private: System::Void copyToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	txtField->Copy();
}
private: System::Void pasteToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	txtField->Paste();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	const double cBurger_PRICE = 7;
	const double cHotDog_PRICE = 5;
	const double cFries_PRICE  = 5;
	const double cDrink_PRICE = 4.5;
	const double cDelivery_PRICE = 10;
	const double cTaxRate_PRICE = 1.23;

	Double burgerCost;
	Double hotDogCost;
	Double friesCost;
	Double drinkCost;
	Double deliveryCost;

	Int16 burgerItems;
	Int16 hotDogItems;
	Int16 friesItems;
	Int16 drinkItems;
	Int16 deliveryItems;
	
	Double burgerTotal;
	Double hotDogTotal;
	Double friesTotal;
	Double drinkTotal;
	Double mealTotal;
	Double deliveryTotal;
	Double subTotal;
	Double taxTotal;
	Double costTotal;

	if (chkBurger->Checked) {
		burgerCost = cBurger_PRICE;
		burgerItems = Int16(numBurger->Value);
		burgerTotal = burgerCost * burgerItems;
	}

	if (chkHotDog) {
		hotDogCost = cHotDog_PRICE;
		hotDogItems = Int16(numHotDog->Value);
		hotDogTotal = hotDogCost * hotDogItems;
	}
	if (chkFries->Checked) {
		friesCost = cFries_PRICE;
		friesItems = Int16(numFries->Value);
		friesTotal = friesCost * friesItems;
	}
	if (chkDrinks->Checked) {
		drinkCost = cDrink_PRICE;
		drinkItems = Int16(numDrinks->Value);
		drinkTotal = drinkCost * drinkItems;
	}
	if (chkDelivery->Checked) {
		deliveryCost = cDelivery_PRICE;
		deliveryItems = Int16(numDelivery->Value);
		deliveryTotal = deliveryCost * deliveryItems;
	}
	mealTotal = burgerTotal + hotDogTotal + friesTotal;

	txtMealTotal->Text = System::Convert::ToString(mealTotal);
	txtDrinkTotal->Text = System::Convert::ToString(drinkTotal);
	txtDeliveryTotal->Text = System::Convert::ToString(deliveryTotal);

	subTotal = mealTotal + drinkTotal + deliveryTotal;

	txtSubTotal->Text = System::Convert::ToString(subTotal);

	taxTotal = (subTotal * cTaxRate_PRICE) - subTotal;

	txtTax->Text = System::Convert::ToString(taxTotal);

	costTotal = subTotal + taxTotal;

	txtCostTotal->Text = System::Convert::ToString(costTotal);

	txtField->Clear();

	txtField->AppendText(Environment::NewLine);
	txtField->AppendText("---------------------------------------------------" + Environment::NewLine);
	txtField->AppendText("\t" + "Fast Food Restaurant" + Environment::NewLine);
	txtField->AppendText("---------------------------------------------------");
	txtField->AppendText("Time: " + "\t\t\t" + lblTime + Environment::NewLine);
	txtField->AppendText("Date: " + "\t\t\t" + lblDate + Environment::NewLine);
	if (burgerItems > 0)
		txtField->AppendText("Burgers:\t " + "\t\t" + burgerTotal + Environment::NewLine);

	if (hotDogItems > 0)
		txtField->AppendText("Hot-Dogs:\t " + "\t\t" + hotDogTotal + Environment::NewLine);

	if (friesItems > 0)
		txtField->AppendText("Friest:\t" + "\t\t" + friesTotal + Environment::NewLine);

	if (drinkItems > 0)
		txtField->AppendText("Drinks:\t" + "\t\t" + drinkTotal + Environment::NewLine);

	if (deliveryItems > 0)
		txtField->AppendText("Delivery Cost:\t" + "\t\t" + deliveryTotal + Environment::NewLine);




}


private: System::Void chkBurger_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chkBurger->Checked) {
		numBurger->Enabled = true;
	}
	else {
		numBurger->Enabled = false;
	}
}
private: System::Void chkHotDog_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chkHotDog->Checked) {
		numHotDog->Enabled = true;
	}
	else {
		numHotDog->Enabled = false;
	}
}
private: System::Void chkFries_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chkFries->Checked) {
		numFries->Enabled = true;
	}
	else {
		numFries->Enabled = false;
	}
}
private: System::Void chkDrinks_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chkDrinks->Checked) {
		numDrinks->Enabled = true;
	}
	else {
		numDrinks->Enabled = false;
	}
}
private: System::Void chkDelivery_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chkDelivery->Checked) {
		numDelivery->Enabled = true;
	}
	else {
		numHotDog->Enabled = false;
	}
}

};
}
