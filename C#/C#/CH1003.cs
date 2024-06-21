class Person_CH1003
{
    public string? Name { get; set; }
    public int Age { get; set; }
    public string? PhoneNumber { get; set; } = "010-0000-0000";

    public int Speed;
}

class CH1003 : CH
{
    public override void Start()
    {
        Person_CH1003 person = new Person_CH1003()
        {
            Name = "장현우",
            PhoneNumber = "----",
            Speed = 11
        };

        Console.WriteLine(person.Speed);
    }
}

