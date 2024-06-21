interface IPrint
{
    void PrintMessage(string message);
}
class MyConsole : IPrint
{
    public void PrintMessage(string message)
    {
        Console.WriteLine(message);
    }
}

class MyFile : IPrint
{
    private StreamWriter streamWriter;

    public MyFile(string path)
    {
        streamWriter = File.CreateText(path);
        streamWriter.AutoFlush = true;
    }

    public void PrintMessage(string message)
    {
        streamWriter.WriteLine("{0}", message);
    }
}
class Game
{
    IPrint printer;
    public Game(IPrint printer)
    {
        this.printer = printer;
    }
    public void Play()
    {

        printer.PrintMessage("A");
        printer.PrintMessage("B");
        printer.PrintMessage("C");
        printer.PrintMessage("D");
    }
}

class CH0802 :CH
{
    public override void Start()
    {
        Game game = new Game(new MyFile("message.txt:"));
        game.Play();
    }
}

