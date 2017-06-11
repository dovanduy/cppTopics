using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * 1.	Обръщение според възраст и пол
Да се напише конзолна програма, която прочита възраст (десетично число) и пол (“m” или “f”), въведени от потребителя, и отпечатва обръщение измежду следните:
•	“Mr.” – мъж (пол “m”) на 16 или повече години
•	“Master” – момче (пол “m”) под 16 години
•	“Ms.” – жена (пол “f”) на 16 или повече години
•	“Miss” – момиче (пол “f”) под 16 години
•	“Miss” – момиче (пол “f”) под 16 години

12
f	        Miss		
17
m	        Mr.
25
f	        Ms.
13.5
m	        Master
 */
namespace ifComplex1Miss
{
    class ifComplex1Miss
    {
        static void Main(string[] args)
        {
            string miss = "Miss", mr = "Mr.", ms = "Ms.", master = "Master";
            double age = double.Parse(Console.ReadLine());
            string sex = Console.ReadLine();
            if (age >=16 && sex=="m")
                Console.WriteLine(mr);
            else if (age<16 && sex=="m")
                Console.WriteLine(master);
            else if (age>=16 && sex=="f")
                Console.WriteLine(ms);
            else Console.WriteLine(miss);
        }
    }
}
