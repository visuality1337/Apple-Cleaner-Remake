#include "util.h"


void cleanWZandCW()
{
	DeleteFileW(L"C:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"C:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"C:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"C:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"C:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"C:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");
	DeleteFileW(L"C:\\Windows\\INF\\keyboard.pnf");
	DeleteFileW(L"C:\\Windows\\INF\\netrasa.pnf");
	DeleteFileW(L"C:\\Windows\\INF\\netavpna.pnf");
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\keyboard.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\keyboard.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\keyboard.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\bthpan.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\bthpan.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\bthpan.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\netvwifimp.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\netvwifimp.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\netvwifimp.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\b57nd60a.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\b57nd60a.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\b57nd60a.inf_loc").c_str());
	DeleteFileW(L"D:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"D:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"D:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"D:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"D:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"D:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"D:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");


	/*MessageBoxA(0, "[RISKY] Reset Adaptaters ? [RECOMMENDED OPTION]", "AppleCheats.cc", MB_ICONWARNING, user_response, 0);
	if (user_response == "USER_OK")
	{
		resetadaptaters();
	}
	else
	{
	}*/
}