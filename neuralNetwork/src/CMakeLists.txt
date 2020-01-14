cmake_minimum_required(VERSION 3.5)

link_libraries(GUI)

set(SOURCE_FILES BackPropagation.cpp BackPropagation.h Exceptions.h Layer.cpp Layer.h NeuralNetwork.cpp NeuralNetwork.h NeuralNetworkImplementation.cpp NeuralNetworkImplementation.h Perceptron.cpp Perceptron.h TrainingData.cpp TrainingData.h)


add_library(src ${SOURCE_FILES})

