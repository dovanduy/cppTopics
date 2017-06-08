using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * чете две думи, въведени от потребителя, 
 * и проверява дали са еднакви. 
 * Да не се прави разлика между главни и малки думи. 
 * Да се изведе “yes” или “no”. 
 * */
namespace ifSimple6EqWords
{
    class ifSimple6EqWords
    {
        const string yes = "yes";
        const string no = "no";
        static void Main(string[] args)
        {
            var w1 = Console.ReadLine().ToLower();
            var w2 = Console.ReadLine().ToLower();
            if (w1==w2)
                Console.WriteLine(yes);
            else
                Console.WriteLine(no);
        }
    }
}
