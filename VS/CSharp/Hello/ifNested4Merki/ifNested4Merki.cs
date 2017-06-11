using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * Да се напише програма, която преобразува разстояние между следните 8 мерни единици: m, mm, cm, mi, in, km, ft, yd.
 * входна единица	изходна единица
* 1 meter (m)	1000 millimeters (mm)
* 1 meter (m)	100 centimeters (cm)
* 1 meter (m)	0.000621371192 miles (mi)
* 1 meter (m)	39.3700787 inches (in)
* 1 meter (m)	0.001 kilometers (km)
* 1 meter (m)	3.2808399 feet (ft)
* 1 meter (m)	1.0936133 yards (yd)
* 
* https://judge.softuni.bg/Contests/Practice/Index/614#3
 * */
namespace ifNested4Merki
{
    class ifNested4Merki
    {
        static void Main(string[] args)
        {
            Dictionary<string, double> cnvTableFrom1m = new Dictionary<string, double>()
            {
                {"mm", 1000},
                {"cm", 100},
                {"mi",  0.000621371192},
                {"in",  39.3700787},
                {"km", 0.001},
                {"ft", 3.2808399},
                {"yd", 1.0936133},
                {"m", 1}
            };
            double n = double.Parse(Console.ReadLine());
            string from = Console.ReadLine().ToLower();
            string to = Console.ReadLine().ToLower();
            Console.WriteLine("{0} {1}", (n*(1.0 / cnvTableFrom1m[from]) * cnvTableFrom1m[to]), to);
            // decimal is not 100%
            // 
            // if decimal the different result by judje for:
            // Console.WriteLine("{0} {1}", ((n/cnvTableFrom1m[from])*cnvTableFrom1m[to]), to);
        }
    }
}
