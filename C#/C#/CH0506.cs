class CH0506 : CH
{
    class Player_CH0506
    {
        private string? name;
        private int age;

        public Player_CH0506(string? name, int age)
        {
            this.name = name;
            this.age = age;
        }

        public string? GetName()
        {
            return name;
        }

        public int GetAge()
        {
            return age;
        }
    }

    public override void Start()
    {
        Player_CH0506 player = new Player_CH0506("홍길동", 23);
        string? playerName = player.GetName();
        int playerAge = player.GetAge();

        if (playerName == "홍길동" && playerAge > 20)
        {
            Console.WriteLine("a");
        }
        if (playerAge >= 20 && playerAge <= 40)
        {
            Console.WriteLine("dd");
        }
    }
}
