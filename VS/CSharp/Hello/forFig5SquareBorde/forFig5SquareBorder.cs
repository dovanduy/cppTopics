using System;
/*
 *      5. Квадратна рамка
 * 
 * Напишете програма, която чете цяло положително число n, въведено от потребителя, 
 * и чертае на конзолата квадратна рамка с размер n * n като в примерите.
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/617#4
 * */

namespace forFig5SquareBorde
{
    class forFig5SquareBorder
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            Console.Write("+");
            for (int i = 0; i < n-2; i++)
            {
                    Console.Write(" -");
            }
            Console.WriteLine(" +");

            for (int k = 0; k < n-2; k++)
            {
                Console.Write("|");
                for (int i = 0; i < n-2; i++)
                {
                        Console.Write(" -");
                }
                Console.WriteLine(" |");
            }

            Console.Write("+");
            for (int i = 0; i < n-2; i++)
            {
                    Console.Write(" -");
            }
            Console.WriteLine(" +");
        }
    }
}