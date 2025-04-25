#pragma once
#include <iostream>
#include <map>
#include <msclr\marshal_cppstd.h>

namespace leks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Button^ buttonRunProcess;
	private: System::Windows::Forms::Button^ buttonClear;

	private: System::Windows::Forms::RichTextBox^ richTextBoxSource;
	private: System::Windows::Forms::RichTextBox^ richTextBoxProcessed;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Leksems;
	private: System::Windows::Forms::DataGridView^ constants_table;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Leksema;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Code1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ separators_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ identifiers_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridView^ comp_sign_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridView^ keywords_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridView^ op_sign_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



	protected:

	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonRunProcess = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->richTextBoxSource = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxProcessed = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Leksems = (gcnew System::Windows::Forms::Button());
			this->constants_table = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Leksema = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Code1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->separators_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->identifiers_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comp_sign_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keywords_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->op_sign_table = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->constants_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separators_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiers_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->comp_sign_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keywords_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op_sign_table))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonRunProcess
			// 
			this->buttonRunProcess->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonRunProcess->Location = System::Drawing::Point(993, 114);
			this->buttonRunProcess->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonRunProcess->Name = L"buttonRunProcess";
			this->buttonRunProcess->Size = System::Drawing::Size(180, 37);
			this->buttonRunProcess->TabIndex = 2;
			this->buttonRunProcess->Text = L"Препроцессор";
			this->buttonRunProcess->UseVisualStyleBackColor = true;
			this->buttonRunProcess->Click += gcnew System::EventHandler(this, &MyForm::buttonRunProcess_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonClear->Location = System::Drawing::Point(993, 208);
			this->buttonClear->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(180, 37);
			this->buttonClear->TabIndex = 3;
			this->buttonClear->Text = L"Очистить";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// richTextBoxSource
			// 
			this->richTextBoxSource->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBoxSource->Location = System::Drawing::Point(12, 45);
			this->richTextBoxSource->Name = L"richTextBoxSource";
			this->richTextBoxSource->Size = System::Drawing::Size(397, 200);
			this->richTextBoxSource->TabIndex = 5;
			this->richTextBoxSource->Text = L"";
			// 
			// richTextBoxProcessed
			// 
			this->richTextBoxProcessed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBoxProcessed->Location = System::Drawing::Point(444, 43);
			this->richTextBoxProcessed->Name = L"richTextBoxProcessed";
			this->richTextBoxProcessed->ReadOnly = true;
			this->richTextBoxProcessed->Size = System::Drawing::Size(417, 202);
			this->richTextBoxProcessed->TabIndex = 6;
			this->richTextBoxProcessed->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(142, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 27);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Исходный код";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(559, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 27);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Обработанный код";
			// 
			// Leksems
			// 
			this->Leksems->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Leksems->Location = System::Drawing::Point(993, 161);
			this->Leksems->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Leksems->Name = L"Leksems";
			this->Leksems->Size = System::Drawing::Size(180, 37);
			this->Leksems->TabIndex = 9;
			this->Leksems->Text = L"Лексемы";
			this->Leksems->UseVisualStyleBackColor = true;
			this->Leksems->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// constants_table
			// 
			this->constants_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->constants_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->number,
					this->Leksema, this->Code1
			});
			this->constants_table->Location = System::Drawing::Point(837, 322);
			this->constants_table->Name = L"constants_table";
			this->constants_table->RowHeadersWidth = 51;
			this->constants_table->RowTemplate->Height = 24;
			this->constants_table->Size = System::Drawing::Size(336, 150);
			this->constants_table->TabIndex = 10;
			// 
			// number
			// 
			this->number->HeaderText = L"№";
			this->number->MinimumWidth = 6;
			this->number->Name = L"number";
			this->number->Width = 30;
			// 
			// Leksema
			// 
			this->Leksema->HeaderText = L"Лексема";
			this->Leksema->MinimumWidth = 6;
			this->Leksema->Name = L"Leksema";
			this->Leksema->Width = 125;
			// 
			// Code1
			// 
			this->Code1->HeaderText = L"Код";
			this->Code1->MinimumWidth = 6;
			this->Code1->Name = L"Code1";
			this->Code1->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(128, 294);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"КЛЮЧЕВЫЕ СЛОВА(1)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(932, 294);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"КОНСТАНТЫ(3)";
			// 
			// separators_table
			// 
			this->separators_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->separators_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->separators_table->Location = System::Drawing::Point(837, 541);
			this->separators_table->Name = L"separators_table";
			this->separators_table->RowHeadersWidth = 51;
			this->separators_table->RowTemplate->Height = 24;
			this->separators_table->Size = System::Drawing::Size(336, 150);
			this->separators_table->TabIndex = 14;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Лексема";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Код";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(917, 513);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 25);
			this->label8->TabIndex = 19;
			this->label8->Text = L"РАЗДЕЛИТЕЛИ(6)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(508, 294);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"ИДЕНТИФИКАТОРЫ(2)";
			// 
			// identifiers_table
			// 
			this->identifiers_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->identifiers_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->identifiers_table->Location = System::Drawing::Point(444, 322);
			this->identifiers_table->Name = L"identifiers_table";
			this->identifiers_table->RowHeadersWidth = 51;
			this->identifiers_table->RowTemplate->Height = 24;
			this->identifiers_table->Size = System::Drawing::Size(336, 150);
			this->identifiers_table->TabIndex = 21;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"№";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 30;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Лексема";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Код";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// comp_sign_table
			// 
			this->comp_sign_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->comp_sign_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->comp_sign_table->Location = System::Drawing::Point(444, 541);
			this->comp_sign_table->Name = L"comp_sign_table";
			this->comp_sign_table->RowHeadersWidth = 51;
			this->comp_sign_table->RowTemplate->Height = 24;
			this->comp_sign_table->Size = System::Drawing::Size(336, 150);
			this->comp_sign_table->TabIndex = 22;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"№";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 30;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Лексема";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Код";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// keywords_table
			// 
			this->keywords_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->keywords_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->keywords_table->Location = System::Drawing::Point(73, 322);
			this->keywords_table->Name = L"keywords_table";
			this->keywords_table->RowHeadersWidth = 51;
			this->keywords_table->RowTemplate->Height = 24;
			this->keywords_table->Size = System::Drawing::Size(336, 150);
			this->keywords_table->TabIndex = 23;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"№";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 30;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Лексема";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Код";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// op_sign_table
			// 
			this->op_sign_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->op_sign_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			this->op_sign_table->Location = System::Drawing::Point(73, 541);
			this->op_sign_table->Name = L"op_sign_table";
			this->op_sign_table->RowHeadersWidth = 51;
			this->op_sign_table->RowTemplate->Height = 24;
			this->op_sign_table->Size = System::Drawing::Size(336, 150);
			this->op_sign_table->TabIndex = 24;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"№";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 30;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Лексема";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Код";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(128, 513);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"ЗНАКИ ОПЕРАЦИЙ(4)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(508, 513);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(223, 25);
			this->label7->TabIndex = 26;
			this->label7->Text = L"ЗНАКИ СРАВНЕНИЯ(5)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 728);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->op_sign_table);
			this->Controls->Add(this->keywords_table);
			this->Controls->Add(this->comp_sign_table);
			this->Controls->Add(this->identifiers_table);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->separators_table);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->constants_table);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Leksems);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBoxProcessed);
			this->Controls->Add(this->richTextBoxSource);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonRunProcess);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Leks";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->constants_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separators_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiers_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->comp_sign_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->keywords_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->op_sign_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		int S = 0; //состояние
		String^ processedCode = ""; //обработанный код
		String^ code = "";
		int lineNum = 1; //номер строки

		System::Void process(System::Char i) {
			switch (S)
			{
			case 0:
				processedCode += i;
				if (i == '/') S = 1;
				else if (i == ' ') S = 5;
				else if (i == '\t') {
					processedCode = processedCode->Remove(processedCode->Length - 1, 1);
					S = 0;
				}
				else S = 0;
				break;
			case 1:
				processedCode += i;
				if (i == '/') {
					S = 2;
					processedCode = processedCode->Remove(processedCode->Length - 2, 2);
				}
				else if (i == ' ') S = 5;
				else if (i == '*') {
					S = 3;
					processedCode = processedCode->Remove(processedCode->Length - 2, 2);
				}
				else S = 0;
				break;
			case 2:
				if (i != '\n') S = 2;
				else {
					processedCode += i;
					S = 0;
				}
				break;
			case 3:
				if (i == '*') S = 4;
				else S = 3;
				break;
			case 4:
				if (i == '/') S = 0;
				else S = 3;
				break;
			case 5:
				processedCode += i;
				if (i == ' ') {
					processedCode = processedCode->Remove(processedCode->Length - 1, 1);
					S = 5;
				}
				else if (i == '/') S = 1;
				else S = 0;
				break;
			default:
				break;
			}
		}

		System::Void deleteEmptyLines() { //функция удаления пустых строк
			for (int i = 0; i < processedCode->Length; i++) {
				if ((i != 0) && processedCode[i] == ' ' && processedCode[i - 1] == '\n') {
					processedCode = processedCode->Remove(i, 1);
					i--;
				}
				if (processedCode[i] == '\n' && processedCode[i - 1] == '\n') {
					processedCode = processedCode->Remove(i, 1);
					i--;
				}
			}
		}

		System::String^ numerateLines() { //функция нумерации строк
			String^ processedCode2 = lineNum + ") ";
			for (int i = 0; i < processedCode->Length; i++) {
				processedCode2 += processedCode[i];
				if (processedCode[i] == '\n') processedCode2 += ++lineNum + ") ";
			}
			return processedCode2;
		}



	private: System::Void buttonRunProcess_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = richTextBoxSource->Text; //Считывание исходного кода
		processedCode = ""; //обработанный код очищается
		lineNum = 1; //нумерация строк начинается с 1

		for (int i = 0; i < str->Length; i++) process(str[i]); //вызов автомата

		deleteEmptyLines(); //удаление пустых строк

		for (int i = 0; i < processedCode->Length; i++) {
			code += processedCode[i];//сохраняем непронумеровннай код
		}


		richTextBoxProcessed->Text = numerateLines(); //нумерация строк и вывод на экран
	}

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		//очистка

		clear_table();
		richTextBoxSource->Text = ""; //поле ввода - Исходный код
		richTextBoxProcessed->Text = ""; //поле ввода - Обработанный код
		processedCode = ""; //обработанный код
		code = "";
		S = 0; //состояние
		lineNum = 1; //количество строк
	}




		   ///////////////////////////////////
		   //выделение лексем

		   //состояния
		   enum class state {

			   S0, S1, S1DOT, S2, S3, SE, S5, S6, S7, S8, S9, S10, S11, S13, S14, S15, S16, S17, S18, S19, S20, S21, S22, S23, S24, S25, S26, S27, S28, S29,
			   S30, S31, S32,
			   SI, SKEY

		   } st = state::S0;



		   //обрабатываем лексемы
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		clear_table();

		std::map<std::string, std::string> map_keywords;//словарь с ключевыми словами
		std::map<std::string, std::string> map_identifiers;//словарь с идентификаторами
		std::map<std::string, std::string> map_constants;//словарь с константами
		std::map<std::string, std::string> map_op_sign;//словарь со знаками операций
		std::map<std::string, std::string> map_comp_sign;//словарь со знаками сравнения
		std::map<std::string, std::string> map_separator_sign;//словарь с разделителями


		String^ text = gcnew String(this->richTextBoxProcessed->Text);

		std::string word = "";

		for (int i = 0; i < code->Length; i++) {

			if (Char::IsLetter(code[i]) || code[i] == '_') {
				//по букве
				switch (code[i]) {
				case 'E':
				case 'e':
					switch (st) {

					case state::S0://may be else|extern...
						word += code[i];
						st = state::S15;
						break;
					case state::S17://else
						word += code[i];
						st = state::SKEY;
						break;
					case state::S21://extErn
						word += code[i];
						st = state::S22;
						break;
					case state::S30://extErn
						word += code[i];
						st = state::S31;
						break;
					case state::S1:	//10e+3
						word += code[i];
						st = state::S2;
						break;
					
					case state::S10 ://это нужно для распознавания --е 
					case state::S6:
					case state::S7 :
					case state::S8 :
					case state::S9:
							break;
			
						default:
							st = state::SI;
							break;
					}
					break;
				case 'l':
					if (st == state::S15) {
						word += code[i];
						st = state::S16;
					}
					else if (st == state::S29) {
						word += code[i];
						st = state::SKEY;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {//это нужно для распознавания --l l++ и т.д
						break;;
					}
					else {
						st = state::SI;
					}
					break;

				case 's':
					if (st == state::S16) {
						word += code[i];
						st = state::S17;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'n':
					if (st == state::S15) {
						word += code[i];
						st = state::S18;
					}
					else if (st == state::S23) {
						word += code[i];
						st = state::SKEY;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'u':
					if (st == state::S18) {
						word += code[i];
						st = state::S19;
					}
					else if (st == state::S24) {
						word += code[i];
						st = state::S25;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'm':
					if (st == state::S19) {
						word += code[i];
						st = state::SKEY;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'x':
					if (st == state::S15) {
						word += code[i];
						st = state::S20;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 't':
					if (st == state::S20) {
						word += code[i];
						st = state::S21;
					}
					else if (st == state::S25) {
						word += code[i];
						st = state::S26;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'r':
					if (st == state::S22) {
						word += code[i];
						st = state::S23;
					}
					else if (st == state::S27) {
						word += code[i];
						st = state::S30;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;

				case 'a':
					if (st == state::S0) {
						word += code[i];
						st = state::S24;
					}
					else if (st == state::S31) {
						word += code[i];
						st = state::S32;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'o':
					if (st == state::S26) {
						word += code[i];
						st = state::SKEY;
					}
					else if (st == state::S27) {
						word += code[i];
						st = state::S28;
					}
					else if (st == state::S28) {
						word += code[i];
						st = state::S29;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'b':
					if (st == state::S0) {
						word += code[i];
						st = state::S27;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;
				case 'k':
					if (st == state::S32) {
						word += code[i];
						st = state::SKEY;
					}
					else if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;;
					}
					else {
						st = state::SI;
					}
					break;

				default:
					if (st == state::S10 || st == state::S6 || st == state::S7 || st == state::S8 || st == state::S9) {
						break;
					}
					st = state::SI;
					break;
				}
				//по состоянию
				switch (st) {
				case state::S0:
				case state::SI:
					word += code[i];
					st = state::SI;
					break;

				case state::S6:
				case state::S7:
				case state::S8:
				case state::S9:
				case state::S10:
				case state::S13:
					map_op_sign[word] = word;
					word = "";
					st = state::S0;
					i--;
					break;
				default:
					st = state::SI;
					break;
				}

			}
			else if (Char::IsDigit(code[i])) {
				switch (st) {
				case state::S0:
				case state::S1: //идут цифры(конечное состояние)
				case state::S1DOT://цифра после точки
				case state::S3:// цифра после +E (10E+3)
					word += code[i];
					st = state::S1;
					break;

				case state::SI:
					word += code[i];
					break;
				default:
					break;
				}
			}
			else if (code[i] == '+' || code[i] == '-' || code[i] == '*' || code[i] == '/') {

				if ((code[i] == '+' || code[i] == '-') && st == state::S2) {//10E+2
					word += code[i];
					st = state::S3;
				}

				switch (st) {
				case state::S0:
					word += code[i];
					st = state::S6;
					break;
				case state::S6: // ++
					word += code[i];
					st = state::S10;
					break;
				case state::S10:
					map_op_sign[word] = word;
					word = "";
					st = state::S0;
					i--;
					break;
				case state::SI:
					map_identifiers[word] = "id";
					word = "";
					st = state::S0;
					i--;
					break;
				default:
					map_identifiers[word] = "id";
					word = "";
					st = state::S0;
					i--;
					break;
				}

			}
			else if (code[i] == '&' || code[i] == '|') {
				switch (st) {
				case state::S0:
					if (code[i] == '&') {
						word += code[i];
						st = state::S7;
					}
					else {
						word += code[i];
						st = state::S8;
					}
					break;

				case state::S7:
				case state::S8: //&& || 
					word += code[i];
					st = state::S9;
					break;
				default:
					map_identifiers[word] = "id";
					word = "";
					st = state::S0;
					i--;
					break;
				}
			}
			else if (code[i] == '=' || code[i] == '!') {
				switch (st) {
				case state::S0:
					word += code[i];
					st = state::S13;
					break;
				case state::S6:
					if (code[i] == '=') {
						word += code[i];
						st = state::S9;
					}
					break;
				case state::S13:
					if (code[i] == '=') {
						word += code[i];
						st = state::S14;
					}
					break;
				case state::S11:
					if (code[i] == '=') {
						word += code[i];
						st = state::S14;
					}
					break;
				default:
					break;
				}
			}
			else if (code[i] == '<' || code[i] == '>') {
				switch (st) {
				case state::S0:
					word += code[i];
					st = state::S11;
					break;
				default:
					break;
				}
			}

			else if (code[i] == '.') {
				switch (st)
				{
				case state::S1:
					word += code[i];
					st = state::S1DOT;
					break;
				default:
					break;
				}
			}


			//пришел разделитель смотрим какое состояние и пишем лексему если конечное
			else if (code[i] == '\n' || code[i] == ' ' || code[i] == ',' || code[i] == '(' || code[i] == ')' || code[i] == '{' || code[i] == '}' || code[i] == '[' || code[i] == ']' || code[i] == ';') {

				switch (st)
				{
				case state::S0://распознаем разделитель
					word += code[i];
					st = state::S5;
					map_separator_sign[word] = word;
					break;

				case state::S1:	//распознаем константу
					map_constants[word] = "const";
					i--;
					break;

				case state::SI: //распознаем идентификатор
					map_identifiers[word] = "id";
					i--;
					break;
				case state::SKEY:
					map_keywords[word] = "keyword";
					i--;
					break;
				case state::S6:
				case state::S7:
				case state::S8:
				case state::S9:
				case state::S10:
				case state::S13:// + - * / = !
					map_op_sign[word] = word;
					i--;
					break;
				case state::S11:// == != <= >=
				case state::S14:
					map_comp_sign[word] = word;
					i--;
					break;

				default:
					break;
				}

				word = "";
				st = state::S0;


			}

		}


		int cnt_identifiers = 0, cnt_keywords = 0, cnt_consts = 0, cnt_op_sign = 0, cnt_comp_sign = 0, cnt_sep_sign = 0;

		//теперь из мап пишем в таблицу
		for (auto a : map_keywords) {
			String^ leksema = gcnew String(a.first.c_str());
			String^ code_leks = gcnew String(a.second.c_str());
			this->keywords_table->Rows->Add(cnt_keywords++, leksema, code_leks);
		}
		for (auto a : map_identifiers) {
			String^ identifier = gcnew String(a.first.c_str());
			String^ code_identifier = gcnew String(a.second.c_str());
			this->identifiers_table->Rows->Add(cnt_identifiers++, identifier, code_identifier);
		}
		for (auto a : map_constants) {
			String^ constanta = gcnew String(a.first.c_str());
			String^ code_identifier = gcnew String(a.second.c_str());
			this->constants_table->Rows->Add(cnt_consts++, constanta, code_identifier);
		}
		for (auto a : map_op_sign) {
			String^ sign = gcnew String(a.first.c_str());
			String^ code_sign = gcnew String(a.second.c_str());
			this->op_sign_table->Rows->Add(cnt_op_sign++, sign, code_sign);
		}
		for (auto a : map_comp_sign) {
			String^ comp_sign = gcnew String(a.first.c_str());
			String^ code_comp_sign = gcnew String(a.second.c_str());
			this->comp_sign_table->Rows->Add(cnt_comp_sign++, comp_sign, code_comp_sign);
		}
		for (auto a : map_separator_sign) {
			String^ sep_sign = gcnew String(a.first.c_str());
			String^ code_sep_sign = gcnew String(a.second.c_str());
			this->separators_table->Rows->Add(cnt_sep_sign++, sep_sign, code_sep_sign);
		}



	}

		   void clear_table() {
			   this->keywords_table->Rows->Clear();
			   this->identifiers_table->Rows->Clear();
			   this->constants_table->Rows->Clear();
			   this->op_sign_table->Rows->Clear();
			   this->comp_sign_table->Rows->Clear();
			   this->separators_table->Rows->Clear();

			   //delete tokens;
		   }
	};
}
