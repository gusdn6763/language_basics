interface IView_CH0803
{
    void Draw();
}

interface IShape_CH0803 : IView_CH0803
{
    void SetPosition(float x, float y);
    void SetSize(float width, float height);
}

class Rectangle_CH0803 : IShape_CH0803
{
    float x, y, width, height;

    public Rectangle_CH0803(float x, float y, float width, float height)
    {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    public void Draw()
    {
        Console.WriteLine("Draw()");
    }

    public void SetPosition(float x, float y)
    {
        Console.WriteLine("SetPosition()");
    }

    public void SetSize(float width, float height)
    {
        Console.WriteLine("SetSize()");
    }
}

class CH0803 : CH
{
    public override void Start()
    {
        Rectangle_CH0803 rectangle = new Rectangle_CH0803(10, 10, 100, 100);
        rectangle.SetPosition(3, 4);
    }
}
