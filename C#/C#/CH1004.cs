class CH1004 : CH
{
    public override void Start()
    {
        //무명형식
        //
        var person = new { Name = "장현우", Age = 30 };
        Console.WriteLine(person.Name);
    }
}

