using System;
/*
 * Напишете програма, която чертае на конзолата правоъгълник от 10 x 10 звездички.
 * */
// https://judge.softuni.bg/Contests/Practice/Index/617#0
namespace forFig1Square10
{
    class forFig1Square10
    {
        static void Main(string[] args)
        {
            int n = 10;
            for (int col = 0; col < 10; col++)
            {
                for (int row = 0; row < 10; row++)
                {
                    Console.Write("*");
                };
                Console.WriteLine();
            }
        }
    }
}
