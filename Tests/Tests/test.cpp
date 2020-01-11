#include "pch.h"
#include "../../NeuralNetwork/NeuralNetwork/NeuralNetwork.h"
#include "../../NeuralNetwork/NeuralNetwork/TrainingData.h"
#include "../../NeuralNetwork/NeuralNetwork/ActivFunctions.h"

TEST(BasicTest, TrueEqualsTrue) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Test, ActivFunctionsTest1) {

	EXPECT_EQ(1.0, linear(1.0));
}

TEST(Test, ActivFunctionsTest2) {

	EXPECT_EQ(1, signum(1.0));
}

//TEST(ResultOfNeuralNet, Test1) {
//	NeuralNetwork n1(3,9);
//	std::vector<double> inputValues = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };
//	ASSERT_LT(0, n1.getResult(inputValues));
//	ASSERT_LT(n1.getResult(inputValues),1);
//}

//TEST(trainingDataTest, test1) {
//	TrainingData t1("");
//	EXPECT_EQ(0, t1.getSizeOfData());
//}