using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TribonachiTriangle
{
    class Program
    { // http://bgcoder.com/Contests/Practice/Index/41#1
        static long t1, t2, t3;
        static int n;
        static long tribNum(int seqNum)
        {
            if (1 == seqNum)
                return t1;
            else if (2 == seqNum)
                return t2;
            else if (3 == seqNum) return t3;
            return tribNum(seqNum - 1) + tribNum(seqNum - 2) + tribNum(seqNum - 3);
        }
        static void ver1Slow(string[] args)
        {
            t1 = long.Parse(Console.ReadLine());
            t2 = long.Parse(Console.ReadLine());
            t3 = long.Parse(Console.ReadLine());
            n = int.Parse(Console.ReadLine());
            int seqNum = 1;
            for (int row = 1; row <= n; ++row)
            {
                for (int i = 1; i <= row; ++i)
                {
                    Console.Write("{0} ", tribNum(seqNum));
                    seqNum++;
                };
                Console.WriteLine();
            }
        }

        static void Main(string[] args)
        {
            t1 = long.Parse(Console.ReadLine());
            t2 = long.Parse(Console.ReadLine());
            t3 = long.Parse(Console.ReadLine());
            long tNum ;
            n = int.Parse(Console.ReadLine());
               Console.WriteLine("{0}\n{1} {2}", t1, t2, t3);
                for (int row=3; row <= n; ++row)
                {
                    for (int col=0; col<row; ++col)
                    {
                        tNum = t1+t2+t3;
                        Console.Write("{0} ", tNum);
                        t1 = t2;
                        t2 = t3;
                        t3 = tNum;
                    }
                    Console.WriteLine();
                }
        }
    }
}