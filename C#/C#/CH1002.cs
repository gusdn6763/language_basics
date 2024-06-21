class Person_CH1002
{
    public string? Name { get; set; }
    public int Age { get; set; }
    public string? PhoneNumber { get; set; } = "010-0000-0000";
}

class CH1002 : CH
{
    public override void Start()
    {
        Person_CH1002 person = new Person_CH1002();
        person.Name = "장현우";
        person.Age = 11;

        Console.WriteLine(person.PhoneNumber);
    }
}

