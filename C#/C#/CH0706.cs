class Person_CH0706
{
    protected string? name;

    public Person_CH0706(string? name)
    {
        this.name = name;
    }
}

class Hero_CH0706 : Person_CH0706
{
    int age;

    //base로 부모의 생성자를 실행
    public Hero_CH0706(string? name, int age) : base(name)
    {
        this.age = age;
    }
}

class CH0706 : CH
{
    public override void Start()
    {
        Person_CH0706 p1 = new Person_CH0706("장현우");

        Hero_CH0706 hero = new Hero_CH0706("", 11);
    }
}
