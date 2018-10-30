#ifndef _NATIVELIB_H_
#define _NATIVELIB_H_
#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif
#ifndef MYAPI
#define MYAPI
#endif
typedef struct Vertex {
	float x;
	float y;
	float z;

	/// constructor
	Vertex() : x(0), y(0), z(0) {}
	Vertex(float x1, float y1, float z1) {
		x = x1; y = y1; z = z1;
	}

	~Vertex() {}
	 
} Vertex;
struct  TRANS_RECORD_DATA {
	int     ThrowItemCount;
	Vertex* arrayValue;
	float floatValue;
	//TRANS_RECORD_DATA(): ThrowItemCount(0), arrayValue(NULL),floatValue(0)
	//{ 

	//}
} ;


#ifdef __cplusplus
extern "C" {
#endif

	__declspec(dllexport)  void LoadData( );
	__declspec(dllexport)  void Print_line(char* str);
	__declspec(dllexport) void Print_Struct(TRANS_RECORD_DATA *str);
	__declspec(dllexport)  void PopulateArray(Vertex** intptr, int* count);
#ifdef __cplusplus
}
#endif

#endif // _NATIVELIB_H_
