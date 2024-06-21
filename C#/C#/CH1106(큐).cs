using System.Collections;

class CH1106 : CH
{
    public override void Start()
    {
        Queue queue = new Queue();
        queue.Enqueue("1");
        queue.Enqueue("2");
        queue.Enqueue("3");
        queue.Enqueue("4");
        queue.Enqueue("5");
        queue.Enqueue("6");

        //값을 뺄때마다 바뀌어서 변수 선언함
        int cnt = queue.Count;

        for (int i = 0; i < cnt; i++)
        {
            string val = queue.Dequeue() as string;
            Console.WriteLine(val);
        }
    }
}