using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FSM
{
    class FSM
    {
        private List<Enum> states;
        public Enum currentState;
        
        struct Link
        {
            public Enum from;
            public Enum to;
        }

        private List<Link> trans;//Transitions

        public FSM(Enum state)
        {
            states = new List<Enum>();
            trans = new List<Link>();
            currentState = state;
        }

        public bool AddState(Enum state)
        {
            if (states.Contains(state))
            {
                Console.WriteLine("State already exists.");
                return false;
            }

            Console.WriteLine("State " + state.ToString() + " has been added.");
            states.Add(state);
            return true;
        }

        public bool AddTransition(Enum from, Enum to)
        {
            Link temp = new Link();
            temp.from = from;
            temp.to = to;

            foreach (Link l in trans)
            {
                if (l.Equals(temp))
                {
                    Console.WriteLine("Transition already Exists.");
                    return false;
                }
            }     

            Console.WriteLine("Transition now exists. " + temp.from.ToString() + " -> " + temp.to.ToString());
            trans.Add(temp);
            return true;
        }

        public void Print()
        {
            Console.WriteLine("The states are:");
            int count = 0;
            foreach (Enum e in states)
            {
                Console.WriteLine("State " + count + " : " + e.ToString());
                count++;
            }

            Console.WriteLine("The valid Transitions are:");
            count = 0;
            foreach (Link e in trans)
            {
                Console.WriteLine("Trans " + count + " : " + e.from.ToString() + " to " + e.to.ToString());
                count++;
            }

        }

        public bool Check(Enum efrom, Enum eto)
        {
            foreach (Link l in trans)
            {
                if (efrom == l.from && eto == l.to)
                {
                    Console.WriteLine(efrom.ToString() + " -> " + eto.ToString() + "Valid Transition");
                    return true;
                }
            }
            return false;
        }
    }
}
