class Shape_CH0504
{

    public virtual void Draw()
    {
        Console.WriteLine("초기화");
    }
}

class Rectangle_CH0504 : Shape_CH0504
{
    public override void Draw()
    {
        base.Draw();
        Console.WriteLine("사각형 그리기");
    }
}

class Circle_CH0504 : Shape_CH0504
{
    public override void Draw()
    {
        base.Draw();
        Console.WriteLine("원그리기");
    }
}

class CH0504 : CH
{
    static void DrawSomething(Shape_CH0504 shape)
    {
        shape.Draw();
    }

    public override void Start()
    {
        Circle_CH0504 circle = new Circle_CH0504();
        DrawSomething(circle);
        Rectangle_CH0504 rectangle = new Rectangle_CH0504();
        DrawSomething(rectangle);
        Shape_CH0504 shape = new Shape_CH0504();
        DrawSomething(shape);
    }
}
