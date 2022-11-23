#pragma once

namespace AdventureForest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormCreditos
	/// </summary>
	public ref class FormCreditos : public System::Windows::Forms::Form
	{
	public:
		FormCreditos(void)
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
		~FormCreditos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel7;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCreditos::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(271, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 48);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(105, 329);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(133, 49);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(339, 329);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(133, 49);
			this->panel3->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(573, 329);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(133, 49);
			this->panel4->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(76, 127);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(182, 179);
			this->panel6->TabIndex = 5;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(314, 127);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(182, 179);
			this->panel5->TabIndex = 6;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Location = System::Drawing::Point(548, 127);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(182, 179);
			this->panel7->TabIndex = 6;
			// 
			// FormCreditos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(798, 445);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormCreditos";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormCreditos";
			this->ResumeLayout(false);

		}
};
}
