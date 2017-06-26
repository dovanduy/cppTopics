using System;
// Напишете програма, която отпечатва всички букви от латинската азбука: a, b, c, …, z
// https://judge.softuni.bg/Contests/Practice/Index/616#2
namespace forSimple3LatinChars
{
    class forSimple3LatinChars
    {
        static void Main(string[] args)
        {
            Console.Write("Latin alphabet: ");
            for (char i = 'a'; i <= 'z' ; i++)
            {
                Console.Write("{0} ", i);
            }
        }
    }
}