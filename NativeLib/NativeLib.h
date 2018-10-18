#ifndef _NATIVELIB_H_
#define _NATIVELIB_H_

#ifndef MYAPI
#define MYAPI
#endif

#ifdef __cplusplus
extern "C" {
#endif

	__declspec(dllexport) const char* Print_line(const char* str);

	struct  TRANS_RECORD_DATA {
		int     ThrowItemCount;
	};

#ifdef __cplusplus
}
#endif

#endif // _NATIVELIB_H_
