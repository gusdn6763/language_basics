﻿//가변 배열
class CH1104 : CH
{
    public override void Start()
    {
        string[][] names = new string[3][];
        names[0] = new string[3] { "장", "현", "우" };
        names[1] = new string[] { "1", "2" };
        names[2] = new string[] { "3", "4", "5", "6" };

        foreach (string[] myClass in names)
        {
            foreach (string name in myClass)
            {
                Console.WriteLine(name);
            }
        }
    }
}

