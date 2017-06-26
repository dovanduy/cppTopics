using System;

/*
   3. Квадрат от звездички
   Напишете програма, която чете число n, въведено от потребителя, 
   и чертае квадрат от n * n звездички. 
   
    Разликата с предходната задача е, че между всеки две звездички има по един интервал.
    https://judge.softuni.bg/Contests/Practice/Index/617#2
 * */
namespace forFig3SquareStars
{
    class forFig3SquareStars
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int col = 0; col < n; col++)
            {
                for (int row = 0; row < n; row++)
                {
                    Console.Write("* ");
                };
                Console.WriteLine();
            }
        }
    }
}
