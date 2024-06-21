﻿//이러이러한 함수를 만들어야 한다는 약속
interface IEngine
{
    void startengine();
}

class Parts
{

}

class Engine : Parts, IEngine
{
    public void startengine()
    {
        Console.WriteLine("start");
    }
}

//상속받은 클래스가 있을경우
class NewEngine : Parts, IEngine
{
    public void startengine()
    {
        Console.WriteLine("start");
    }

}

class Truck
{
    IEngine engine;
    IEngine engine1;
    Truck()
    {
        engine = new NewEngine();
        engine.startengine();

        engine1 = new Engine();
    }

}