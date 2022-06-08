#pragma once

namespace tict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
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
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Beige;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 34, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(261, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe";
			this->label1->Click += gcnew System::EventHandler(this, &game::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 44);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(576, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 44);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Player 2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Crimson;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(303, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Play Turn";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &game::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(95, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 91);
			this->label4->TabIndex = 4;
			this->label4->Text = L"a";
			this->label4->Click += gcnew System::EventHandler(this, &game::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(354, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 91);
			this->label5->TabIndex = 5;
			this->label5->Text = L"a";
			this->label5->Click += gcnew System::EventHandler(this, &game::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(624, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 91);
			this->label6->TabIndex = 6;
			this->label6->Text = L"a";
			this->label6->Click += gcnew System::EventHandler(this, &game::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(95, 409);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 91);
			this->label7->TabIndex = 7;
			this->label7->Text = L"a";
			this->label7->Click += gcnew System::EventHandler(this, &game::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(354, 409);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 91);
			this->label8->TabIndex = 8;
			this->label8->Text = L"a";
			this->label8->Click += gcnew System::EventHandler(this, &game::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(624, 409);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 91);
			this->label9->TabIndex = 9;
			this->label9->Text = L"a";
			this->label9->Click += gcnew System::EventHandler(this, &game::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(95, 578);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 91);
			this->label10->TabIndex = 10;
			this->label10->Text = L"a";
			this->label10->Click += gcnew System::EventHandler(this, &game::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(354, 578);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 91);
			this->label11->TabIndex = 11;
			this->label11->Text = L"a";
			this->label11->Click += gcnew System::EventHandler(this, &game::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(624, 578);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 91);
			this->label12->TabIndex = 12;
			this->label12->Text = L"a";
			this->label12->Click += gcnew System::EventHandler(this, &game::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(868, 221);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(174, 63);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Game";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1029, 123);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 39);
			this->textBox1->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1029, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Save Player1 Name";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &game::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(879, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Save Player2 Name";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &game::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(879, 124);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 38);
			this->textBox2->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Crimson;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(535, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 38);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Play Again";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &game::button4_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(868, 381);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(164, 63);
			this->label14->TabIndex = 19;
			this->label14->Text = L"has X";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(868, 507);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(170, 63);
			this->label15->TabIndex = 20;
			this->label15->Text = L"has O";
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1163, 698);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"game";
			this->Text = L"game";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &game::game_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double player1, player2, turn = 1, num_x = 0, num_o = 0, count = 0, d = 0;
		double tc1 = 0, tc2 = 0; double win = 0;
	private: System::Void game_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics; //CreateGraphics()
		Pen^ mypen = gcnew Pen(Color::Blue);
		Pen^ mypen1 = gcnew Pen(Color::Red);
		Pen^ mypen2 = gcnew Pen(Color::Yellow);
		SolidBrush^ mybrush = gcnew SolidBrush(Color::Red);
		//g->DrawLine(mypen, 200, 240, 400, 450);
		//g->FillRectangle(mybrush, 90, 100, 140, 150);
		g->DrawRectangle(mypen, 10, 80, 800, 650);
		g->DrawRectangle(mypen, 20, 200, 780, 510);
		g->DrawRectangle(mypen2, 830, 210, 450, 390);
		g->DrawLine(mypen1, 280, 200, 280, 710);
		g->DrawLine(mypen1, 555, 200, 555, 710);
		//g->DrawLine(mypen1, 20, 20, 20, 710);
		g->DrawLine(mypen1, 20, 370, 800, 370);
		g->DrawLine(mypen1, 20, 540, 800, 540);
		//g->DrawLine(mypen1, 260, 200, 260, 710);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->BackColor = Color::Beige;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (d < 9)
		{
			if (turn == 1 && d == count)
			{
				turn++;
				label3->BackColor = Color::White;
				label2->BackColor = Color::Thistle;
				tc1 = 0;
			}
			else if (turn == 2 && d == count)
			{
				turn--;
				label2->BackColor = Color::White;
				label3->BackColor = Color::Thistle;
				tc2 = 0;
			}
			d++;
		}
		if (d > 9)
		{
			label2->BackColor = Color::Beige;
			label3->BackColor = Color::Beige;
			tc1 = 9; tc2 = 9;
		}
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label4->Text;
	if (turn < 1 || turn >2)
	{
		label4->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label4->Text = "O";
		label4->ForeColor = Color::Maroon;
		count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label4->Text = "X";
		label4->ForeColor = Color::Maroon;
		count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label4->Text = symb; // your  turn expired
		label4->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label4->Text = symb; // turn expired
		label4->ForeColor = Color::Maroon;
	}
	if (label4->Text != "a")
	{
		if (label4->Text == label5->Text && label4->Text == label6->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text +" Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label4->Text == label7->Text && label4->Text == label10->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label4->Text == label8->Text && label4->Text == label12->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label5->Text;
	if (turn < 1 || turn >2)
	{
		label5->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label5->Text = "O";
		label5->ForeColor = Color::Maroon; count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label5->Text = "X";
		label5->ForeColor = Color::Maroon; count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label5->Text = symb;
		label5->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label5->Text = symb;
		label5->ForeColor = Color::Maroon;
	}
	if (label5->Text != "a")
	{
		if (label5->Text == label4->Text && label5->Text == label6->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label5->Text == label8->Text && label5->Text == label11->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label3->Text + " Wins";
			}
		}
	}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label6->Text;
	if (turn < 1 || turn >2)
	{
		label6->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label6->Text = "O";
		label6->ForeColor = Color::Maroon;
		count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label6->Text = "X";
		label6->ForeColor = Color::Maroon;
		count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label6->Text = symb;
		label6->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label6->Text = symb;
		label6->ForeColor = Color::Maroon;
	}
	if (label6->Text != "a")
	{
		if (label6->Text == label5->Text && label6->Text == label4->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label6->Text == label9->Text && label6->Text == label12->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label6->Text == label8->Text && label6->Text == label10->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label7->Text;
	if (turn < 1 || turn >2)
	{
		label7->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label7->Text = "O";
		label7->ForeColor = Color::Maroon;
		count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label7->Text = "X";
		label7->ForeColor = Color::Maroon;
		count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label7->Text = symb;
		label7->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label7->Text = symb;
		label7->ForeColor = Color::Maroon;
	}
	if (label7->Text != "a")
	{
		if (label7->Text == label4->Text && label7->Text == label10->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label7->Text == label8->Text && label7->Text == label9->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label8->Text;
	if (turn < 1 || turn >2)
	{
		label8->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label8->Text = "O";
		label8->ForeColor = Color::Maroon; count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label8->Text = "X";
		label8->ForeColor = Color::Maroon; count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label8->Text = symb;
		label8->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label8->Text = symb;
		label8->ForeColor = Color::Maroon;
	}
	if (label8->Text != "a")
	{
		if (label8->Text == label5->Text && label8->Text == label11->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label8->Text == label7->Text && label8->Text == label9->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label8->Text == label4->Text && label8->Text == label12->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label8->Text == label10->Text && label8->Text == label6->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label9->Text;
	if (turn < 1 || turn >2)
	{
		label9->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label9->Text = "O";
		label9->ForeColor = Color::Maroon;
		count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label9->Text = "X";
		label9->ForeColor = Color::Maroon;
		count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label9->Text = symb;
		label9->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label9->Text = symb;
		label9->ForeColor = Color::Maroon;
	}
	if (label9->Text != "a")
	{
		if (label9->Text == label8->Text && label9->Text == label7->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label9->Text == label6->Text && label9->Text == label12->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label10->Text;
	if (turn < 1 || turn >2)
	{
		label10->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label10->Text = "O";
		label10->ForeColor = Color::Maroon; count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label10->Text = "X";
		label10->ForeColor = Color::Maroon; count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label10->Text = symb;
		label10->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label10->Text = symb;
		label10->ForeColor = Color::Maroon;
	}
	if (label10->Text != "a")
	{
		if (label10->Text == label4->Text && label10->Text == label7->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label10->Text == label8->Text && label10->Text == label6->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label10->Text == label11->Text && label10->Text == label12->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label11->Text;
	if (turn < 1 || turn >2)
	{
		label11->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label11->Text = "O";
		label11->ForeColor = Color::Maroon;
		count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label11->Text = "X";
		label11->ForeColor = Color::Maroon;
		count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label11->Text = symb;
		label11->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label11->Text = symb;
		label11->ForeColor = Color::Maroon;
	}
	if (label11->Text != "a")
	{
		if (label11->Text == label5->Text && label11->Text == label8->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label11->Text == label10->Text && label11->Text == label12->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ symb = label12->Text;
	if (turn < 1 || turn >2)
	{
		label12->Text = "a";
	}
	if (turn == 1 && symb == "a" && tc1 < 1)
	{
		label12->Text = "O";
		label12->ForeColor = Color::Maroon; count++; tc1++;
	}
	if (turn == 2 && symb == "a" && tc2 < 1)
	{
		label12->Text = "X";
		label12->ForeColor = Color::Maroon; count++; tc2++;
	}
	if (turn == 1 && symb != "a")
	{
		label12->Text = symb;
		label12->ForeColor = Color::Maroon;
	}
	if (turn == 2 && symb != "a")
	{
		label12->Text = symb;
		label12->ForeColor = Color::Maroon;
	}
	if (label12->Text != "a")
	{
		if (label12->Text == label4->Text && label12->Text == label8->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label12->Text == label10->Text && label12->Text == label11->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
		if (label12->Text == label6->Text && label12->Text == label9->Text)
		{
			if (turn == 1)
			{
				win = 1;
				label13->Text = label3->Text + " Wins";
			}
			else
			{
				win = 2;
				label13->Text = label2->Text + " Wins";
			}
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = textBox1->Text;
	label14->Text = textBox1->Text + " has X";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = textBox2->Text;
	label15->Text = textBox2->Text + " has O";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	player1, player2, turn = 1, num_x = 0, num_o = 0, count = 0, d = 0;
	tc1 = 0, tc2 = 0, win = 0; turn = 1;
	label4->Text = "a"; label5->Text = "a"; label6->Text = "a"; label7->Text = "a";
	label8->Text = "a"; label9->Text = "a"; label10->Text = "a";
	label11->Text = "a"; label12->Text = "a"; label13->Text = " Game";
	label4->ForeColor = Color::Transparent; label5->ForeColor = Color::Transparent;
	label6->ForeColor = Color::Transparent; label7->ForeColor = Color::Transparent;
	label8->ForeColor = Color::Transparent; label9->ForeColor = Color::Transparent;
	label10->ForeColor = Color::Transparent; label11->ForeColor = Color::Transparent;
	label12->ForeColor = Color::Transparent; label2->BackColor = Color::White;
	label3->BackColor = Color::White;
}
};
}
