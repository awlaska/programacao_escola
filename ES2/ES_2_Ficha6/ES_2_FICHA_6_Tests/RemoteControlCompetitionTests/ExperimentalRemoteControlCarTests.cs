using ES_2_Ficha6.RemoteControlCompetition;
using ES_2_Ficha6.RemoteControlCompetition.Interfaces;
using Xunit;

namespace ES_2_FICHA_6_Tests.RemoteControlCompetition
{
    public class ExperimentalRemoteControlCarTests
    {
        IRemoteControlCar _productionRemoteControlCar = null;
        public ExperimentalRemoteControlCarTests()
        {
            _productionRemoteControlCar = new ExperimentalRemoteControlCar();
        }

        #region DistanceTravelled
        [Fact]
        public void DistanceTravelled_Tens()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            int expectedDistanceTravelled = 20;

            //Act
            _productionRemoteControlCar.Drive();
            int actualDistanceTravelled = _productionRemoteControlCar.DistanceTravelled;

            //Assert
            Assert.Equal(expectedDistanceTravelled, actualDistanceTravelled);
        }
        #endregion
    }
}
