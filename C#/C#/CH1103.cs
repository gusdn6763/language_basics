﻿class CH1103 : CH
{
    public override void Start()
    {
        int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int[,] arr2 = new int[,]
        {
              {1,2,3,4,5         },
              {6,7,8,9,10        },
              {11,12,13,14,15    }
        };
        int[,,] arr3 = new int[,,]
        {
             { {1,2 },{3,4 },{5,6 } },
             { { 7,8 },{ 9,10 },{ 11,12 } },
             { { 13,14 },{ 15,16 },{ 17,18 } }
        };

        int[,,,] arr4 = new int[,,,]
        {
                {
                    { {1,2 },{3,4 },{5,6 } },
                    { { 7,8 },{ 9,10 },{ 11,12 } },
                    { { 13,14 },{ 15,16 },{ 17,18 } }
                },

                {
                    { {1,2 },{3,4 },{5,6 } },
                    { { 7,8 },{ 9,10 },{ 11,12 } },
                    { { 13,14 },{ 15,16 },{ 17,18 } }
                }
        };


        Console.WriteLine(arr2[0, 4]);
    }
}
