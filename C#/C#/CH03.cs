using System.Globalization;

public abstract class CH
{
    public abstract void Start();
}


class CH03 : CH
{
    public override void Start()
    {
        string tmp = "Hello World.jpg";

        int save = tmp.IndexOf("W");
        Console.WriteLine(save);

        //검색하는 순서만 달라서 값은 똑같이 나옴
        int save1 = tmp.LastIndexOf("W");
        Console.WriteLine(save1);

        int save2 = tmp.IndexOf("o", 5);
        Console.WriteLine(save2);

        bool save3 = tmp.StartsWith("Helo");
        Console.WriteLine(save3);

        bool save4 = tmp.EndsWith("jpg");
        Console.WriteLine(save4);

        bool save5 = tmp.Contains("o W");
        Console.WriteLine(save5);

        string save6 = tmp.Replace("o W", "O w");
        Console.WriteLine(save6);

        Console.WriteLine();
        string tmp1 = "abccdefghijk";
        Console.WriteLine(tmp1);

        string save7 = tmp1.Insert(3, "x").Insert(7, "y");
        Console.WriteLine(save7);

        string save8 = tmp1 + "llll";
        Console.WriteLine(save8);

        string save9 = tmp1.Remove(5);
        Console.WriteLine(save9);
        Console.WriteLine();

        //,를 기준으로 주면 ,기준으로 배열형태로 들어옴
        string tmp2 = "Hello World11, Hello World12,Hello World13, Hello World14,Hello World";

        //6에서 부터 5개의 문자 반환
        string newtmp2 = tmp2.Substring(6, 5);
        string[] strArr = tmp2.Split(',');


        Console.WriteLine(newtmp2);
        Console.WriteLine(strArr[0]);
        Console.WriteLine(strArr[1]);
        Console.WriteLine(strArr[2]);
        Console.WriteLine();

        //콤마를 기준으로 순서 변경
        string str1 = string.Format("{1} {0}", "Hello", "World");
        Console.WriteLine(str1);

        //-값 +값 정렬 위치 차이
        string str2 = string.Format("{0, -10}: {1}", "이름", "홍길동");
        Console.WriteLine(str2);

        //정렬 후 삽입
        string str3 = string.Format("{0, 10}: {1}", "나이", 23);
        Console.WriteLine(str3);


        string str4 = string.Format("{0:N0}", 123456789);
        string str5 = string.Format("{0:F1}", 1.2345);
        string str6 = string.Format("{0:E}", 1234567.89);
        Console.WriteLine(str4);
        Console.WriteLine(str5);
        Console.WriteLine(str6);


        DateTime datetime = new DateTime(2019, 08, 18, 20, 59, 00);
        string dateStr1 = string.Format("{0:yyyy-MM-dd tt hh:mm:ss (ddd)}", datetime);
        string dateStr2 = datetime.ToString();

        CultureInfo cultureinfo = new CultureInfo("en-US");
        string dateStr3 = datetime.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", cultureinfo);

        Console.WriteLine(dateStr1);
        Console.WriteLine(dateStr2);
        Console.WriteLine(dateStr3);
    }

    static void Main(string[] args)
    {
        CH ch;

        //선택
        Console.WriteLine("CH이름 입력");
        string? name = Console.ReadLine();

        if (name == "CH03")
            ch = new CH03();
        else if (name == "CH0501")
            ch = new CH0501();
        else if (name == "CH0502")
            ch = new CH0502();
        else if (name == "CH0503")
            ch = new CH0503();
        else if (name == "CH0504")
            ch = new CH0504();
        else if (name == "CH0505")
            ch = new CH0505();
        else if (name == "CH0506")
            ch = new CH0506();
        else if (name == "CH0702")
            ch = new CH0702();
        else if (name == "CH0703")
            ch = new CH0703();
        else if (name == "CH0704")
            ch = new CH0704();
        else if (name == "CH0705")
            ch = new CH0705();
        else if (name == "CH0706")
            ch = new CH0706();
        else if (name == "CH0707")
            ch = new CH0707();
        else if (name == "CH0708")
            ch = new CH0708();
        else if (name == "CH0709")
            ch = new CH0709();
        else if (name == "CH0802")
            ch = new CH0802();
        else if (name == "CH0803")
            ch = new CH0803();
        else if (name == "CH0804")
            ch = new CH0804();
        else if (name == "CH0901")
            ch = new CH0901();
        else if (name == "CH1001")
            ch = new CH1001();
        else if (name == "CH1002")
            ch = new CH1002();
        else if (name == "CH1003")
            ch = new CH1003();
        else if (name == "CH1004")
            ch = new CH1004();
        else if (name == "CH1005")
            ch = new CH1005();
        else if (name == "CH1006")
            ch = new CH1006();
        else if (name == "CH1101")
            ch = new CH1101();
        else if (name == "CH1102")
            ch = new CH1102();
        else if (name == "CH1103")
            ch = new CH1103();
        else if (name == "CH1104")
            ch = new CH1104();
        else if (name == "CH1105")
            ch = new CH1105();
        else if (name == "CH1106")
            ch = new CH1106();
        else if (name == "CH1107")
            ch = new CH1107();
        else if (name == "CH1108")
            ch = new CH1108();
        else if (name == "CH1109")
            ch = new CH1109();
        else if (name == "CH1200")
            ch = new CH1200();
        else if (name == "CH1201")
            ch = new CH1201();
        else if (name == "CH1202")
            ch = new CH1202();
        else
            ch = new Default();

        ch.Start();
    }
}
