class Calculator_CH0702
{
    //static은 전역 변수
    //class 객체를 생성하지 않아도 자동으로 생성
    public static int calcNumber = 0;
    public static int Add(int i, int j)
    {
        calcNumber++;
        return i + j;
    }
}

class CH0702 : CH
{
    public override void Start()
    {

        int resutlt = Calculator_CH0702.Add(2, 3);
        resutlt = Calculator_CH0702.Add(3, 5);
        resutlt = Calculator_CH0702.Add(1, 5);
        Console.WriteLine($"{Calculator_CH0702.calcNumber}");
    }
}

