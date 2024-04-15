// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CICD16_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CICD16_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CICD16_EXPORTS
#define CICD16_API __declspec(dllexport)
#else
#define CICD16_API __declspec(dllimport)
#endif

class CICD16_API MathFunctions {
public:
	MathFunctions();
	double RectangleArea(double length, double width);
};