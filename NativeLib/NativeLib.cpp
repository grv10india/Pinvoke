#include "NativeLib.h"
#include <stdio.h>
#include<string.h>
#include <iostream>

TRANS_RECORD_DATA*  stra = new TRANS_RECORD_DATA;
void Print_line(char* str) { 

	strcpy(str, "Bar");
	printf("%s\n", str);
	return;
} 
void LoadData()
{
	stra->arrayValue = new Vertex[12];
	stra->floatValue = .552;
	stra->ThrowItemCount = 34;
	for (int c = 0; c < 12; c++) {
		int vertexIndex = c * 3;

		stra->arrayValue[c].x = vertexIndex;
		stra->arrayValue[c].y = vertexIndex * 2 + 1;
		stra->arrayValue[c].z = vertexIndex * 6 + 2;

	}
}
void Print_Struct(TRANS_RECORD_DATA *str) {
	str->ThrowItemCount = stra->ThrowItemCount;
	str->floatValue = stra->floatValue;

	//Marshal.Copy(str, stra, 0, 20);


	for (int i = 0; i < 12; i++)
	{
		str->arrayValue[i].x = stra->arrayValue[i].x;
		str->arrayValue[i].y = stra->arrayValue[i].y;
		str->arrayValue[i].z = stra->arrayValue[i].z;
	}
	return;
}
	void PopulateArray(Vertex** intptr, int* count)
	{

		*count = 12;
		for (int i = 0; i < *count; i++)
		{
			*(intptr+i) = &stra->arrayValue[i];
		} 
	}
