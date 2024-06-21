class CH0501 : CH
{
    //enum 상수타입
    enum STATE
    {
        Hp,
        Mp,
        Level,
        Exp = 0,
    }
    public override void Start()
    {
        //case 안에서 변수를 할당하고 싶을때는 괄호를 사용해 따로 묶음으로 지정한다
        int age = 20;

        switch (age)
        {
            case 10:
                Console.WriteLine("");
                break;
            case 20:
                Console.WriteLine("");
                break;
            case 03:
                Console.WriteLine("");
                break;
        }
        STATE state = STATE.Hp;

        switch (state)
        {
            case STATE.Hp:
                Console.WriteLine("");
                break;

            case STATE.Mp:
                Console.WriteLine("");
                break;

            case STATE.Level:
                Console.WriteLine("");
                break;
            default:
                break;
        }
    }
}
             