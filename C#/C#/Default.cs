using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class Default : CH
{
    public override void Start()
    {
        //커서 보이기X
        Console.CursorVisible = false;

        const int WAIT_TICK = 1000 / 30;
        const char CIRCLE = '\u25cf';

        int lastTick = 0;
        while(true)
        {
            #region 프레임 관리
            int currentTick = System.Environment.TickCount;

            // 1/30 초마다 실행하도록 제한 => 30프레임 유지
            if (currentTick - lastTick < WAIT_TICK)
                continue;

            lastTick = currentTick;
            #endregion

            Console.SetCursorPosition(0, 0);

            for(int i = 0; i < 25; i++)
            {
                for(int j = 0; j < 25; j++)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    Console.Write(CIRCLE);
                }
                Console.WriteLine();
            }
        }
    }
}

