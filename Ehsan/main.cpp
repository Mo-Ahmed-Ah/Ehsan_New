#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    //  ‘€Ì· «·Ê«ÃÂ… «·—∆Ì”Ì… MainForm
    Application::Run(gcnew Ehsan::MainForm());

    return 0;
}

