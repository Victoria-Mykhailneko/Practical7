#pragma once
#using <Microsoft.VisualBasic.dll>
namespace Practical7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		System::Collections::Generic::Queue<int>^ numbersQueue = gcnew System::Collections::Generic::Queue<int>();
		System::Collections::Generic::Queue<int>^ myQueue1 = gcnew System::Collections::Generic::Queue<int>();
		System::Collections::Generic::Queue<String^>^ StrQueue = gcnew System::Collections::Generic::Queue<String^>();
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button9;
		   System::Collections::Generic::Queue<int>^ myQueue1 = gcnew System::Collections::Generic::Queue<int>();

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(881, 700);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(873, 667);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 3";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button9->Location = System::Drawing::Point(317, 494);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(174, 70);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Обчислити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button8->Location = System::Drawing::Point(491, 299);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(275, 63);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Видалити елемент черги";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button7->Location = System::Drawing::Point(491, 161);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(275, 66);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Додати елемент черги";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(106, 124);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(251, 264);
			this->listBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(293, 62);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(77, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(873, 667);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button6->Location = System::Drawing::Point(293, 502);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(223, 74);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Обчислити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button5->Location = System::Drawing::Point(512, 317);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(249, 89);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Видалити значення черги";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(512, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 91);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Додати значення черги";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(142, 145);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(227, 284);
			this->listBox1->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(333, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 26);
			this->textBox3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(104, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть розмір черги";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->checkedListBox1);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(873, 667);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button3->Location = System::Drawing::Point(495, 504);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(244, 61);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Очистити чергу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(650, 303);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 26);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(384, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 82);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Додати нові значення";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Верхній елемент черги", L"Кількість елементів у черзі",
					L"Видалити перший елемент"
			});
			this->checkedListBox1->Location = System::Drawing::Point(436, 89);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(334, 112);
			this->checkedListBox1->TabIndex = 2;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(82, 504);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 61);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вивести чергу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 73);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 349);
			this->textBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 700);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		numbersQueue->Enqueue(10);
		numbersQueue->Enqueue(20);
		numbersQueue->Enqueue(30);

		textBox1->Clear();
		for each (int number in numbersQueue) {
			textBox1->AppendText(number.ToString() + "\r\n");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text != "") {
			int number = Convert::ToInt32(textBox2->Text);
			numbersQueue->Enqueue(number);

			textBox1->Clear();
			for each (int num in numbersQueue) {
				textBox1->AppendText(num.ToString() + "\r\n");
			}
			textBox2->Clear();
		}
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkedListBox1->GetItemChecked(0)) {
			if (numbersQueue->Count > 0) {
				MessageBox::Show("Поточний верхній елемент: " + numbersQueue->Peek().ToString());
			}
			else {
				MessageBox::Show("Черга порожня.");
			}
		}
		else if (checkedListBox1->GetItemChecked(1)) {
			int count = numbersQueue->Count;
			MessageBox::Show("Кількість елементів у черзі: " + count.ToString());
		}
		else if (checkedListBox1->GetItemChecked(2)) {
			if (numbersQueue->Count > 0) {
				int removedElement = numbersQueue->Dequeue();
				MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString());
			}
			else {
				MessageBox::Show("Не можна видалити, черга порожня.");
			}
		}

		textBox1->Clear();
		for each (int num in numbersQueue) {
			textBox1->AppendText(num.ToString() + "\r\n");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		numbersQueue->Clear();
		textBox1->Clear();
		MessageBox::Show("Черга повністю очищена!");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = Convert::ToInt32(textBox3->Text);

		for (int i = 0; i < size; ++i) {
			int size = Convert::ToInt32(textBox3->Text);

			for (int i = 0; i < size; ++i) {
				int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Елемент черги", "Введіть значення елементів черги", "", 200, 200));

				myQueue1->Enqueue(inputValue);
				listBox1->Items->Add(inputValue.ToString());
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (myQueue1->Count > 0) {
			myQueue1->Dequeue();
			if (listBox1->Items->Count > 0) {
				listBox1->Items->RemoveAt(0);
			}
		}
		else {
			listBox1->Items->Add("Черга порожня");
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int sum = 0;
		int evenCount = 0;

		for each (int value in myQueue1) {
			if (value % 2 == 0 && value >= 10 && value <= 20) {
				sum += value;
				evenCount++;
			}
		}

		if (evenCount > 0) {
			double average = (double)sum / evenCount;
			MessageBox::Show("Середнє значення парних чисел у діапазоні від 10 до 20: " + average.ToString(), "Результат");
		}
		else {
			MessageBox::Show("Немає парних чисел у діапазоні від 10 до 20.", "Результат");
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		StrQueue->Clear();

		try {
			int size = Convert::ToInt32(textBox4->Text);

			for (int i = 0; i < size; ++i) {
				String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox(
					"Введіть значення елемента черги",
					"Елемент черги",
					" ",
					200,
					200
				);

				StrQueue->Enqueue(inputValue);
				listBox2->Items->Add(inputValue);
			}
		}
		catch (Exception^) {
			MessageBox::Show("Будь ласка, введіть коректний розмір у текстове поле!", "Помилка");
		}
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrQueue->Count > 0) {
		StrQueue->Dequeue();

		if (listBox2->Items->Count > 0) {
			listBox2->Items->RemoveAt(0);
		}

		MessageBox::Show("Елемент успішно видалено з черги!", "Видалення");
	}
	else {
		MessageBox::Show("Черга порожня!", "Попередження");
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrQueue->Count > 0) {
		// Видаляємо з програмної черги
		StrQueue->Dequeue();

		// Видаляємо перший елемент із listBox2
		if (listBox2->Items->Count > 0) {
			listBox2->Items->RemoveAt(0);
		}

		MessageBox::Show("Елемент успішно видалено з черги!", "Видалення");
	}
	else {
		MessageBox::Show("Черга порожня!", "Попередження");
	}
}
};
}
