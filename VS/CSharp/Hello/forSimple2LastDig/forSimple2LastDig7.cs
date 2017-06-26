using System;
// Напишете програма, която отпечатва числата в диапазона [1…1000], които завършват на 7.
// https://judge.softuni.bg/Contests/Practice/Index/616#1
namespace forSimple2LastDig
{
    class forSimple2LastDig7
    {
        static void Main(string[] args)
        {
            for (int i = 7; i < 1000; i+=10)
            {
                Console.Write("{0} ", i);
            }
        }
    }
}