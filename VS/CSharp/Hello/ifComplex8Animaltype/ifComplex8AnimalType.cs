using System;

//  https://judge.softuni.bg/Contests/Practice/Index/615#7
namespace ifComplex8Animaltype
{
    class ifComplex8AnimalType
    {
        static void Main(string[] args)
        {
            string name = Console.ReadLine();
            if (name=="dog")
                Console.WriteLine("mammal");
            else if (name=="crocodile" || 
                    name == "tortoise" || 
                    name == "snake")
                Console.WriteLine("reptile");
            else
                Console.WriteLine("unknown");
        }
    }
}
