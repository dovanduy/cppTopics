using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FormulaBit1
{
    class FormulaBit1
    {
        static byte myNum; // ushort
        const int gridSize = 8;
        const int arrSize = gridSize + 2; // array BORDER
        static byte[,] grid = new byte[gridSize + 2, arrSize];
        const int startRow = 1;
        const int startCol = gridSize;
        static int x = startRow, y = startCol, road = 0, turnsCnt = 0;

        enum dir {south, west, nord};
        dir current = dir.south;

        static bool isSouth()
        {
            if (grid[x, y - 1] == 0)
                return true;
            return false;
        }

        static bool isWest ()
        {
            if (grid[x - 1, y] == 0)
                return true;
            return false;
        }

        static bool isNord ()
        {
            if (grid[x - 1, y] == 0)
                return true;
            return false;
        }

        static void printMe()
        {
            for (int row=0; row < arrSize; ++row)
            {
                for (int col=0; col< arrSize; ++col)
                    Console.Write(grid[row, col]);
                Console.WriteLine();
            }
        }

        static void readMe()
        {
            for (int row = 1; row < 9; ++row)
            {
                myNum = byte.Parse(Console.ReadLine());
                for (int col = 8; col >= 1; --col, myNum = (byte)(myNum / 2))
                {
                    grid[row, col] = (byte)(myNum % 2);
                }
            }
         //printMe();
        }

        static void init ()
        {
            for (int col = 0; col < arrSize; ++col)
            {
                grid[0, col] = grid[arrSize-1, col] = 1; // border setting
            }
            for (int row = 0; row < arrSize; ++row)
            {
                grid[row, 0] = grid[row, arrSize-1] = 1;
            }
            readMe();
        }

        static void Main(string[] args)
        {
            init();
            if(1==grid[x, y])
            {
                Console.WriteLine("No {0}", road);
            }
            // FormulaBit1 starts now
            bool isMove, isFinish = x==arrSize && y==1 ;
            for (isMove=isSouth() || isWest() || isNord(); isMove && (! isFinish); isFinish = x == arrSize && y == 1)
            { // The loop body moves a car HERE

            };
            if (isFinish)
                Console.WriteLine("{0} {1}", road, turnsCnt);
            else
                Console.WriteLine("No {0}", road);
        }
    }
}