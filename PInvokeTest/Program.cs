using System;
using System.Runtime.InteropServices;

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
        private string str;

        public void Print()
        {
            Print_line(ref str);
            Console.WriteLine(str);
        }

        [DllImport("NativeLib.dll")]
        private static extern string Print_line(ref string str);
    }
}