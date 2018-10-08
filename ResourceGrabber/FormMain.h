#pragma once


namespace ResourceGrabber {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class FormMain : public System::Windows::Forms::Form
	{
		literal String^ SECTION_OPTION = L"Option";
		literal String^ KEY_SELECTEDTAB = L"SelectedTab";
	private: System::Windows::Forms::CheckBox^  chkShareRead;
	private: System::Windows::Forms::CheckBox^  chkShareDelete;
	private: System::Windows::Forms::CheckBox^  chkShareWrite;

		static initonly String^ inipath_;

	public:
		static FormMain() {
			inipath_ = Path::Combine(Path::GetDirectoryName(Application::ExecutablePath),
				Path::GetFileNameWithoutExtension(Application::ExecutablePath) + L".ini");
		}
		FormMain();

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  spRoot;
	protected:
	private: System::Windows::Forms::Button^  btnCloseClipboard;
	private: System::Windows::Forms::Button^  btnOpenClipboard;
	private: System::Windows::Forms::RichTextBox^  rtxtLog;
	private: System::Windows::Forms::Button^  btnSetTextOnClipbard;
	private: System::Windows::Forms::TabControl^  tabMain;
	private: System::Windows::Forms::TabPage^  pageClipBoard;
	private: System::Windows::Forms::TabPage^  pageFile;

	private: System::Windows::Forms::Button^  btnEmptyClipboard;
	private: System::Windows::Forms::TextBox^  txtPath;
	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::Button^  btnOpenFile;

	private: System::Windows::Forms::Button^  btnCloseHandle;



	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->spRoot = (gcnew System::Windows::Forms::SplitContainer());
			this->tabMain = (gcnew System::Windows::Forms::TabControl());
			this->pageClipBoard = (gcnew System::Windows::Forms::TabPage());
			this->btnEmptyClipboard = (gcnew System::Windows::Forms::Button());
			this->btnSetTextOnClipbard = (gcnew System::Windows::Forms::Button());
			this->btnOpenClipboard = (gcnew System::Windows::Forms::Button());
			this->btnCloseClipboard = (gcnew System::Windows::Forms::Button());
			this->pageFile = (gcnew System::Windows::Forms::TabPage());
			this->chkShareDelete = (gcnew System::Windows::Forms::CheckBox());
			this->chkShareWrite = (gcnew System::Windows::Forms::CheckBox());
			this->chkShareRead = (gcnew System::Windows::Forms::CheckBox());
			this->btnCloseHandle = (gcnew System::Windows::Forms::Button());
			this->btnOpenFile = (gcnew System::Windows::Forms::Button());
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->rtxtLog = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->spRoot))->BeginInit();
			this->spRoot->Panel1->SuspendLayout();
			this->spRoot->Panel2->SuspendLayout();
			this->spRoot->SuspendLayout();
			this->tabMain->SuspendLayout();
			this->pageClipBoard->SuspendLayout();
			this->pageFile->SuspendLayout();
			this->SuspendLayout();
			// 
			// spRoot
			// 
			this->spRoot->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spRoot->Location = System::Drawing::Point(0, 0);
			this->spRoot->Name = L"spRoot";
			this->spRoot->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// spRoot.Panel1
			// 
			this->spRoot->Panel1->Controls->Add(this->tabMain);
			// 
			// spRoot.Panel2
			// 
			this->spRoot->Panel2->Controls->Add(this->rtxtLog);
			this->spRoot->Size = System::Drawing::Size(732, 556);
			this->spRoot->SplitterDistance = 354;
			this->spRoot->TabIndex = 0;
			// 
			// tabMain
			// 
			this->tabMain->Controls->Add(this->pageClipBoard);
			this->tabMain->Controls->Add(this->pageFile);
			this->tabMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabMain->Location = System::Drawing::Point(0, 0);
			this->tabMain->Name = L"tabMain";
			this->tabMain->SelectedIndex = 0;
			this->tabMain->Size = System::Drawing::Size(732, 354);
			this->tabMain->TabIndex = 3;
			// 
			// pageClipBoard
			// 
			this->pageClipBoard->Controls->Add(this->btnEmptyClipboard);
			this->pageClipBoard->Controls->Add(this->btnSetTextOnClipbard);
			this->pageClipBoard->Controls->Add(this->btnOpenClipboard);
			this->pageClipBoard->Controls->Add(this->btnCloseClipboard);
			this->pageClipBoard->Location = System::Drawing::Point(4, 22);
			this->pageClipBoard->Name = L"pageClipBoard";
			this->pageClipBoard->Padding = System::Windows::Forms::Padding(3);
			this->pageClipBoard->Size = System::Drawing::Size(724, 328);
			this->pageClipBoard->TabIndex = 0;
			this->pageClipBoard->Text = L"Clipboard";
			this->pageClipBoard->UseVisualStyleBackColor = true;
			// 
			// btnEmptyClipboard
			// 
			this->btnEmptyClipboard->Location = System::Drawing::Point(8, 38);
			this->btnEmptyClipboard->Name = L"btnEmptyClipboard";
			this->btnEmptyClipboard->Size = System::Drawing::Size(131, 25);
			this->btnEmptyClipboard->TabIndex = 3;
			this->btnEmptyClipboard->Text = L"&Empty Clipboard";
			this->btnEmptyClipboard->UseVisualStyleBackColor = true;
			this->btnEmptyClipboard->Click += gcnew System::EventHandler(this, &FormMain::btnEmptyClipboard_Click);
			// 
			// btnSetTextOnClipbard
			// 
			this->btnSetTextOnClipbard->Location = System::Drawing::Point(8, 69);
			this->btnSetTextOnClipbard->Name = L"btnSetTextOnClipbard";
			this->btnSetTextOnClipbard->Size = System::Drawing::Size(131, 25);
			this->btnSetTextOnClipbard->TabIndex = 2;
			this->btnSetTextOnClipbard->Text = L"Set Text on Clipbard";
			this->btnSetTextOnClipbard->UseVisualStyleBackColor = true;
			this->btnSetTextOnClipbard->Click += gcnew System::EventHandler(this, &FormMain::btnSetTextOnClipbard_Click);
			// 
			// btnOpenClipboard
			// 
			this->btnOpenClipboard->Location = System::Drawing::Point(8, 7);
			this->btnOpenClipboard->Name = L"btnOpenClipboard";
			this->btnOpenClipboard->Size = System::Drawing::Size(131, 25);
			this->btnOpenClipboard->TabIndex = 0;
			this->btnOpenClipboard->Text = L"Open Clipbard";
			this->btnOpenClipboard->UseVisualStyleBackColor = true;
			this->btnOpenClipboard->Click += gcnew System::EventHandler(this, &FormMain::btnOpenClipboard_Click);
			// 
			// btnCloseClipboard
			// 
			this->btnCloseClipboard->Location = System::Drawing::Point(8, 296);
			this->btnCloseClipboard->Name = L"btnCloseClipboard";
			this->btnCloseClipboard->Size = System::Drawing::Size(131, 25);
			this->btnCloseClipboard->TabIndex = 1;
			this->btnCloseClipboard->Text = L"Close Clipbard";
			this->btnCloseClipboard->UseVisualStyleBackColor = true;
			this->btnCloseClipboard->Click += gcnew System::EventHandler(this, &FormMain::btnCloseClipboard_Click);
			// 
			// pageFile
			// 
			this->pageFile->Controls->Add(this->chkShareDelete);
			this->pageFile->Controls->Add(this->chkShareWrite);
			this->pageFile->Controls->Add(this->chkShareRead);
			this->pageFile->Controls->Add(this->btnCloseHandle);
			this->pageFile->Controls->Add(this->btnOpenFile);
			this->pageFile->Controls->Add(this->btnBrowse);
			this->pageFile->Controls->Add(this->txtPath);
			this->pageFile->Location = System::Drawing::Point(4, 22);
			this->pageFile->Name = L"pageFile";
			this->pageFile->Padding = System::Windows::Forms::Padding(3);
			this->pageFile->Size = System::Drawing::Size(724, 328);
			this->pageFile->TabIndex = 1;
			this->pageFile->Text = L"File";
			this->pageFile->UseVisualStyleBackColor = true;
			// 
			// chkShareDelete
			// 
			this->chkShareDelete->AutoSize = true;
			this->chkShareDelete->Location = System::Drawing::Point(288, 62);
			this->chkShareDelete->Name = L"chkShareDelete";
			this->chkShareDelete->Size = System::Drawing::Size(111, 17);
			this->chkShareDelete->TabIndex = 4;
			this->chkShareDelete->Text = L"SHARE_DELETE";
			this->chkShareDelete->UseVisualStyleBackColor = true;
			// 
			// chkShareWrite
			// 
			this->chkShareWrite->AutoSize = true;
			this->chkShareWrite->Location = System::Drawing::Point(148, 62);
			this->chkShareWrite->Name = L"chkShareWrite";
			this->chkShareWrite->Size = System::Drawing::Size(105, 17);
			this->chkShareWrite->TabIndex = 4;
			this->chkShareWrite->Text = L"SHARE_WRITE";
			this->chkShareWrite->UseVisualStyleBackColor = true;
			// 
			// chkShareRead
			// 
			this->chkShareRead->AutoSize = true;
			this->chkShareRead->Location = System::Drawing::Point(8, 62);
			this->chkShareRead->Name = L"chkShareRead";
			this->chkShareRead->Size = System::Drawing::Size(99, 17);
			this->chkShareRead->TabIndex = 4;
			this->chkShareRead->Text = L"SHARE_READ";
			this->chkShareRead->UseVisualStyleBackColor = true;
			// 
			// btnCloseHandle
			// 
			this->btnCloseHandle->Location = System::Drawing::Point(8, 295);
			this->btnCloseHandle->Name = L"btnCloseHandle";
			this->btnCloseHandle->Size = System::Drawing::Size(660, 25);
			this->btnCloseHandle->TabIndex = 3;
			this->btnCloseHandle->Text = L"&Close handle";
			this->btnCloseHandle->UseVisualStyleBackColor = true;
			this->btnCloseHandle->Click += gcnew System::EventHandler(this, &FormMain::btnCloseHandle_Click);
			// 
			// btnOpenFile
			// 
			this->btnOpenFile->Location = System::Drawing::Point(8, 85);
			this->btnOpenFile->Name = L"btnOpenFile";
			this->btnOpenFile->Size = System::Drawing::Size(660, 25);
			this->btnOpenFile->TabIndex = 2;
			this->btnOpenFile->Text = L"&Open File";
			this->btnOpenFile->UseVisualStyleBackColor = true;
			this->btnOpenFile->Click += gcnew System::EventHandler(this, &FormMain::btnOpenFile_Click);
			// 
			// btnBrowse
			// 
			this->btnBrowse->Location = System::Drawing::Point(674, 36);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(42, 21);
			this->btnBrowse->TabIndex = 1;
			this->btnBrowse->Text = L"&...";
			this->btnBrowse->UseVisualStyleBackColor = true;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &FormMain::btnBrowse_Click);
			// 
			// txtPath
			// 
			this->txtPath->AllowDrop = true;
			this->txtPath->Location = System::Drawing::Point(8, 36);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(660, 20);
			this->txtPath->TabIndex = 0;
			this->txtPath->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &FormMain::txtPath_DragDrop);
			this->txtPath->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &FormMain::txtPath_DragEnter);
			this->txtPath->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &FormMain::txtPath_DragOver);
			this->txtPath->DragLeave += gcnew System::EventHandler(this, &FormMain::txtPath_DragLeave);
			// 
			// rtxtLog
			// 
			this->rtxtLog->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rtxtLog->Location = System::Drawing::Point(0, 0);
			this->rtxtLog->Name = L"rtxtLog";
			this->rtxtLog->Size = System::Drawing::Size(732, 198);
			this->rtxtLog->TabIndex = 0;
			this->rtxtLog->Text = L"";
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 556);
			this->Controls->Add(this->spRoot);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormMain";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormMain::FormMain_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->spRoot->Panel1->ResumeLayout(false);
			this->spRoot->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->spRoot))->EndInit();
			this->spRoot->ResumeLayout(false);
			this->tabMain->ResumeLayout(false);
			this->pageClipBoard->ResumeLayout(false);
			this->pageFile->ResumeLayout(false);
			this->pageFile->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private:
		HANDLE hFile_;
		property HWND Hwnd
		{
			HWND get()
			{
				return (HWND)this->Handle.ToPointer();
			}
		}
		property String^ IniPath
		{
			String^ get() {
				return inipath_;
			}
		}
		void AddToLog(String^ text)
		{
			rtxtLog->AppendText(text);
			rtxtLog->AppendText(Environment::NewLine);

			rtxtLog->Select(rtxtLog->TextLength - 1, 0);
			rtxtLog->ScrollToCaret();
		}
		void AddToErrorLog(String^ text)
		{
			AddToLog(text);
		}
		void AddToErrorLog(String^ text, DWORD dwLastError);















	private:
		System::Void btnOpenClipboard_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void btnSetTextOnClipbard_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void btnCloseClipboard_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void btnEmptyClipboard_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void btnOpenFile_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void btnCloseHandle_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void FormMain_Load(System::Object^  sender, System::EventArgs^  e);
		System::Void FormMain_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
		System::Void txtPath_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e);
		System::Void txtPath_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e);
		System::Void txtPath_DragLeave(System::Object^  sender, System::EventArgs^  e);
		System::Void txtPath_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e);


};
}

