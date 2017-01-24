# Makefile for Evolution
CXXFLAGS = -g

all: div main
rebuild: div clean main
main: Main.o Controller.o World.o Biome.o Weather.o Plant.o Species.o Lifeform.o Genome.o Regulator.o Gene.o
	$(CXX) $(CXXFLAGS) Main.o Controller.o World.o Biome.o Weather.o Plant.o Species.o Lifeform.o Genome.o Regulator.o Gene.o
Main.o: src/Main.cpp src/Controller.hpp src/World/World.hpp
	$(CXX) $(CXXFLAGS) -c src/Main.cpp
Controller.o: src/Controller.cpp src/Controller.hpp src/World/World.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/Controller.cpp
World.o: src/World/World.cpp src/World/World.hpp src/World/Biome.hpp src/World/Weather.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/World/World.cpp
Biome.o: src/World/Biome.cpp src/World/Biome.hpp src/World/Weather.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/World/Biome.cpp
Weather.o: src/World/Weather.cpp src/World/Weather.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/World/Weather.cpp
Plant.o: src/Life/Plant.cpp src/Life/Plant.hpp src/Life/Lifeform.hpp src/genome/Genome.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/Life/Plant.cpp
Species.o: src/Life/Species.cpp src/Life/Species.hpp src/Life/Lifeform.hpp src/genome/Genome.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/Life/Species.cpp
Lifeform.o: src/Life/Lifeform.cpp src/Life/Lifeform.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/Life/Lifeform.cpp
Genome.o: src/genome/Genome.cpp src/genome/Genome.hpp src/genome/Regulator.hpp src/genome/Gene.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/genome/Genome.cpp
Regulator.o: src/genome/Regulator.cpp src/genome/Regulator.hpp src/genome/Gene.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/genome/Regulator.cpp
Gene.o: src/genome/Gene.cpp src/genome/Gene.hpp src/Options.hpp
	$(CXX) $(CXXFLAGS) -c src/genome/Gene.cpp
clean:
	rm -f *.o a.out
div:
	# '---X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X----'
	# '----X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X---'
	# '---X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X----'
	# '----X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X---'
