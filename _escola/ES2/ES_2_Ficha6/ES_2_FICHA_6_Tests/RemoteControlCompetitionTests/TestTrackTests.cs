using ES_2_Ficha6.RemoteControlCompetition;
using System.Collections.Generic;
using Xunit;

namespace ES_2_FICHA_6_Tests.RemoteControlCompetition
{
    public class TestTrackTests
    {
        public TestTrackTests() { }

        #region RankedCars
        [Fact]
        public void GetRankedCars_Prc2_Prc1()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            List<ProductionRemoteControlCar> expectedRankedCarsSorted = new()
            {
                new ProductionRemoteControlCar() { NumberOfVictories = 2 },
                new ProductionRemoteControlCar() { NumberOfVictories = 3 }
            };

            //Act
            ProductionRemoteControlCar prc1 = new() { NumberOfVictories = 3 };
            ProductionRemoteControlCar prc2 = new() { NumberOfVictories = 2 };
            List<ProductionRemoteControlCar> rankedCarsSorted = TestTrack.GetRankedCars(prc1, prc2);

            //Assert
            Assert.Equal(expectedRankedCarsSorted, rankedCarsSorted);
        }
        #endregion
    }
}
