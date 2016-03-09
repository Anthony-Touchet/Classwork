using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public interface IHighSchooler
{
    string School
    {
        get;
        set;
    }

    int Grade
    {
        get;
        set;
    }

    bool SenpaiNotice(IHighSchooler senpai);
}

interface IMechPilot
{
    string MechName
    {
        get;
        set;
    }

    int Attack
    {
        get;
        set;
    }

    int Defense
    {
        get;
        set;
    }

    void ItsanAnanel(IMonster angel);
}

interface IMonster
{
    int Level
    {
        get;
        set;
    }
}

namespace Senpai
{
    class Protaginist : IHighSchooler, IMechPilot
    {
        string pro_School;
        int pro_Grade;
        string pro_MechName;
        int pro_Attack;
        int pro_Deffense;

        public string School
        {
            get
            {
                return pro_School;
            }
            set
            {
                pro_School = value;
            }
        }

        public int Grade
        {
            get
            {
                return pro_Grade;
            }
            set
            {
                pro_Grade = value;
            }
        }

        public string MechName
        {
            get
            {
                return pro_MechName;
            }

            set
            {
                pro_MechName = value;
            }
        }

        public int Attack
        {
            get
            {
                return pro_Attack;
            }

            set
            {
                pro_Attack = value;
            }
        }

        public int Defense
        {
            get
            {
                return pro_Deffense;
            }

            set
            {
                pro_Deffense = value;
            }
        }

        public bool SenpaiNotice(IHighSchooler senpai)
        {
            if(senpai.School == this.School && senpai.Grade >= this.Grade)
            {
                Console.WriteLine("He noticed.");
                return true;
            }
            return false;
        }

        public void ItsanAnanel(IMonster angel)
        {
            if(angel.Level > (this.Defense / 3))
            {
                 Console.WriteLine(MechName + " Lost in Battle.");
            }

            else
            {
                Console.WriteLine(MechName + "  Continues the fight.");
            }

            if (angel.Level > (this.Attack / 4))
            {
                Console.WriteLine(MechName + "'s Attacks did nothing.");
            }

            else
            {
                Console.WriteLine(MechName + " Defeated the monster.");
            }
        }

        public Protaginist(string sch, int gra, string mec, int att, int def)
        {
            School = sch;
            Grade = gra;
            MechName = mec;
            Attack = att;
            Defense = def;
        }
    }

    class SadTwist : IHighSchooler, IMonster
    {
        int s_Level;
        int s_Grade;
        string s_School;

        public int Grade
        {
            get
            {
                return s_Grade;
            }

            set
            {
                s_Grade = value;
            }
        }

        public int Level
        {
            get
            {
                return s_Level;
            }

            set
            {
                s_Level = value;
            }
        }

        public string School
        {
            get
            {
                return s_School;
            }

            set
            {
                s_School = value;
            }
        }

        public bool SenpaiNotice(IHighSchooler senpai)
        {
            if (senpai.School == this.School && senpai.Grade >= this.Grade)
            {
                Console.WriteLine("He noticed.");
                return true;
            }
            return false;
        }

        public SadTwist(int lev, int gra, string sch)
        {
            School = sch;
            Grade = gra;
            Level = lev;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Protaginist sitsByWindow = new Protaginist("Anthony", 12, "CidLeaf", 100, 16);
            SadTwist childFriend = new SadTwist(15, 10, "Anthony");

            childFriend.SenpaiNotice(sitsByWindow);
            sitsByWindow.ItsanAnanel(childFriend);

            Console.ReadLine();
        }
    }
}