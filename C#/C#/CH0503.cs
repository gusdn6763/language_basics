class CH0503 : CH
{
    public override void Start()
    {
        object obj = 10;


        switch (obj)
        {
            case string val:
                Console.WriteLine("문자열");
                break;

            //가지고 있는 변수타입이 int 형이고 10보다 클때
            case int val when val > 10:
                Console.WriteLine("10보다 큰 정수");
                break;

            case int val:
                Console.WriteLine("그냥 정수");
                break;

            case float val:
                Console.WriteLine("그냥 실수");
                break;

            default:
                Console.WriteLine("파악불가");
                break;
        }
    }
}