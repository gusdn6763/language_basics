class CH1200 : CH
{
    public override void Start()
    {
        LinkedList<string?> list = new LinkedList<string?>();
        list.AddLast("장현우");
        list.AddLast("장현우1");
        list.AddLast("장현우2");
        list.AddLast("장현우3");
        list.AddLast("장현우4");

        LinkedListNode<string?> node = list.Find("장현우2");
        node = node.Next;

        //장현우3
        Console.WriteLine(node.Value);

        list.ToList().ForEach(p => Console.WriteLine(p + "ㅁ"));

        foreach (var name in list)
        {
            Console.WriteLine(name);
        }
    }
}