using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace PInvokeTest
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            new Printer().Print();
        }
    }

    public class Printer
    {
        private StringBuilder str = new StringBuilder(256);
        public TRANS_RECORD_DATA strData = new TRANS_RECORD_DATA();
        IntPtr intptr = new IntPtr();

        public void Print()
        {
            LoadData();

            //Print_line(str);
            //Console.WriteLine(str + "  g    a");
            //Print_Struct(ref strData);
            //Console.WriteLine(strData.ThrowItemCount + "  g    a");
            int count = 0;
            PopulateArray(ref strData.arrayValue, ref count);
            float[] resultVertices = new float[count];
             //Marshal.Copy(intptr, strData, 0, count);
        }

        [DllImport("NativeLib.dll")]
        private static extern void Print_line(StringBuilder str);
        [DllImport("NativeLib.dll")]
        private static extern void LoadData( );

        [DllImport("NativeLib.dll")]
        private static extern void Print_Struct(ref TRANS_RECORD_DATA str);


        [DllImport("NativeLib.dll")]
        private static extern void PopulateArray(ref Vertex[] intptr, ref int count);

    }

    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
    public struct TRANS_RECORD_DATA
    {
        public int ThrowItemCount1;
        public  Vertex[]  arrayValue; 
        public int ThrowItemCount;
        public float floatValue;

    //   internal TRANS_RECORD_DATA(int a)
    //    {
    //        ThrowItemCount1=0;
    //      arrayValue = new Vertex[12];
    //    ThrowItemCount =8;
    //      floatValue= 0.5f;
    //}
    };
     public struct Vertex
    {
        float x;
        float y;
        float z;
         
        ///// constructor 
        //Vertex(float x1, float y1, float z1)
        //{
        //    x = x1; y = y1; z = z1;
        //}


    };
}