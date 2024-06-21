interface IShape
{
    void Draw();
}

interface IMovable
{
    void Move();
}

class Rectangle_CH0804 : Shape_CH0804, IShape, IMovable
{
    public void Draw()
    {
        Console.WriteLine("Draw");
    }

    public void Move()
    {
        Console.WriteLine("Move");
    }
}

class Shape_CH0804
{

}

class CH0804 : CH
{
    public override void Start()
    {
        Rectangle_CH0804 rectangle = new Rectangle_CH0804();
        rectangle.Draw();
    }
}
