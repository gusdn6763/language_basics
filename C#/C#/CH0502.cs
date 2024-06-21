class Person_CH0502
{
    protected string? name;
    protected string? age;

    public virtual void Walk()
    {
        Console.WriteLine("Walk()");
    }
}

class Student_CH0502 : Person_CH0502
{
    public void Study()
    {
        Console.WriteLine("Study()");
    }

    public override void Walk()
    {
        //부모의 walk를 재정이 하고 있지만 부모의 기능을 실행한다는 의미
        //base.Walk();

        Console.WriteLine("Student:Walk");
    }

}
class CH0502 : CH
{
    public override void Start()
    {
        Person_CH0502 person = new Person_CH0502();
        person.Walk();
        //Student.Study();
        Student_CH0502 student = new Student_CH0502();
        student.Walk();

        //Person에 삽입해도 가리킬수 있는 수준은 person 수준밖에 안됨  
        Person_CH0502 personSample = new Student_CH0502();
        person.Walk();
        //그래서 실행 안됨
        //person.Study();

        Student_CH0502 s1 = new Student_CH0502();
        Person p1 = new Person();
        //as 명시적으로 선언한것,부모개체에게 추가로 더한 자식객체의 변수나 함수기능을 못 불러와 위험함
        //student 
        //자식객체에 부모객체 할당은 불가
        //s1 = p1 as Student_CH0502;
        //p1.Walk();
    }
}

