using System;
/*
 * 4.	Триъгълник от долари
 * 
 * Да се напише програма, която чете число n, въведено от потребителя, 
 * и печата триъгълник от долари.
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/617#3
 * */
namespace forFig4Triangle
{
    class forFig4Triangle
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int col = 0; col < n; col++)
            {
                for (int row = 0; row <= col; row++)
                {
                    Console.Write("$ ");
                };
                Console.WriteLine();
            }
        }
    }
}
