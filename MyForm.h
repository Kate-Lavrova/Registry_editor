#pragma once

#include <regex> 
#include "windows.h"
#include <map>
// #include <myregexlib> 
// #include <boost\regex.hpp>

namespace Regedit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Win32;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;
	



	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
	
		}

	protected:

	// Освободить все используемые ресурсы.

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  загрузитьКустToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выгрузитьКустToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button6;





	protected: 

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьКустToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выгрузитьКустToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
	
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 2;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			
			// treeView1
		
			this->treeView1->Location = System::Drawing::Point(0, 27);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(184, 304);
			this->treeView1->TabIndex = 4;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			
			// menuStr.
			
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->файлToolStripMenuItem, 
				this->справкаToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(623, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
		
			// файлToolStripMenuItem
			
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->загрузитьКустToolStripMenuItem, 
				this->выгрузитьКустToolStripMenuItem, this->выходToolStripMenuItem});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			 
			// загрузитьКустToolStripMenuItem
			 
			this->загрузитьКустToolStripMenuItem->Name = L"загрузитьКустToolStripMenuItem";
			this->загрузитьКустToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->загрузитьКустToolStripMenuItem->Text = L"Загрузить куст";
			this->загрузитьКустToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::загрузитьКустToolStripMenuItem_Click);
			 
			// выгрузитьКустToolStripMenuItem
			 
			this->выгрузитьКустToolStripMenuItem->Name = L"выгрузитьКустToolStripMenuItem";
			this->выгрузитьКустToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->выгрузитьКустToolStripMenuItem->Text = L"Выгрузить куст";
			this->выгрузитьКустToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выгрузитьКустToolStripMenuItem_Click);
			 
			// выходToolStripMenuItem
			 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			 
			// справкаToolStripMenuItem
			 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			 
			// pictureBox1 ^^
			 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(190, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			 
			// openFileDialog1
			
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			
			// textBox1
			
			this->textBox1->Location = System::Drawing::Point(423, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			
			// button1
			 
			this->button1->Location = System::Drawing::Point(529, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Справка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			
			// button2
			
			this->button2->Location = System::Drawing::Point(529, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Искать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			
			// textBox2
			 
			this->textBox2->Location = System::Drawing::Point(423, 110);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			
			// dataGridView1
			 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column1});
			this->dataGridView1->Location = System::Drawing::Point(404, 245);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(200, 138);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			 
			// Column1
			
			this->Column1->HeaderText = L"Имя";
			this->Column1->Name = L"Column1";
			
			// button4
			 
			this->button4->Location = System::Drawing::Point(0, 337);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 46);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Создать резервную копию";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			
			// label2
			
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(423, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 16;
			
			// radioButton3
			 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(423, 176);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(84, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->Text = L"ClassesRoot";
			this->radioButton3->UseVisualStyleBackColor = true;
			 
			// radioButton4
			 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(423, 199);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(89, 17);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->Text = L"CurrentConfig";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			 
			// radioButton1
			/
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(423, 136);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(81, 17);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->Text = L"CurrentUser";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			 
			// radioButton2
			 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(423, 155);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(92, 17);
			this->radioButton2->TabIndex = 20;
			this->radioButton2->Text = L"LocalMachine";
			this->radioButton2->UseVisualStyleBackColor = true;
			
			// radioButton5
			 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(423, 222);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(49, 17);
			this->radioButton5->TabIndex = 21;
			this->radioButton5->Text = L"Uses";
			this->radioButton5->UseVisualStyleBackColor = true;
			
			// button3
			
			this->button3->Location = System::Drawing::Point(190, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 35);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			 
			// button5
			 
			this->button5->Location = System::Drawing::Point(190, 263);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 27);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Переименовать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			 
			// textBox3
			 
			this->textBox3->Location = System::Drawing::Point(191, 296);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 24;
			
			// label3
			 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(297, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Введите имя";
			 

			// button6
			
			this->button6->Location = System::Drawing::Point(297, 222);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 35);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Создать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			
			// MyForm
			
		
	
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 382);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Редактор реестра ^^";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


//  файлик add о.о

#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			
			 }

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 // creating name for section
				 String ^st = Registry::ClassesRoot->Name; 
				 String ^st_2 = Registry::CurrentConfig->Name;
				 String ^st_3 = Registry::CurrentUser->Name;
				 String ^st_4 = Registry::Users->Name;
				 String ^st_5 = Registry::LocalMachine->Name;



		
				 // view name section
				 TreeNode ^node = treeView1->Nodes->Add(st);
				 
				 array <String^>^stSubSection = Registry::ClassesRoot->GetSubKeyNames();
				// String ^subSection = stSubSection[1];
				 //RegistryKey^ str = Registry::CurrentUser->OpenSubKey("Console");

				// array <String^> ^stt = str->GetSubKeyNames();

				 array <String^>^ str;
				 //MessageBox::Show(stt[0] + " sdrg");
				 // view content section
				 for(int i(0); i < 10; i++)
				 {
					 //node->Nodes->Add(myArray[i]);
					 //node->Nodes->Add(stSubSection[i]);
					 RegistryKey^ key = Registry::ClassesRoot->OpenSubKey(stSubSection[i]);
					 str = key->GetSubKeyNames();

					 if(str->Length > 0)
					 {
						 node = treeView1->Nodes->Add(stSubSection[i]);
						 						 
						 for(int ii(0); ii < str->Length; ii++)
						 {
							 node->Nodes->Add(str[ii]);
					 
						 }
				    }
					 else
					 {
					 
						 node->Nodes->Add(stSubSection[i]);
					 }
				 }
				 
				/*for(int i(0); i < stSubSection->Length; i++)
				 {
					 node->Nodes->Add(stSubSection[i]);
				 }*/

				 TreeNode ^node_2 = treeView1->Nodes->Add(st_2);
				 array <String^>^stSubSection_2 = Registry::CurrentConfig->GetSubKeyNames();

				 for(int i(0); i < 2; i++)
				 {
					 //node->Nodes->Add(myArray[i]);
					 //node->Nodes->Add(stSubSection[i]);
					 RegistryKey^ key_2 = Registry::CurrentConfig->OpenSubKey(stSubSection_2[i]);
					 str = key_2->GetSubKeyNames();

					 if(str->Length > 0)
					 {
						 node_2 = treeView1->Nodes->Add(stSubSection_2[i]);
						 

						 for(int ii(0); ii < str->Length; ii++)
						 {
							 node_2->Nodes->Add(str[ii]);
					 
						 }
				    }
					 else
					 {
					 
						 node_2->Nodes->Add(stSubSection_2[i]);
					 }
				 }
				 

				 TreeNode ^node_3 = treeView1->Nodes->Add(st_3);
				 array <String^>^stSubSection_3 = Registry::CurrentUser->GetSubKeyNames();

				 for(int i(0); i < 10; i++)
				 {
					 //node->Nodes->Add(myArray[i]);
					 //node->Nodes->Add(stSubSection[i]);
					 RegistryKey^ key_3 = Registry::CurrentUser->OpenSubKey(stSubSection_3[i]);
					 str = key_3->GetSubKeyNames();

					 if(str->Length > 0)
					 {
						 node_3 = treeView1->Nodes->Add(stSubSection_3[i]);
						 

						 for(int ii(0); ii < str->Length; ii++)
						 {
							 node_3->Nodes->Add(str[ii]);
					 
						 }
				    }
					 else
					 {
					 
						 node_3->Nodes->Add(stSubSection_3[i]);
					 }
				 }
				 

				 TreeNode ^node_4 = treeView1->Nodes->Add(st_4);
				 array <String^>^stSubSection_4 = Registry::Users->GetSubKeyNames();

				 for(int i(0); i < 5; i++)
				 {
					
					 if(str->Length > 0)
					 {
						 node_4 = treeView1->Nodes->Add(stSubSection_4[i]);
						 
						 for(int ii(0); ii < str->Length; ii++)
						 {
							 node_4->Nodes->Add(str[ii])->BackColor;
					 
						 }
				    }
					 else
					 {
					 
						 node_4->Nodes->Add(stSubSection_4[i]);
					 }
				 }
				 

				 TreeNode ^node_5 = treeView1->Nodes->Add(st_5);
				 array <String^>^stSubSection_5 = Registry::LocalMachine->GetSubKeyNames();

				 for(int i(0); i < 5; i++)
				 {
					

					 if(str->Length > 0)
					 {
						 node_5 = treeView1->Nodes->Add(stSubSection_5[i]);
						 

						 for(int ii(0); ii < str->Length; ii++)
						 {
							 node_5->Nodes->Add(str[ii]);
					 
						 }
				    }
					 else
					 {
					 
						 node_5->Nodes->Add(stSubSection_5[i]);
					 }
				 }	 

			 }

private: System::Void файлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {



		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 int numberSection = 1;
			 int result;
			
			 dataGridView1->RowCount = 10;
			 array <String^>^stSubSection;

			 if(radioButton1->Checked == true)
			 {
				 numberSection = 1;
			 }
			 else
				 if(radioButton2->Checked == true)
				 {
					 numberSection = 2;
				 }
				 else
					 if(radioButton3->Checked == true)
					 {
						 numberSection = 3;
					 }
					 else
						 if(radioButton4->Checked == true)
						{
							numberSection = 4;
						}
						else
						{
							numberSection = 5;
						}

			 switch (numberSection)
			 {
			 case 1:
				 {
					stSubSection = Registry::CurrentUser->GetSubKeyNames();
					break;
				 }
			 case 2:
				 {
					//dataGridView1->RowCount = 10;
					stSubSection = Registry::LocalMachine->GetSubKeyNames();
					break;
				}
			 case 3:
				 {
					 //dataGridView1->RowCount = 10;
					 stSubSection = Registry::ClassesRoot->GetSubKeyNames();
					 break;
				 }
			 case 4:
				 {
					 //dataGridView1->RowCount = 10;
					 stSubSection = Registry::CurrentConfig->GetSubKeyNames();
					 break; 
				 }
			case 5:
				 {
					 //dataGridView1->RowCount = 10;
					 stSubSection = Registry::Users->GetSubKeyNames();
					 break; 
				 }

			 }

			 String ^st = textBox2->Text;

			int indexRows = 0;
			int lengthArray = stSubSection->Length;


			for(int i(0); i < lengthArray; i++)
				if((Regex::IsMatch(stSubSection[i], st)) && (indexRows < 10))
				{
					dataGridView1->Rows[indexRows]->Cells[0]->Value = stSubSection[i];
					indexRows++;
				}
		
		 }
private: System::Void справкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
						
			 MessageBox::Show("Курсовой проект «Редактор реестра с возможностью поиска по регулярным выражениям»по дисциплине «Системное программное обеспечение вычислительных машин»");
			 

		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
			 array<String^>^ arrayHelp;
			
			 
			 String ^fileName = "S:\\Учеба (Универ)\\4 семестр\\Курсач СПОВМ\\Курсач\\Help.txt";


			 //dataGridView2->RowCount = 10;
			 StreamReader ^file = File::OpenText(fileName);
	
			 
			 String ^str;
			 char symbol;
			 symbol = textBox1->Text[1];


			 while ((str = file->ReadLine()) != nullptr)
				 if(str[1] == symbol)
				 {
					 label2->Text = str;
					 break;					
				 }

			 //String ^str;


			 //while ((str = file->ReadLine()) != ch)
			 //{

			 //}
			
		 }		
			
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 saveFileDialog1->ShowDialog();
		 }
private: System::Void выгрузитьКустToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			
			 saveFileDialog1->ShowDialog();
		 }
private: System::Void загрузитьКустToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			  openFileDialog1->ShowDialog();
		 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			Application::Exit();


		 }
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		  
		 
		 }

private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {

			 

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 TreeNode ^node = treeView1->SelectedNode;
			 if(node != nullptr)
			 {
				 treeView1->Nodes->Remove(node);
			 
			 }
			

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 TreeNode ^node = treeView1->SelectedNode;

			
			 node->Text = textBox3->Text;

			 

		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 TreeNode ^node = treeView1->Nodes->Add(textBox3->Text);
			

		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};

}
