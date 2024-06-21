using System.Collections;

class CH1108 : CH
{
    public override void Start()
    {
        int[] score = { 89, 80, 100, 70, 60 };

        Hashtable hashtable = new Hashtable();
        hashtable["name"] = "홍길동";
        hashtable["id"] = "hong";
        hashtable["Score"] = score;
        hashtable[true] = "트루";
        hashtable[1] = "일반";

        int[] tmpScores = (int[])hashtable["Score"];

        for (int i = 0; i < tmpScores.Length; i++)
        {
            Console.WriteLine(tmpScores[i]);
        }

    }
}
