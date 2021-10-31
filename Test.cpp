#include <string>
#include <iostream>

int main()
{
	// To check for compiler output and intellisense.
	using namespace std;

	cout << "Hello CMake." << endl;

#if defined(__GNUC__)
	cout << "__GNUC__ IS DEFINED." << endl;
#endif

#if defined(__clang__)
	cout << "__clang__ IS DEFINED." << endl;
#endif

#if defined(_MSC_VER)
	cout << "_MSC_VER IS DEFINED." << endl;
#endif

#if defined(NDEBUG)
	cout << "NDEBUG IS DEFINED." << endl;
#endif

#if defined(__OPTIMIZE__)
	cout << "__OPTIMIZE__ IS DEFINED" << endl;
#endif

	cout << "sizeof long: " << to_string(sizeof(long)) << endl;
	cout << "sizeof int: " << to_string(sizeof(int)) << endl;
	cout << "sizeof void*: " << to_string(sizeof(void*)) << endl;

#if defined(_M_X64)
	cout << "_M_X64 IS DEFINED." << endl;
#endif

#if defined(__x86_64__)
	cout << "__x86_64__ IS DEFINED." << endl;
#endif

	return 0;
}
