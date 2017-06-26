using System;

/*     2. Правоъгълник от N x N звездички
 * Чете цяло положително число n, въведено от потребителя, и 
 * печата на конзолата правоъгълник от n * n звездички.
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/617#1
 * */
namespace forFig2SquareN
{
    class forFig2SquareN
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine()) ;
            for (int col = 0; col < n; col++)
            {
                for (int row = 0; row < n; row++)
                {
                    Console.Write("*");
                };
                Console.WriteLine();
            }
        }
    }
}
