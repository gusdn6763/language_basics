public class Espresso_CH0707
{
    protected string? taste;

    public Espresso_CH0707()
    {
        taste = "쓴맛";
    }

    public string? GetTaste()
    {
        return taste;
    }
}

class Americano_CH0707 : Espresso_CH0707
{
    public Americano_CH0707()
    {
        taste = "맛";
    }
}

class Cafelatte_CH0707 : Espresso_CH0707
{
    public Cafelatte_CH0707()
    {
        taste = "쓴";
    }
}

class CH0707 : CH
{
    public override void Start()
    {
        Espresso_CH0707 espresso = new Espresso_CH0707();

        Americano_CH0707 americano = new Americano_CH0707();

        Cafelatte_CH0707 cafelatte = new Cafelatte_CH0707();


        //A클래스가 B클래스의 자식인지 비교 후 1 값 리턴
        //A가 B와 같은 타입인지 비교
        if (americano is Espresso_CH0707)
        {
            Console.WriteLine("1");
        }

        if (americano is Cafelatte_CH0707)
        {
            Console.WriteLine("2");
        }


        if (cafelatte is Espresso_CH0707)
        {
            Console.WriteLine("3");
        }

        //부모객체 생성 = 자식객체를 부모객체로 만듬
        Espresso_CH0707 a = americano as Espresso_CH0707;
        if (a != null)
        {
            Console.WriteLine("4");
        }

        Americano_CH0707? b = espresso as Americano_CH0707;
        if (b != null)
        {
            Console.WriteLine("5");
        }
    }
}