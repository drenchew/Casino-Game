#pragma once

#include<sstream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <stack>
#include <vector>
#include <cctype>
#include <memory>
#include <iostream>
#include <unordered_set>
#include <set>
#include <cmath>
#include <valarray> 

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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	


		//end

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ user_name;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TextBox^ user;




private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ pass;
private: System::Windows::Forms::Button^ submit_btn;
private: System::Windows::Forms::LinkLabel^ sign_in_switch;
private: System::Windows::Forms::Label^ label3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->submit_btn = (gcnew System::Windows::Forms::Button());
			this->sign_in_switch = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(83, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 76);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Sign In";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// user_name
			// 
			this->user_name->AutoSize = true;
			this->user_name->BackColor = System::Drawing::Color::Transparent;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Stencil", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->user_name->Location = System::Drawing::Point(21, 18);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(120, 25);
			this->user_name->TabIndex = 3;
			this->user_name->Text = L"Username";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(21, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(267, 2);
			this->panel1->TabIndex = 4;
			// 
			// user
			// 
			this->user->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->user->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->user->Location = System::Drawing::Point(26, 52);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(262, 13);
			this->user->TabIndex = 5;
			this->user->TextChanged += gcnew System::EventHandler(this, &MainForm::user_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel3->Controls->Add(this->user_name);
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->user);
			this->panel3->Location = System::Drawing::Point(69, 181);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(308, 92);
			this->panel3->TabIndex = 9;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->pass);
			this->panel2->Location = System::Drawing::Point(69, 299);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(308, 92);
			this->panel2->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Stencil", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(21, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click_1);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(21, 71);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(267, 2);
			this->panel4->TabIndex = 4;
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->ForeColor = System::Drawing::SystemColors::Window;
			this->pass->Location = System::Drawing::Point(26, 52);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(262, 13);
			this->pass->TabIndex = 5;
			// 
			// submit_btn
			// 
			this->submit_btn->Font = (gcnew System::Drawing::Font(L"Stencil", 15.75F));
			this->submit_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->submit_btn->Location = System::Drawing::Point(69, 409);
			this->submit_btn->Name = L"submit_btn";
			this->submit_btn->Size = System::Drawing::Size(308, 44);
			this->submit_btn->TabIndex = 11;
			this->submit_btn->Text = L"Sign In";
			this->submit_btn->UseVisualStyleBackColor = true;
			this->submit_btn->Click += gcnew System::EventHandler(this, &MainForm::submit_btn_Click);
			// 
			// sign_in_switch
			// 
			this->sign_in_switch->ActiveLinkColor = System::Drawing::Color::DarkViolet;
			this->sign_in_switch->AutoSize = true;
			this->sign_in_switch->BackColor = System::Drawing::Color::Transparent;
			this->sign_in_switch->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign_in_switch->ForeColor = System::Drawing::Color::Transparent;
			this->sign_in_switch->LinkColor = System::Drawing::Color::IndianRed;
			this->sign_in_switch->Location = System::Drawing::Point(66, 499);
			this->sign_in_switch->Name = L"sign_in_switch";
			this->sign_in_switch->Size = System::Drawing::Size(56, 16);
			this->sign_in_switch->TabIndex = 12;
			this->sign_in_switch->TabStop = true;
			this->sign_in_switch->Text = L"Sign Up";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(66, 469);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"you are not a member\?";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1045, 561);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->sign_in_switch);
			this->Controls->Add(this->submit_btn);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1061, 600);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public:System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//	show_result->Text = input_c->Text;
	
	//String^ input = this->input_c->Text;
	//std::string inputString = msclr::interop::marshal_as<std::string>(input);

	//
	//Calcs(inputString);
	//System::String^ labelText = msclr::interop::marshal_as<System::String^>(inputString);  // convert std::string to windows::string

	//waiting_msg->Text = "";
	//waiting_msg->BackColor = System::Drawing::Color::SpringGreen;

	//show_result->Text = labelText;
	//
	//Calc Button
}
public: User^ userr = nullptr;

private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	//to clear the text

	//input_c->Text = "";
	//show_result->Text = "";
	//waiting_msg->Text = "Waiting To Enter...";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Label1.BackColor = System.Drawing.Color.Transparent;
	
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void submit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ user_name = this->user->Text;

	String^ password = this->pass->Text;

	if ((user_name->Length <= 0) || (password->Length <= 0))
	{
		MessageBox::Show("Please Enter A Valid Data", "Empty Username Or Password", MessageBoxButtons::RetryCancel);
		return;
	}
	try
	{
		 // seams to work//String^ Conn_Str = "Data Source=DESKTOP-TV840OG;Integrated Security=True;Connect Timeout=30";

		String^ Conn_Str = "Data Source=DESKTOP-TV840OG;Initial Catalog=myLogs;Integrated Security=True;Connect Timeout=30";


		//String^ Conn_Str = "Data Source=DESKTOP-TV840OG;Integrated Security=True;Connect Timeout=30;Encrypt=False;Trust Server Certificate=False;Application Intent=ReadWrite;Multi Subnet Failover=False";
		SqlConnection connect_sql(Conn_Str);
		connect_sql.Open();

		String^ sql_querry = "SELECT * FROM users WHERE username=@usr AND password=@psw";
		SqlCommand command (sql_querry, % connect_sql);
		command.Parameters->AddWithValue("@usr", user_name);
		command.Parameters->AddWithValue("@psw", password);
		


		SqlDataReader^ reader = command.ExecuteReader();
		
		if (reader->Read())
		{
			userr = gcnew User;
			userr->id = reader->GetInt32(0);
			userr->username = reader->GetString(1);
			userr->email = reader->GetString(2);
			userr->phone = reader->GetString(3); // getting the password
			userr->password = reader->GetString(4);
			userr->money = reader->GetString(5);

			//MessageBox::Show("noice","brawo", MessageBoxButtons::RetryCancel);
			this->Close();
		}
		else
		{
			MessageBox::Show("Incorect Email Or Password", "Please try again after a while!",MessageBoxButtons::RetryCancel);
		}

	}
	/*catch (Exception^ e)
	{
		MessageBox::Show("We are currently experiencing a high volume of users, and we apologize for any delays or difficulties you may be experiencing.","Something Went Wrong",MessageBoxButtons::AbortRetryIgnore);
	}*/
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Something Went Wrong", MessageBoxButtons::AbortRetryIgnore);
	}


}
private: System::Void user_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
