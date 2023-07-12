#pragma once

#include "User.h"


namespace FirstCppProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Casino
	/// </summary>
	public ref class Casino : public System::Windows::Forms::Form
	{
	public:
		User^ us;
		Casino(User ^UsEr)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//String^ strNumber = System::Convert::ToString(UsEr->money);
			display_money->Text = UsEr->money;
			this->us = UsEr;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Casino()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ display_money;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Casino::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->display_money = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->button4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(2, 355);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1195, 148);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(897, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(295, 142);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Casino::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightPink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::IndianRed;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(292, 142);
			this->button1->TabIndex = 5;
			this->button1->Text = L"other AMDRE games";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Casino::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(599, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(292, 142);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Casino::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(301, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(292, 142);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Casino::button2_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(15, 509);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1185, 44);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F));
			this->label4->ForeColor = System::Drawing::Color::LightPink;
			this->label4->Location = System::Drawing::Point(891, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(291, 44);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Rollete";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F));
			this->label3->ForeColor = System::Drawing::Color::LightPink;
			this->label3->Location = System::Drawing::Point(595, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 44);
			this->label3->TabIndex = 2;
			this->label3->Text = L"SLOTS";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F));
			this->label2->ForeColor = System::Drawing::Color::LightPink;
			this->label2->Location = System::Drawing::Point(299, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 44);
			this->label2->TabIndex = 1;
			this->label2->Text = L"MineSweeper";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F));
			this->label1->ForeColor = System::Drawing::Color::LightPink;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Check out!";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::LightPink;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.09302F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.90698F)));
			this->tableLayoutPanel3->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->display_money, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(979, 12);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(215, 24);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::IndianRed;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Your Balance  $";
			// 
			// display_money
			// 
			this->display_money->AutoSize = true;
			this->display_money->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9));
			this->display_money->ForeColor = System::Drawing::Color::IndianRed;
			this->display_money->Location = System::Drawing::Point(115, 0);
			this->display_money->Name = L"display_money";
			this->display_money->Size = System::Drawing::Size(47, 15);
			this->display_money->TabIndex = 1;
			this->display_money->Text = L"00000";
			this->display_money->Click += gcnew System::EventHandler(this, &Casino::display_money_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Pink;
			this->button5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9));
			this->button5->ForeColor = System::Drawing::Color::IndianRed;
			this->button5->Location = System::Drawing::Point(12, 13);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 45);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Collect Daily Reward";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Casino::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Pink;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(177, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 45);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Casino
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1196, 617);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1212, 656);
			this->MinimumSize = System::Drawing::Size(514, 346);
			this->Name = L"Casino";
			this->Text = L"Casino";
			this->Load += gcnew System::EventHandler(this, &Casino::Casino_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:bool mine = false;
	public: User^ user_casino = nullptr;

	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}
	private: System::Void Casino_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool Mine_sweeper_ = false;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Mine_sweeper_ = true;
		this->Close();
	}
	public:bool Slots_ = false;
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Slots_ = 1;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool Rollete_ = 0;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Rollete_ = 1;
		this->Close();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ conn_str = "Data Source=DESKTOP-TV840OG;Initial Catalog=myLogs;Integrated Security=True;Connect Timeout=30";
			SqlConnection sql_con(conn_str);
			sql_con.Open();

			// Retrieve the current value from the database
			 // Replace 1 with the appropriate user ID
			int userId = us->id;
			String^ sql_query1 = "SELECT id, money FROM users WHERE id = " + userId;
			SqlCommand^ cmd_select = gcnew SqlCommand(sql_query1, % sql_con);
			SqlDataReader^ reader = cmd_select->ExecuteReader();

			if (reader->Read())
			{
				String^ currentMoney = reader->GetString(1);

				// Convert the retrieved value to decimal, increment it, and convert it back to string
				Decimal currentMoneyDecimal = Decimal::Parse(currentMoney);
				Decimal incrementValue(5);
				Decimal incrementedValue = Decimal::Add(currentMoneyDecimal, incrementValue);
				String^ newMoney = incrementedValue.ToString();

				reader->Close(); // Close the data reader

				// Update the database with the new value
				String^ sql_query2 = "UPDATE users SET money = " + newMoney + " WHERE id = " + userId;
				SqlCommand^ cmd_update = gcnew SqlCommand(sql_query2, % sql_con);
				cmd_update->ExecuteNonQuery();
				display_money->Text = newMoney;

				//MessageBox::Show("Money has been incremented by 5 for user with ID: " + userId, "Success", MessageBoxButtons::OK);
			}
			else
			{
				reader->Close(); // Close the data reader
				MessageBox::Show("No user found with the specified ID", "Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Something Went Wrong", MessageBoxButtons::AbortRetryIgnore);
		}



	}


private: System::Void display_money_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}