abstract class Shape_CH1006
{
    public abstract int Number { get; set; }

    public void initCanvas()
    {
        Console.WriteLine("캔버스초기화");
    }

    public abstract void Draw();
}

class Rectangle_CH1006 : Shape_CH1006

{
    public override int Number { get; set; }

    public override void Draw()
    {
        Console.WriteLine("사각형 그리기");
    }
}

class CH1006 : CH
{
    public override void Start()
    {
        Rectangle_CH1006 rectangle = new Rectangle_CH1006()
        {
            Number = 1
        };
        rectangle.Draw();
    }
}
