#ifndef TOSSTRING
#define TOSSTRING
#include <string>
static std::string tosstring(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;

	if (string->Length == 0 || string->Length < 0)
	{
		//MessageBox::Show("No field can be empty");

	}

	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);


	return returnString;
}
#endif