interface Person_CH1005
{
    int Age { get; set; }
}

class Player_CH1005 : Person_CH1005
{
    int age;

    public int Age
    {
        get
        {
            return age;
        }

        set
        {
            age = value;
        }
    }
}

class CH1005 : CH
{
    public override void Start()
    {
        Player_CH1005 player = new Player_CH1005();
        player.Age = 11;
        Console.WriteLine(player.Age);
    }
}
