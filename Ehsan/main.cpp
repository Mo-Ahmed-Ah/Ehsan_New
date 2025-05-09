/*/#include "MainForm.h"
#include "AssistanceTypeForm.h"
using namespace Ehsan;


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Ehsan::MainForm form;
    Application::Run(gcnew AssistanceTypeForm());

  //  Application::Run(% form);
    return 0;
}

#include "AssistanceTypeForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Ehsan::AssistanceTypeForm());
    return 0;
}*/
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

