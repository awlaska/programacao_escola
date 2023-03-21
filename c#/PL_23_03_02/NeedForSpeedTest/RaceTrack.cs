using Exercicios;

namespace NeedForSpeedTest;

public class RaceTrack
{
    private int distance = 0;
/*
2. Creating a race track
Allow creating a race track by defining a constructor for the RaceTrack class that takes the track's distance in meters as its
sole parameter (which is of type int):
int distance = 800;
var raceTrack = new RaceTrack(distance);
*/
    public RaceTrack(int distance)
    {
        this.distance = distance;
    }
    
/*
6. Check if a remote control car can finisha race
To finish a race track, a car hasto be able to drive the track's distance. This means not draining its battery before having crossed the
finish line. Implementthe RaceTrack.TryFinishTrack() method that takes a RemoteControlCar instance as its parameter and
returns true if the car can finish the race track; otherwise, return false:
int speed = 5;
int batteryDrain = 2;
var car = new RemoteControlCar(speed, batteryDrain);
int distance = 100;
var raceTrack = new RaceTrack(distance);
raceTrack.TryFinishTrack(car); // => true
 */

    public void TryFinishTrack(RemoteControlCar car)
    {
        float laps = distance / car.speed;
        float makesIt = car.drain * laps;
        if (makesIt > distance) Console.WriteLine(false);
        else Console.WriteLine(true);
    }
}