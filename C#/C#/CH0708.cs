using System.Collections;

class Shape_CH0708
{
    public virtual void Draw()
    {
        Console.WriteLine("초기화");
    }
}

class Circle_CH0708 : Shape_CH0708
{
    public override void Draw()
    {
        base.Draw();
        Console.WriteLine("원");
    }
}

class Rectangle_CH0708 : Shape_CH0708
{
    public sealed override void Draw()
    {
        base.Draw();
        Console.WriteLine("삼각형");
    }
}

class CH0708 : CH
{
    public override void Start()
    {
        ArrayList arr = new ArrayList();
        arr.Add(new Rectangle_CH0708());
        arr.Add(new Rectangle_CH0708());
        arr.Add(new Rectangle_CH0708());
        arr.Add(new Rectangle_CH0708());
        arr.Add(new Rectangle_CH0708());
        arr.Add(new Circle_CH0708());

        foreach (Shape_CH0708 rectangle in arr)
        {
            rectangle.Draw();
        }
    }
}

