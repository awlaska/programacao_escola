using Exercicios;

namespace NeedForSpeedTest;

public class Tests
{
    [SetUp]
    public void Setup()
    {
    }

    [Test]
    public void TestCreateCar()
    {
        int speed = 5;
        int batteryDrain = 2;
        var car = new RemoteControlCar(speed, batteryDrain);
    }

    public void TestCreateRaceTrack()
    {
        int distance = 800;
        var raceTrack = new RaceTrack(distance);
    }

    [Test]
    public void TestDriveTheCar()
    {
        int speed = 5;
        int batteryDrain = 2;
        var car = new RemoteControlCar(speed, batteryDrain);
        car.Drive();
        car.DistanceDriven(); // => 5
    }

    [Test]
    public void TestDrainBattery()
    {
        int speed = 5;
        int batteryDrain = 2;
        var car = new RemoteControlCar(speed, batteryDrain);
        car.Drive();
        car.BatteryDrained(); // => false
    }

    [Test]
    public void TestNitro()
    {
        var car = RemoteControlCar.Nitro();
        car.Drive();
        car.DistanceDriven(); // => 50
    }

    [Test]
    public void TestRun()
    {
        int speed = 5;
        int batteryDrain = 2;
        var car = new RemoteControlCar(speed, batteryDrain);
        int distance = 100;
        var raceTrack = new RaceTrack(distance);
        raceTrack.TryFinishTrack(car); // => true
    }

    [Test]
    public void TestTryFinishTrack()
    {
        int speed = 5;
        int batteryDrain = 2;
        var car = new RemoteControlCar(speed, batteryDrain);
        int distance = 100;
        var raceTrack = new RaceTrack(distance);
        raceTrack.TryFinishTrack(car); // => true
    }
}