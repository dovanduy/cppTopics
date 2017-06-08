using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
 * чете парола (един ред с произволен текст), въведена от потребителя, 
 * и проверява дали въведеното съвпада с фразата “s3cr3t!P@ssw0rd”. 
 * При съвпадение да се изведе “Welcome”. 
 * При несъвпадение да се изведе “Wrong password!”.
 * 
 * https://judge.softuni.bg/Contests/Practice/Index/613#4
 * */
namespace ifSimple5PassCheck
{
    class ifSimple5PassCheck
    {
        static void Main(string[] args)
        {
            var psw = "s3cr3t!P@ssw0rd";
            var inp = Console.ReadLine();
            if (psw == inp)
                Console.WriteLine("Welcome");
            else
                Console.WriteLine("Wrong password!");
        }
    }
}
