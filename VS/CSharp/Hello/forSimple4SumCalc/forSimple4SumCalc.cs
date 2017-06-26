using System;
/*
    Да се напише програма, която чете n-на брой цели числа, въведени от потребителя, и ги сумира.
    •	От първия ред на входа се въвежда броят числа n.
    •	От следващите n реда се въвежда по едно цяло число.

    Програмата трябва да прочете числата, 
    да ги сумира и да отпечата сумата им. 
*/
// https://judge.softuni.bg/Contests/Practice/Index/616#3

namespace forSimple4SumCalc
{
    class forSimple4SumCalc
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            long sum = 0;
            for (int i = 0; i < n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                sum += num;
            }
            Console.WriteLine(sum);
        }
    }
}