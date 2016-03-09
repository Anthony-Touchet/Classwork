using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FSM
{ 
    class Program
    {      
        enum PlayerStates
        {
            INIT = 0,
            IDLE = 1,
            WALK = 2,
            RUN = 3,
        }

        static void Main(string[] args)
        {
            FSM fsm = new FSM(PlayerStates.INIT);
            //INIT -> IDLE
            //IDLE -> WALK
            //WALK -> RUN
            //RUN -> WALK
            //WALK -> IDLE
            fsm.AddState(PlayerStates.INIT);
            fsm.AddState(PlayerStates.IDLE);
            fsm.AddState(PlayerStates.WALK);
            fsm.AddState(PlayerStates.RUN);
            fsm.AddState(PlayerStates.RUN);
            fsm.AddState(PlayerStates.RUN);
            fsm.AddTransition(PlayerStates.INIT, PlayerStates.IDLE);
            fsm.AddTransition(PlayerStates.IDLE, PlayerStates.WALK);
            fsm.AddTransition(PlayerStates.WALK, PlayerStates.RUN);
            fsm.AddTransition(PlayerStates.RUN, PlayerStates.WALK);
            fsm.AddTransition(PlayerStates.WALK, PlayerStates.IDLE);
            fsm.AddTransition(PlayerStates.WALK, PlayerStates.IDLE);
            fsm.AddTransition(PlayerStates.WALK, PlayerStates.IDLE);



            fsm.Print();
            Console.ReadLine();
        }
    }
}
