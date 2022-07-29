#include "util.h"

void cleanEFT()
{
	system(_xor_("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f").c_str());

	DeleteFileW(L"E:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"E:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"E:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"E:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"E:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"E:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"E:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");

	DeleteFileW(L"F:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"F:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"F:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"F:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"F:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"F:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"F:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");

	/*MessageBoxA(0, "[RISKY] Reset Adaptaters ? [RECOMMENDED OPTION]", "AppleCheats.cc", MB_ICONWARNING, user_response, 0);
	if (user_response == "USER_OK")
	{
		resetadaptaters();
	}
	else
	{
	}*/
}