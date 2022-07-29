#include "util.h"
#include "EFT.h"
#include "COD.h"
#include "Fortnite.h"

string user_response;



void console_title_with_date()
{
	SetConsoleTitleA(safe_encrypt("Apple Cleaner (Build date: January 14 2022 5:11pm)"));
}

void clean_anticheat()
{
	system(_xor_("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EasyAntiCheat /f").c_str());
	system(_xor_("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f").c_str());
	system(_xor_("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f").c_str());
}

void resetadaptaters()
{
	// CODE CLEARED MAKE OWN
}

void clean_network()
{
	system(_xor_("netsh winsock reset").c_str());
	system(_xor_("netsh winsock reset catalog").c_str());
	system(_xor_("netsh int ip reset").c_str());
	system(_xor_("netsh advfirewall reset").c_str());
	system(_xor_("netsh int reset all").c_str());
	system(_xor_("netsh int ipv4 reset").c_str());
	system(_xor_("netsh int ipv6 reset").c_str());
	system(_xor_("ipconfig / release").c_str());
	system(_xor_("ipconfig / renew").c_str());
	system(_xor_("ipconfig / flushdns").c_str());
	system("cls");
}

void clean_launcher() 
{
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Base.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseGame.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\WindowsGame.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseInput.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Portal\\Config\\UserLightmass.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\BaseWindowsLightmass.ini");
	DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\UserScalability.ini");
	DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Engine\\Config\\BaseHardware.ini");
	DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\NotForLicensees\\Windows\\WindowsHardware.ini");
}



void start_text()
{

    invalidoption:
	system(safe_encrypt("color 0b"));
	std::string user_response;
	cout << safe_encrypt("AppleCheats.cc (hello wassup)") << endl;
	cout << safe_encrypt("\n");
	cout << safe_encrypt("- What game do you want to clean?:") << endl;
	cout << safe_encrypt("\n");
	cout << safe_encrypt("[1] Fortmeme") << endl;
	cout << safe_encrypt("[2] EFT") << endl;
	cout << safe_encrypt("[3] Warzone/ColdWar") << endl;
	cout << safe_encrypt("[4] Exit") << endl;
	cout << safe_encrypt("\n");
	cout << safe_encrypt("-> Option:");
	cout << safe_encrypt(" ");
	std::getline(std::cin, user_response);
	if (user_response == "1")
	{
		cleanFN();
	}
	else if (user_response == "2")
	{
		cleanWZandCW();
	}
	else if (user_response == "3")
	{
		cleanEFT();
	}
	else
	{
		system(safe_encrypt("CLS"));
		goto invalidoption;
	}
}
	
int main()
{
	
	console_title_with_date();
	start_text();


	Sleep(-1);
}
