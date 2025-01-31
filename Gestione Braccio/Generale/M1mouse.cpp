//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("M1mouse.res");
USEFORM("Unit1.cpp", Home);
USELIB("..\..\Interfaccia USB\Per Builder\lib\libfotone.lib");
USELIB("..\..\Interfaccia USB\Per Builder\lib\libusb.lib");
USEFORM("Unit3.cpp", AboutBox);
USEFORM("Unit4.cpp", AboutBox1);
USEFORM("Unit5.cpp", PagesDlg);
USEFORM("Unit6.cpp", rapidi);
USEFORM("Unit7.cpp", viewer);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "M1 for mouse";
                 Application->CreateForm(__classid(THome), &Home);
		Application->CreateForm(__classid(TAboutBox), &AboutBox);
		Application->CreateForm(__classid(TAboutBox1), &AboutBox1);
		Application->CreateForm(__classid(TPagesDlg), &PagesDlg);
		Application->CreateForm(__classid(Trapidi), &rapidi);
		Application->CreateForm(__classid(Tviewer), &viewer);
		Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
