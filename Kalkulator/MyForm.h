#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button16;
	protected:
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button16->Location = System::Drawing::Point(250, 314);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 43);
			this->button16->TabIndex = 63;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button17->Location = System::Drawing::Point(250, 265);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 43);
			this->button17->TabIndex = 62;
			this->button17->Text = L"*";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button18->Location = System::Drawing::Point(250, 216);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 43);
			this->button18->TabIndex = 61;
			this->button18->Text = L"-";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button19->Location = System::Drawing::Point(250, 167);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 43);
			this->button19->TabIndex = 60;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button20->Location = System::Drawing::Point(250, 118);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 43);
			this->button20->TabIndex = 59;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button13->Location = System::Drawing::Point(169, 314);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 43);
			this->button13->TabIndex = 58;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button14->Location = System::Drawing::Point(88, 314);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 43);
			this->button14->TabIndex = 57;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button15->Location = System::Drawing::Point(7, 314);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 43);
			this->button15->TabIndex = 56;
			this->button15->Text = L"+/-";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button10->Location = System::Drawing::Point(169, 265);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 43);
			this->button10->TabIndex = 55;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button11->Location = System::Drawing::Point(88, 265);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 43);
			this->button11->TabIndex = 54;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button12->Location = System::Drawing::Point(7, 265);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 43);
			this->button12->TabIndex = 53;
			this->button12->Text = L"7";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button7->Location = System::Drawing::Point(169, 216);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 43);
			this->button7->TabIndex = 52;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button8->Location = System::Drawing::Point(88, 216);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 43);
			this->button8->TabIndex = 51;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button9->Location = System::Drawing::Point(7, 216);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 43);
			this->button9->TabIndex = 50;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button4->Location = System::Drawing::Point(169, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 43);
			this->button4->TabIndex = 49;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button5->Location = System::Drawing::Point(88, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 43);
			this->button5->TabIndex = 48;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button6->Location = System::Drawing::Point(7, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 43);
			this->button6->TabIndex = 47;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button3->Location = System::Drawing::Point(169, 118);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 43);
			this->button3->TabIndex = 46;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button2->Location = System::Drawing::Point(88, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 43);
			this->button2->TabIndex = 45;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button1->Location = System::Drawing::Point(7, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 44;
			this->button1->Text = L"<-";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 365);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
