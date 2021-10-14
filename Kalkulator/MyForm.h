#pragma once

namespace Kalkulator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	char symbol;
	double num1 = 0,num2=0;
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
	private: System::Windows::Forms::Button^ bt_eq;
	private: System::Windows::Forms::Button^ bt_mul;
	private: System::Windows::Forms::Button^ bt_sub;
	private: System::Windows::Forms::Button^ bt_add;
	protected:

	protected:



	private: System::Windows::Forms::Button^ bt_div;
	private: System::Windows::Forms::Button^ bt_com;


	private: System::Windows::Forms::Button^ bt_0;
	private: System::Windows::Forms::Button^ bt_pm;


	private: System::Windows::Forms::Button^ bt_9;

	private: System::Windows::Forms::Button^ bt_8;

	private: System::Windows::Forms::Button^ bt_7;

	private: System::Windows::Forms::Button^ bt_6;

	private: System::Windows::Forms::Button^ bt_5;

	private: System::Windows::Forms::Button^ bt_4;

	private: System::Windows::Forms::Button^ bt_3;

	private: System::Windows::Forms::Button^ bt_2;

	private: System::Windows::Forms::Button^ bt_1;

	private: System::Windows::Forms::Button^ bt_ce;
	private: System::Windows::Forms::Button^ bt_c;



	private: System::Windows::Forms::Button^ bt_backspace;

	private: System::Windows::Forms::TextBox^ tb_num;
	private: System::Windows::Forms::TextBox^ tb_result;
	private: System::Windows::Forms::ListBox^ lb_history;
	private: System::Windows::Forms::ComboBox^ cb_history;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bt_save;
	private: System::Windows::Forms::Button^ bt_load;
	private: System::Windows::Forms::Button^ bt_del;




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
			this->bt_eq = (gcnew System::Windows::Forms::Button());
			this->bt_mul = (gcnew System::Windows::Forms::Button());
			this->bt_sub = (gcnew System::Windows::Forms::Button());
			this->bt_add = (gcnew System::Windows::Forms::Button());
			this->bt_div = (gcnew System::Windows::Forms::Button());
			this->bt_com = (gcnew System::Windows::Forms::Button());
			this->bt_0 = (gcnew System::Windows::Forms::Button());
			this->bt_pm = (gcnew System::Windows::Forms::Button());
			this->bt_9 = (gcnew System::Windows::Forms::Button());
			this->bt_8 = (gcnew System::Windows::Forms::Button());
			this->bt_7 = (gcnew System::Windows::Forms::Button());
			this->bt_6 = (gcnew System::Windows::Forms::Button());
			this->bt_5 = (gcnew System::Windows::Forms::Button());
			this->bt_4 = (gcnew System::Windows::Forms::Button());
			this->bt_3 = (gcnew System::Windows::Forms::Button());
			this->bt_2 = (gcnew System::Windows::Forms::Button());
			this->bt_1 = (gcnew System::Windows::Forms::Button());
			this->bt_ce = (gcnew System::Windows::Forms::Button());
			this->bt_c = (gcnew System::Windows::Forms::Button());
			this->bt_backspace = (gcnew System::Windows::Forms::Button());
			this->tb_num = (gcnew System::Windows::Forms::TextBox());
			this->tb_result = (gcnew System::Windows::Forms::TextBox());
			this->lb_history = (gcnew System::Windows::Forms::ListBox());
			this->cb_history = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_save = (gcnew System::Windows::Forms::Button());
			this->bt_load = (gcnew System::Windows::Forms::Button());
			this->bt_del = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_eq
			// 
			this->bt_eq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_eq->Location = System::Drawing::Point(250, 287);
			this->bt_eq->Name = L"bt_eq";
			this->bt_eq->Size = System::Drawing::Size(75, 43);
			this->bt_eq->TabIndex = 63;
			this->bt_eq->Text = L"=";
			this->bt_eq->UseVisualStyleBackColor = true;
			this->bt_eq->Click += gcnew System::EventHandler(this, &MyForm::bt_eq_Click);
			// 
			// bt_mul
			// 
			this->bt_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_mul->Location = System::Drawing::Point(250, 238);
			this->bt_mul->Name = L"bt_mul";
			this->bt_mul->Size = System::Drawing::Size(75, 43);
			this->bt_mul->TabIndex = 62;
			this->bt_mul->Text = L"*";
			this->bt_mul->UseVisualStyleBackColor = true;
			this->bt_mul->Click += gcnew System::EventHandler(this, &MyForm::bt_mul_Click);
			// 
			// bt_sub
			// 
			this->bt_sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_sub->Location = System::Drawing::Point(250, 189);
			this->bt_sub->Name = L"bt_sub";
			this->bt_sub->Size = System::Drawing::Size(75, 43);
			this->bt_sub->TabIndex = 61;
			this->bt_sub->Text = L"-";
			this->bt_sub->UseVisualStyleBackColor = true;
			this->bt_sub->Click += gcnew System::EventHandler(this, &MyForm::bt_sub_Click);
			// 
			// bt_add
			// 
			this->bt_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_add->Location = System::Drawing::Point(250, 140);
			this->bt_add->Name = L"bt_add";
			this->bt_add->Size = System::Drawing::Size(75, 43);
			this->bt_add->TabIndex = 60;
			this->bt_add->Text = L"+";
			this->bt_add->UseVisualStyleBackColor = true;
			this->bt_add->Click += gcnew System::EventHandler(this, &MyForm::bt_add_Click);
			// 
			// bt_div
			// 
			this->bt_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_div->Location = System::Drawing::Point(250, 91);
			this->bt_div->Name = L"bt_div";
			this->bt_div->Size = System::Drawing::Size(75, 43);
			this->bt_div->TabIndex = 59;
			this->bt_div->Text = L"/";
			this->bt_div->UseVisualStyleBackColor = true;
			this->bt_div->Click += gcnew System::EventHandler(this, &MyForm::bt_div_Click);
			// 
			// bt_com
			// 
			this->bt_com->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_com->Location = System::Drawing::Point(169, 287);
			this->bt_com->Name = L"bt_com";
			this->bt_com->Size = System::Drawing::Size(75, 43);
			this->bt_com->TabIndex = 58;
			this->bt_com->Text = L",";
			this->bt_com->UseVisualStyleBackColor = true;
			this->bt_com->Click += gcnew System::EventHandler(this, &MyForm::bt_com_Click);
			// 
			// bt_0
			// 
			this->bt_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_0->Location = System::Drawing::Point(88, 287);
			this->bt_0->Name = L"bt_0";
			this->bt_0->Size = System::Drawing::Size(75, 43);
			this->bt_0->TabIndex = 57;
			this->bt_0->Text = L"0";
			this->bt_0->UseVisualStyleBackColor = true;
			this->bt_0->Click += gcnew System::EventHandler(this, &MyForm::bt_0_Click);
			// 
			// bt_pm
			// 
			this->bt_pm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_pm->Location = System::Drawing::Point(7, 287);
			this->bt_pm->Name = L"bt_pm";
			this->bt_pm->Size = System::Drawing::Size(75, 43);
			this->bt_pm->TabIndex = 56;
			this->bt_pm->Text = L"+/-";
			this->bt_pm->UseVisualStyleBackColor = true;
			this->bt_pm->Click += gcnew System::EventHandler(this, &MyForm::bt_pm_Click);
			// 
			// bt_9
			// 
			this->bt_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_9->Location = System::Drawing::Point(169, 238);
			this->bt_9->Name = L"bt_9";
			this->bt_9->Size = System::Drawing::Size(75, 43);
			this->bt_9->TabIndex = 55;
			this->bt_9->Text = L"9";
			this->bt_9->UseVisualStyleBackColor = true;
			this->bt_9->Click += gcnew System::EventHandler(this, &MyForm::bt_9_Click);
			// 
			// bt_8
			// 
			this->bt_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_8->Location = System::Drawing::Point(88, 238);
			this->bt_8->Name = L"bt_8";
			this->bt_8->Size = System::Drawing::Size(75, 43);
			this->bt_8->TabIndex = 54;
			this->bt_8->Text = L"8";
			this->bt_8->UseVisualStyleBackColor = true;
			this->bt_8->Click += gcnew System::EventHandler(this, &MyForm::bt_8_Click);
			// 
			// bt_7
			// 
			this->bt_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_7->Location = System::Drawing::Point(7, 238);
			this->bt_7->Name = L"bt_7";
			this->bt_7->Size = System::Drawing::Size(75, 43);
			this->bt_7->TabIndex = 53;
			this->bt_7->Text = L"7";
			this->bt_7->UseVisualStyleBackColor = true;
			this->bt_7->Click += gcnew System::EventHandler(this, &MyForm::bt_7_Click);
			// 
			// bt_6
			// 
			this->bt_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_6->Location = System::Drawing::Point(169, 189);
			this->bt_6->Name = L"bt_6";
			this->bt_6->Size = System::Drawing::Size(75, 43);
			this->bt_6->TabIndex = 52;
			this->bt_6->Text = L"6";
			this->bt_6->UseVisualStyleBackColor = true;
			this->bt_6->Click += gcnew System::EventHandler(this, &MyForm::bt_6_Click);
			// 
			// bt_5
			// 
			this->bt_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_5->Location = System::Drawing::Point(88, 189);
			this->bt_5->Name = L"bt_5";
			this->bt_5->Size = System::Drawing::Size(75, 43);
			this->bt_5->TabIndex = 51;
			this->bt_5->Text = L"5";
			this->bt_5->UseVisualStyleBackColor = true;
			this->bt_5->Click += gcnew System::EventHandler(this, &MyForm::bt_5_Click);
			// 
			// bt_4
			// 
			this->bt_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_4->Location = System::Drawing::Point(7, 189);
			this->bt_4->Name = L"bt_4";
			this->bt_4->Size = System::Drawing::Size(75, 43);
			this->bt_4->TabIndex = 50;
			this->bt_4->Text = L"4";
			this->bt_4->UseVisualStyleBackColor = true;
			this->bt_4->Click += gcnew System::EventHandler(this, &MyForm::bt_4_Click);
			// 
			// bt_3
			// 
			this->bt_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_3->Location = System::Drawing::Point(169, 140);
			this->bt_3->Name = L"bt_3";
			this->bt_3->Size = System::Drawing::Size(75, 43);
			this->bt_3->TabIndex = 49;
			this->bt_3->Text = L"3";
			this->bt_3->UseVisualStyleBackColor = true;
			this->bt_3->Click += gcnew System::EventHandler(this, &MyForm::bt_3_Click);
			// 
			// bt_2
			// 
			this->bt_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_2->Location = System::Drawing::Point(88, 140);
			this->bt_2->Name = L"bt_2";
			this->bt_2->Size = System::Drawing::Size(75, 43);
			this->bt_2->TabIndex = 48;
			this->bt_2->Text = L"2";
			this->bt_2->UseVisualStyleBackColor = true;
			this->bt_2->Click += gcnew System::EventHandler(this, &MyForm::bt_2_Click);
			// 
			// bt_1
			// 
			this->bt_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_1->Location = System::Drawing::Point(7, 140);
			this->bt_1->Name = L"bt_1";
			this->bt_1->Size = System::Drawing::Size(75, 43);
			this->bt_1->TabIndex = 47;
			this->bt_1->Text = L"1";
			this->bt_1->UseVisualStyleBackColor = true;
			this->bt_1->Click += gcnew System::EventHandler(this, &MyForm::bt_1_Click);
			// 
			// bt_ce
			// 
			this->bt_ce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_ce->Location = System::Drawing::Point(169, 91);
			this->bt_ce->Name = L"bt_ce";
			this->bt_ce->Size = System::Drawing::Size(75, 43);
			this->bt_ce->TabIndex = 46;
			this->bt_ce->Text = L"CE";
			this->bt_ce->UseVisualStyleBackColor = true;
			this->bt_ce->Click += gcnew System::EventHandler(this, &MyForm::bt_ce_Click);
			// 
			// bt_c
			// 
			this->bt_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_c->Location = System::Drawing::Point(88, 91);
			this->bt_c->Name = L"bt_c";
			this->bt_c->Size = System::Drawing::Size(75, 43);
			this->bt_c->TabIndex = 45;
			this->bt_c->Text = L"C";
			this->bt_c->UseVisualStyleBackColor = true;
			this->bt_c->Click += gcnew System::EventHandler(this, &MyForm::bt_c_Click);
			// 
			// bt_backspace
			// 
			this->bt_backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->bt_backspace->Location = System::Drawing::Point(7, 91);
			this->bt_backspace->Name = L"bt_backspace";
			this->bt_backspace->Size = System::Drawing::Size(75, 43);
			this->bt_backspace->TabIndex = 44;
			this->bt_backspace->Text = L"<-";
			this->bt_backspace->UseVisualStyleBackColor = true;
			this->bt_backspace->Click += gcnew System::EventHandler(this, &MyForm::bt_backspace_Click);
			// 
			// tb_num
			// 
			this->tb_num->Location = System::Drawing::Point(12, 50);
			this->tb_num->Name = L"tb_num";
			this->tb_num->Size = System::Drawing::Size(313, 20);
			this->tb_num->TabIndex = 64;
			// 
			// tb_result
			// 
			this->tb_result->Location = System::Drawing::Point(12, 12);
			this->tb_result->Name = L"tb_result";
			this->tb_result->ReadOnly = true;
			this->tb_result->Size = System::Drawing::Size(313, 20);
			this->tb_result->TabIndex = 65;
			// 
			// lb_history
			// 
			this->lb_history->FormattingEnabled = true;
			this->lb_history->Location = System::Drawing::Point(331, 92);
			this->lb_history->Name = L"lb_history";
			this->lb_history->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->lb_history->Size = System::Drawing::Size(263, 238);
			this->lb_history->TabIndex = 66;
			// 
			// cb_history
			// 
			this->cb_history->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_history->FormattingEnabled = true;
			this->cb_history->Location = System::Drawing::Point(332, 50);
			this->cb_history->Name = L"cb_history";
			this->cb_history->Size = System::Drawing::Size(262, 21);
			this->cb_history->TabIndex = 67;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(328, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 68;
			this->label1->Text = L"Historia dzia³añ";
			// 
			// bt_save
			// 
			this->bt_save->Location = System::Drawing::Point(332, 13);
			this->bt_save->Name = L"bt_save";
			this->bt_save->Size = System::Drawing::Size(75, 34);
			this->bt_save->TabIndex = 69;
			this->bt_save->Text = L"Zapisz dzia³anie";
			this->bt_save->UseVisualStyleBackColor = true;
			this->bt_save->Click += gcnew System::EventHandler(this, &MyForm::bt_save_Click);
			// 
			// bt_load
			// 
			this->bt_load->Location = System::Drawing::Point(413, 12);
			this->bt_load->Name = L"bt_load";
			this->bt_load->Size = System::Drawing::Size(100, 34);
			this->bt_load->TabIndex = 70;
			this->bt_load->Text = L"Za³aduj dzia³anie";
			this->bt_load->UseVisualStyleBackColor = true;
			this->bt_load->Click += gcnew System::EventHandler(this, &MyForm::bt_load_Click);
			// 
			// bt_del
			// 
			this->bt_del->Location = System::Drawing::Point(519, 13);
			this->bt_del->Name = L"bt_del";
			this->bt_del->Size = System::Drawing::Size(75, 34);
			this->bt_del->TabIndex = 71;
			this->bt_del->Text = L"Usuñ dzia³anie";
			this->bt_del->UseVisualStyleBackColor = true;
			this->bt_del->Click += gcnew System::EventHandler(this, &MyForm::bt_del_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 342);
			this->Controls->Add(this->bt_del);
			this->Controls->Add(this->bt_load);
			this->Controls->Add(this->bt_save);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cb_history);
			this->Controls->Add(this->lb_history);
			this->Controls->Add(this->tb_result);
			this->Controls->Add(this->tb_num);
			this->Controls->Add(this->bt_eq);
			this->Controls->Add(this->bt_mul);
			this->Controls->Add(this->bt_sub);
			this->Controls->Add(this->bt_add);
			this->Controls->Add(this->bt_div);
			this->Controls->Add(this->bt_com);
			this->Controls->Add(this->bt_0);
			this->Controls->Add(this->bt_pm);
			this->Controls->Add(this->bt_9);
			this->Controls->Add(this->bt_8);
			this->Controls->Add(this->bt_7);
			this->Controls->Add(this->bt_6);
			this->Controls->Add(this->bt_5);
			this->Controls->Add(this->bt_4);
			this->Controls->Add(this->bt_3);
			this->Controls->Add(this->bt_2);
			this->Controls->Add(this->bt_1);
			this->Controls->Add(this->bt_ce);
			this->Controls->Add(this->bt_c);
			this->Controls->Add(this->bt_backspace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void compute(char symbol, double num1, double num2)
		{
			switch (symbol)
			{
			case('+'):
				break;
			case('-'):
				break;
			case('*'):
				break;
			case('/'):
				break;
			}
		}
	private: System::Void bt_eq_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (tb_num->Text == "")
			MessageBox::Show("Nie podano ¿adnej wartoœci!");
		else
		{
			num2 = System::Convert::ToDouble(tb_num->Text);
			compute(symbol, num1, num2);
		}
	}
private: System::Void bt_1_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_1->Text);
}
private: System::Void bt_2_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_2->Text);
}
private: System::Void bt_3_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_3->Text);
}
private: System::Void bt_4_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_4->Text);
}
private: System::Void bt_5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb_num->AppendText(bt_5->Text);
}
private: System::Void bt_6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb_num->AppendText(bt_6->Text);
}
private: System::Void bt_7_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_7->Text);
}
private: System::Void bt_8_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_8->Text);
}
private: System::Void bt_9_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_9->Text);
}
private: System::Void bt_0_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_0->Text);
}
private: System::Void bt_com_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb_num->AppendText(bt_com->Text);
}
private: System::Void bt_div_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb_num->AppendText(bt_div->Text);
}
private: System::Void bt_add_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->AppendText(bt_add->Text);
}
private: System::Void bt_sub_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb_num->AppendText(bt_sub->Text);
}
private: System::Void bt_mul_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tb_num->AppendText(bt_mul->Text);
}
private: System::Void bt_pm_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tb_num->Text == "")
		MessageBox::Show("Brak liczby!");
	else
	{
		double liczba = System::Convert::ToDouble(tb_num->Text);
		liczba = liczba * -1;
		tb_num->Text = liczba.ToString();
	}
}
private: System::Void bt_backspace_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tb_num->TextLength > 0)
		tb_num->Text=tb_num->Text->Substring(0,tb_num->Text->Length-1);
	else
		MessageBox::Show("Brak liczb do usuniêcia!");
}
private: System::Void bt_c_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->Clear();
	tb_result->Clear();
}
private: System::Void bt_ce_Click(System::Object^ sender, System::EventArgs^ e)
{
	tb_num->Clear();
}
private: System::Void bt_save_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tb_result->Text == "")
		MessageBox::Show("Brak dzia³ania do zapisania!");
	else
	{
		cb_history->BeginUpdate();
		cb_history->Items->Add(tb_result->Text);
		cb_history->EndUpdate();

		lb_history->BeginUpdate();
		lb_history->Items->Add(tb_result->Text);
		lb_history->EndUpdate();
	}
}
private: System::Void bt_load_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (cb_history->SelectedIndex==-1 )
		MessageBox::Show("Wybierz dzia³anie do za³adowania!");
	else
	tb_result->Text = cb_history->SelectedItem->ToString();
}
private: System::Void bt_del_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (cb_history->SelectedIndex == -1)
		MessageBox::Show("Wybierz dzia³anie do usuniêcia!");
	else
	{
		cb_history->BeginUpdate();
		cb_history->Items->Remove(cb_history->SelectedItem);
		cb_history->EndUpdate();

		lb_history->BeginUpdate();
		lb_history->Items->Remove(lb_history->SelectedItem);
		lb_history->EndUpdate();
	}
}
};
}
