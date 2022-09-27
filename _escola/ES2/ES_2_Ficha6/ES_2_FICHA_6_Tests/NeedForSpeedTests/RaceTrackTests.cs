using ES_2_Ficha6.NeedForSpeed;
using Xunit;

namespace ES_2_FICHA_6_Tests.NeedForSpeedTests
{
    public class RaceTrackTests
    {
        int _maxDistance = 1250;
        RaceTrack _raceTrack = null;

        public RaceTrackTests()
        {
            _raceTrack = new(_maxDistance);
        }

        #region TryFinishTrack
        [Fact]
        public void TryFinishTrack_True()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            bool expectedFinish = true;

            //Act
            RemoteControlCar nitro = RemoteControlCar.Nitro();
            bool canFinish = _raceTrack.TryFinishTrack(nitro);

            //Assert
            Assert.Equal(expectedFinish, canFinish);
        }
        #endregion
    }
}
