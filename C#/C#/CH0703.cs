class Person_CH0703
{
    public string? name;
    public int age;

    public void SetAge(int age)
    {
        this.age = age;
    }

    //person형 객체를 반환하니 person를 씀
    public Person_CH0703 Copy()
    {
        Person_CH0703 person = new Person_CH0703();
        person.name = this.name;
        person.age = this.age;
        return person;
    }

    public void PrintInfo()
    {
        Console.WriteLine($"이름:{name},나이{age}");
    }
}

class CH0703 : CH
{
    public override void Start()
    {
        Person_CH0703 p1 = new Person_CH0703();
        p1.name = "홍길동";
        p1.SetAge(33);

        //p2에다가 p1의 주소값 할당
        //Person p2 = p1;
        //p2.name = "";

        Person_CH0703 p2 = new Person_CH0703();
        p2.name = p1.name;
        p2.age = p1.age;

        //새로운 객체를 생성하니 주소값이 다름
        //위에 것을 함수로 단순화 한것
        //Person p2 = p1.Copy();
        //p1.PrintInfo();
        //p2.PrintInfo();
    }
}

