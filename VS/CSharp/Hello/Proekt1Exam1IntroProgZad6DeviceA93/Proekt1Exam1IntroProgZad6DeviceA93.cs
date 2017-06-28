using System;

namespace Proekt1Exam1IntroProgZad6DeviceA93
{
    class Proekt1Exam1IntroProgZad6DeviceA93
    {
        static void Main(string[] args)
        {
            long nSec = long.Parse(Console.ReadLine());
            for (long num=1, cntNum=0; nSec != 0; cntNum=0, ++num)
            {
                for (; cntNum<num && nSec > 0; ++cntNum, --nSec)
                {
                    Console.Write("{0} ", num);
                }
            }
        }
    }
}
