using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class Person_CH0705
{
    string? name;
    int age;
    string? phoneNumber;

    public Person_CH0705()
    {
        this.name = "";
        this.age = 0;
        this.phoneNumber = "000-0000-0000";
    }

    //this는 생성자를 호출하는 구문
    public Person_CH0705(string? name, int age, string? phoneNnumber) : this(name, age)
    {
        //같음
        //this.name = name;
        //this.age = age;
        this.phoneNumber = phoneNnumber;
    }

    //this(name,age)가 2개의 매개변수를 호출하니 실행
    public Person_CH0705(string? name, int age) : this(name)
    {
        this.age = age;
    }

    public Person_CH0705(string? name)
    {
        this.name = name;
    }

    public void ShowInfo()
    {
        Console.WriteLine($"이름{name},나이{age.ToString()},전화번호:{phoneNumber}");
    }
}


class CH0705 : CH
{
    public override void Start()
    {
        Person_CH0705 p1 = new Person_CH0705();
        p1.ShowInfo();

        Person_CH0705 p2 = new Person_CH0705("장현우", 33, "010-0000-000");
        p2.ShowInfo();
    }
}

