using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EquateandCompare
{
    class Com : IComparable, IEquatable<Com>, ICloneable
    {
        public int number;

        public Com(int nu)
        {
            number = nu;
        }

        public object Clone()
        {
            object temp = this as object;
            return temp;
        }

        public int CompareTo(object obj)
        {
            if (obj == null) return 1;

            Com otherCom = obj as Com;
            if (otherCom != null)
                return this.number.CompareTo(otherCom.number);
            else
                throw new ArgumentException("Object is not a Com.");
        }

        public bool Equals(Com other)
        {
            if (other == null)
                return false;
            return (this.number.Equals(other.number));
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            List<Com> list = new List<Com>();
            Random rnd = new Random();
            for (int i = 0; i <= 10; i++)
            {
                Com temp = new Com(rnd.Next(0, 40));
                list.Add(temp);
            }

            list.Sort();

            Console.WriteLine("Clone");
            Com clone = list[0].Clone() as Com; //Clone
            Console.WriteLine(list[0].number);
            Console.WriteLine(clone.number);

            Console.WriteLine();

            Console.WriteLine("Compare");
            Console.WriteLine(list[0].number);
            Console.WriteLine(list[1].number);
            Console.WriteLine(list[2].number);

            Console.WriteLine();

            Console.WriteLine(list[1].CompareTo(list[0]));
            Console.WriteLine(list[1].CompareTo(list[1]));
            Console.WriteLine(list[1].CompareTo(list[2]));

            Console.WriteLine();

            Console.WriteLine("Equals");
            Console.WriteLine(list[0].Equals(list[1]));

            Console.WriteLine("Hit enter to end. . .");
            Console.ReadLine();
        }
    }
}
