
//T는 타입 속성을 받을때 지정해줌
class MyNode_CH1201<T>
{
    public T value { get; set; }


    public MyNode_CH1201<T> Left { get; set; }

    public MyNode_CH1201<T> Right { get; set; }


    public MyNode_CH1201(T value)
    {
        this.value = value;
    }

}
class CH1201 :CH
{
    public override void Start()
    {
        MyNode_CH1201<string> node = new MyNode_CH1201<string>("장현우");
        node.Left = new MyNode_CH1201<string>("레프트");
        node.Right = new MyNode_CH1201<string>("라이트");

        node.Left.Left = new MyNode_CH1201<string>("");

        ShowTree(node);
    }

    static public void ShowTree<T>(MyNode_CH1201<T> node)
    {
        if (node == null)
        {
            return;
        }
        Console.WriteLine(node.value);
        ShowTree(node.Left);
        ShowTree(node.Right);
    }
}
