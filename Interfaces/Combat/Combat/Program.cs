using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Combat
{
    interface IActions
    {
        bool Attack(Unit other);
        void Heal(Unit other);
        void UseItem(Unit other);
    }

    interface IStats
    {
        int maxHealth
        {
            get;
            set;
        }

        int health
        {
            get;
            set;
        }

        int mp
        {
            get;
            set;
        }

        int ap
        {
            get;
            set;
        }

        int magic
        {
            get;
            set;
        }

        string name
        {
            get;
            set;
        }
    }

    class Item : IStats
    {
        int mhp;
        int hp;
        int MagPow;
        int AttPow;
        int Mag;
        string na;
        public bool live = true;

        public Item(int h, int map, int attp, int ma, string n)
        {
            health = h;
            mp = map;
            ap = attp;
            magic = ma;
            name = n;
        }

        public int maxHealth
        {
            get { return mhp; }

            set { mhp = value; }
        }

        public int health
        {
            get { return hp; }

            set { hp = value; }
        }

        public int mp
        {
            get { return MagPow; }

            set { MagPow = value; }
        }

        public int ap
        {
            get { return AttPow; }

            set { AttPow = value; }
        }

        public int magic
        {
            get { return Mag; }

            set { Mag = value; }
        }

        public string name
        {
            get { return na; }

            set { na = value; }
        }
    }

    class Unit : IStats, IActions
    {
        int mhp;
        int hp;
        int MagPow;
        int AttPow;
        int Mag;
        string na;
        public Item item;

        public int maxHealth
        {
            get { return mhp; }
            
            set { mhp = value; }
        }

        public int health
        {
            get { return hp; }

            set { hp = value; }
        }

        public int mp
        {
            get { return MagPow; }

            set { MagPow = value; }
        }

        public int ap
        {
            get { return AttPow; }

            set { AttPow = value; }
        }

        public int magic
        {
            get { return Mag; }

            set { Mag = value; }
        }

        public string name
        {
            get { return na; }

            set { na = value; }
        }

        public Unit(int h, int map, int attp, int ma, string n, Item it)
        {
            maxHealth = h;
            health = maxHealth;
            mp = map;
            ap = attp;
            magic = ma;
            name = n;
            item = it;
        }

        public bool Attack(Unit other)
        {
            Console.WriteLine(this.name + " attacks " + other.name + ".");
            other.health -= this.ap;
            if (other.health <= 0)
            {
                Console.WriteLine(other.name + " has died! " + this.name + " has won!!");
                return true;
            }
            return false;
        }

        public void Heal(Unit other)
        {
            Console.WriteLine(this.name + " heals " + other.name + ".");
            other.health += this.ap;
            this.mp -= 1;
            if(other.health > other.maxHealth)
            {
                other.health = other.maxHealth;
            }
        }

        public void UseItem(Unit other)
        {
            Console.WriteLine(this.name + " uses " + this.item.name + " on " + other.name + ".");
            other.health += this.item.health;
            other.mp += this.item.mp;
            other.ap += this.item.ap;
            other.magic += this.item.magic;
            if (other.health > other.maxHealth)
            {
                other.health = other.maxHealth;
            }
            this.item.live = false;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Item ita = new Item(100, 0, 0, 0, "Potion");
            Item itb = new Item(50, 0, 0, 0, "Potion");

            Unit a = new Unit(200, 3, 10, 50, "a", ita);
            Unit b = new Unit(750, 0, 5, 30, "b", itb);

            for(int i = 0; i < 100;)
            {
                if(a.Attack(b) == true)
                {
                    break;
                }

                if (b.Attack(a) == true)
                {
                    break;
                }

                if (a.health <= (a.maxHealth / 4) && a.mp > 0)
                {
                    a.Heal(a);
                }

                else if (a.health <= (a.maxHealth / 4) && a.mp <= 0 && a.item.live == true)
                {
                    a.UseItem(a);
                }


                if (b.health <= (b.maxHealth / 4) && b.mp > 0)
                {
                    b.Heal(b);
                }

                else if (b.health <= (b.maxHealth / 4) && b.mp <= 0 && b.item.live == true)
                {
                    b.UseItem(b);
                }
            }

            Console.ReadLine();
        }
    }
}