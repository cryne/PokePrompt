#pragma once
#include <string>
#include <iostream>
namespace proyectoArbol2 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::string;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  RichTextBox1;
	protected:

	private: System::Windows::Forms::Button^  button1;
	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->RichTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// RichTextBox1
			// 
			this->RichTextBox1->BackColor = System::Drawing::Color::Black;
			this->RichTextBox1->ForeColor = System::Drawing::Color::White;
			this->RichTextBox1->Location = System::Drawing::Point(13, 12);
			this->RichTextBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->RichTextBox1->Name = L"RichTextBox1";
			this->RichTextBox1->Size = System::Drawing::Size(604, 341);
			this->RichTextBox1->TabIndex = 0;
			this->RichTextBox1->Text = L"";
			this->RichTextBox1->Click += gcnew System::EventHandler(this, &MyForm::RichTextBox_Click);
			this->RichTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::RichTextBox_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Aplicar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 410);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RichTextBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	
			 
	private: System::Void RichTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void RichTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 String ^ x = RichTextBox1->Text;
			 if (x)
			 {

			 }
	};
}
