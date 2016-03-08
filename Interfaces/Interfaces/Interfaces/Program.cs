using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public interface IStats
    {
        string name             //Name
        {
            get;
            set;
        }

        int health              //Health
        {
            get;
            set;
        }
    }

    public interface IFightable : IStats     //Can they fight?
    {
        bool Fight(IStats other);
    }

    public interface ITalkable      //Can they talk?
    {
        void Talk();
    }

namespace Interfaces
{
    //Ninja
    public class Ninja : IFightable, ITalkable         //Ninja
    {
        public string niname;
        public int hp;
        public string name              //Ninja Name
        {
            get
            {
                return niname;
            }

            set
            {
                niname = value;
            }
        }

        public int health               //Ninja Health
        {
            get
            {
                return hp;
            }
            set
            {
                hp = value;
            }
        }

        public Ninja(string n, int h)   //Ninja Constructor
        {
            health = h;
            name = n;
        }

        public bool Fight(IStats other) //Ninja Fight
        {
            Console.WriteLine(this.name + " fights " + other.name);
            other.health -= 5;
            if (other.health <= 0)
            {
                Console.WriteLine(other.name + " has died!");  //Dead so remove his corpse.
                return true;
            }

            return false;
        }

        public void Talk()              //Ninja Talk
        {
            Console.WriteLine(this.name + ": nin.");
        }
    }

    public class Duck : IFightable, ITalkable      //Duck
    {
        public string duname;
        public int hp;
        public string name          //Duck Name
        {
            get
            {
                return duname;
            }

            set
            {
                duname = value;
            }
        }

        public int health           //Duck Health
        {
            get
            {
                return hp;
            }
            set
            {
                hp = value;
            }
        }

        public Duck(string n, int h)    //Duck Constructor
        {
            health = h;
            name = n;
        }

        public void Talk()              //Duck Talk
        {
            Console.WriteLine(this.name + ": quack.");
        }

        public bool Fight(IStats other) //Duck Fight
        {
            Console.WriteLine(this.name + " fights " + other.name);
            other.health -= 5;
            if (other.health <= 0)
            {
                Console.WriteLine(other.name + " has died!");  //Dead so remove his corpse.
                return true;
            }

            return false;
        }
    }

    class Program
    {
        static void Main(string[] args)  //Main
        {
            //Creation
            List<IFightable> combats = new List<IFightable>();  //Fighting list
            for(int c = 0; c < 50; c++)
            {
                Duck tempd = new Duck("Duck" + (c + 1), 5 + c);     //Create a duck
                Ninja tempn = new Ninja("Ninja" + (c + 1), 5 + c);  //Create a ninja

                combats.Add(tempd);                                 //adding the duck
                combats.Add(tempn);                                 //adding the ninja
            }  

            //Attack
            for (int en = 0; combats.Count > 1; en++)
            {
                if (en >= combats.Count)//Gaurd so that the inumeration does not go over the length of the list.
                {
                    en = 0;
                }

                if (en == combats.Count - 1)    //Last guy attacking.
                {
                    if (combats[en].Fight(combats[0]) == true) //Is he dead?
                    {
                        combats.Remove(combats[0]);
                        Console.WriteLine("There are " + combats.Count + " left."); //How many left?
                    }
                }

                else     //Normal Guy fighting.
                {
                    if (combats[en].Fight(combats[en + 1]) == true)    //Is he dead?
                    {
                        combats.Remove(combats[en + 1]);
                        Console.WriteLine("There are " + combats.Count + " left."); //How many left?
                    }
                }    
            }

            Console.WriteLine(combats[0].name + " is the victor!!!!");  //Last one standing.
            Console.WriteLine("Press any key to exit. . .");
            Console.ReadLine();
        }
    }
}